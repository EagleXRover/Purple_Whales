import cv2
import numpy as np

class Line_part():
    def __init__(self, img = None, mask = None, part = 0, total_parts = 4):
        # Center of the line
        self.center = np.array([0, 0]) # (x, y)

        # Image
        self.img = img
        self.mask = mask

        self.part = part
        self.total_parts = total_parts

    def __call__(self, right = False):
        [contours, _] = cv2.findContours(self.mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        if len(contours) > 0 :
            c = max(contours, key=cv2.contourArea)
            M = cv2.moments(c)

            if M["m00"] != 0:
                self.center[0] = int(M['m10']/M['m00'])
                self.center[1] = int(M['m01']/M['m00'])
                if self.center[0] > 20 and right or self.center[0] < 100 and not right:    
                    cv2.drawContours(self.img, c, -1, (0,255,0), 1)
                    cv2.circle(self.img, self.center, 5, (0,0,0), -1)
                    self.center[0] = self.center[0] + (self.img.shape[1] if right else 0)
                    self.center[1] = self.center[1] + (self.part * self.img.shape[0])
                    return
                else:
                    self.center = np.array([None, None])
                    return
        else:
            #print("No contours found")
            self.center = np.array([None, None])
            return
        
class Line():
    def __init__(self, parts = 4, image = None, mask = None):
        # Center of the line
        self.center = np.array([0, 0]) # (x, y)

        # Image
        self.img = image
        self.mask = mask

        self.parts = np.array([])
        self.flag = False
        height_div = self.img.shape[0] // parts

        self.all_centers = np.array([])
        self.x_centers = np.array([])
        self.y_centers = np.array([])
        self.coeff = np.array([])
        self.values = np.array([])

        # Parts
        for i in range(parts):
            self.parts = np.append(self.parts, Line_part(self.img[(i*height_div):((i+1)*height_div),:], self.mask[(i*height_div):((i+1)*height_div),:], i))


    def __call__(self, right = False):

        c = 0
        for i, part in enumerate(self.parts, 0): 
            part(right=True if right else False)
            if part.center.all() != None: 
                self.center += part.center
                c += 1
                self.all_centers = np.append(self.all_centers, np.array([part.center]))


        self.center = self.center // c   
        cv2.circle(self.img, (self.center[0] - (self.img.shape[1] if right else 0), self.center[1]), 5, (0, 0, 255), -1)
        
        
        if c > len(self.parts) - 2:
            for i, data in enumerate(self.all_centers, 0):
                if i%2 != 0: self.x_centers = np.append(self.x_centers, data)
                else: self.y_centers = np.append(self.y_centers, data)

        if self.x_centers.size == 0 or self.y_centers.size == 0: return
        self.coeff = np.polyfit(self.x_centers, self.y_centers, 2)
        y = np.linspace(0, self.img.shape[0], self.img.shape[0])
        x = self.coeff[0]*y**2 + self.coeff[1]*y + self.coeff[2]
        x = x - (self.img.shape[1] if right else 0)
        self.values = np.vstack([x, y]).T
        cv2.polylines(self.img, [np.int32(self.values)], isClosed=False, color=(0, 255, 0), thickness=2)
        x = x + (self.img.shape[1] if right else 0)
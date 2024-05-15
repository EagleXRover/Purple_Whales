import numpy as np
import cv2

def obtain_center(left_line, right_line, dim = (240, 240)):

    left_center_x = left_line.center[0]
    right_center_x = right_line.center[0]
    left_center_y = left_line.center[1]
    right_center_y = right_line.center[1]

    if left_line.center.all() == None and right_line.center.all() == None: return np.array([0, 0])

    if left_line.center[0] == None and right_line.center[0] != None:
        left_center_x = right_line.center[0] - (dim[0] / 2)

    if right_line.center[0] == None and left_line.center[0] != None:
        right_center_x = left_line.center[0] + (dim[0] / 2)

    if left_line.center[1] == None and right_line.center[1] != None:
        left_center_y = right_line.center[1] - (dim[1] / 2)

    if right_line.center[1] == None and left_line.center[1] != None:
        right_center_y = left_line.center[1] + (dim[1] / 2)
      
    center_x = (left_center_x + right_center_x) / 2
    center_y = (left_center_y + right_center_y) / 2

    return center_x, center_y

def line_center(left_line, right_line, dim = (240.0, 240.0)):
    try:
        r_val = right_line.values
        l_val = left_line.values

        if left_line.values.size == 0 and right_line.values.size == 0: return 0
        
        if left_line.values.size == 0 and right_line.values.size != 0:
            l_val = right_line.values - (dim[0] / 2.0)
        
        if right_line.values.size == 0 and left_line.values.size != 0:
            r_val = left_line.values + (dim[0] / 2.0)

        return np.mean((l_val + r_val / 2.0) - (dim[0] / 2.0))
    
    except:
        print("Error")
        return 0
    
def center_error(center_x, center_y, dim = (240.0, 240.0)):
    return center_x - (dim[0] / 2.0), center_y - (dim[1] / 2.0)

def draw_lines(frame, left_line, right_line):
    cv2.line(frame, (0, left_line.center[1]), (120, left_line.center[1]), (0, 255, 0), 1)
    cv2.line(frame, (120, right_line.center[1]), (240, right_line.center[1]), (0, 255, 0), 1)

def warper(img):
    h, w = img.shape[:2]
    
    # Points of the original image
    # TO CHECK!!!
    src = np.float32([
        [60, 240],
        [90, 160], 
        [150, 160], 
        [180, 240]
    ])

    # Points for the new image
    dst = np.float32([
        [60, 240],
        [60, 0], 
        [w-60, 0], 
        [w-60, 240]
    ])

    M = cv2.getPerspectiveTransform(src, dst)
    warped = cv2.warpPerspective(img, M, (w, h), flags=cv2.INTER_NEAREST)
    return warped

def unwrapper(img):
    h, w = img.shape[:2]
    
    # Points of the original image
    # TO CHECK!!!
    src = np.float32([
        [60, 240],
        [90, 160], 
        [150, 160], 
        [180, 240]
    ])

    # Points for the new image
    dst = np.float32([
        [60, 240],
        [60, 0], 
        [w-60, 0], 
        [w-60, 240]
    ])

    Minv = cv2.getPerspectiveTransform(dst, src)
    unwarped = cv2.warpPerspective(img, Minv, (w, h), flags=cv2.INTER_NEAREST)
    return unwarped
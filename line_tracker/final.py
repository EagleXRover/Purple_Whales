import cv2
import numpy as np
from line_class import Line
from functions import *

video = cv2.VideoCapture(1)

while True:

    ret, frame = video.read()

    frame = cv2.resize(frame, (240, 240))

    h, w, _ = frame.shape

    """ Functions for wrapping and masking the image """
    warped = warper(frame)

    hsv = cv2.cvtColor(warped, cv2.COLOR_BGR2HSV)

    lower_white = np.array([0, 0, 168], np.uint8)
    upper_white = np.array([180, 255, 255], np.uint8)

    mask = cv2.inRange(hsv, lower_white, upper_white)
    
    left_mask = mask[:, :120]
    right_mask = mask[:, 120:]

    edges = cv2.Canny(mask, 75, 150)

    left_line = Line(image=warped[:, :120], mask=left_mask, parts=8)
    right_line = Line(image=warped[:, 120:], mask=right_mask, parts=8)
    
    left_line()
    right_line(right=True)

    mid_x = frame.shape[0] // 2
    mid_y = frame.shape[1] // 2

    center_x, center_y = obtain_center(left_line, right_line)

    error = center_error(center_x, center_y)
    center = line_center(left_line, right_line)

    final = unwrapper(warped)


    cv2.line(frame, (mid_x, mid_y - 10), (mid_x, mid_y + 10), (0, 0, 255), 1)
    cv2.line(frame, (mid_x - 10, mid_y), (mid_x + 10, mid_y), (0, 0, 255), 1)
    cv2.line(warped, (int(center + mid_x), mid_y - 10), (int(center + mid_x), mid_y + 10), (255, 0, 255), 1)
    cv2.circle(frame, (int(center_x), int(center_y)), 5, (0, 255, 0), -1)
    cv2.putText(frame, f'Error: {error[0]}', (10, 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255), 1)
    cv2.putText(frame, f'Line Error: {center}', (10, 20), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255), 1)

    result = cv2.addWeighted(frame, 1, final, 0.5, 0)


    cv2.imshow('Result', result)
    cv2.imshow('Frame', frame)
    #cv2.imshow('Edges', edges)
    #cv2.imshow('Mask', mask)
    cv2.imshow('Warped', warped)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

video.release()
cv2.destroyAllWindows()
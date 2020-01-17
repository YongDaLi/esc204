'''
Yong Da Li
Friday, January 17, 2019
ESC203

first test run of OpenCV python libraries
    - colour filters
    - feature detection
'''

import cv2 as cv
import numpy as np
import img_lib

filename1 = 'img1.jpg'
filename2 = 'img2.jpg'

print("-"*30)
print("\nStarting OpenCV test")

# --------- loading image

print("Loading image: ", filename1)
img1 = cv.imread(filename1)
print("Loading image: ", filename2)
img2 = cv.imread(filename2)

'''
img = cv.imread(filename, 0) # loads image in greyscale

print("\nPixel data at 0,0:", img[0,0])
print("The 3 numbers are RBG values [ red green blue]")
'''

'''
img_resized = cv.resize(img, (5000,200))
img_resized = img_lib.ResizeWithAspectRatio(img, width=500)
'''

#----------- image arithmetic

img1 = cv.resize(img1, (500,300))
img2 = cv.resize(img2, (500,300))

# dst = a1*img1 + a2*img2 + b
dst = cv.addWeighted(img1, 0.5, img2, 0.5, 0)

cv.imshow('Merged image', dst)
cv.waitKey(0)

# ------ Harris Corner detection
gray = cv.cvtColor(img1, cv.COLOR_BGR2GRAY)

gray = np.float32(gray)
dst = cv.cornerHarris(gray,2,3,0.04)

#result is dilated for marking the corners, not important
dst = cv.dilate(dst,None)

# Threshold for an optimal value, it may vary depending on the image.
img1[dst>0.01*dst.max()]=[0,0,255]

cv.imshow('dst',img1)
cv.waitKey(0)

print("-"*30)
print("\nEnd of OpenCV test")


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
from matplotlib import pyplot as plt

import img_lib

filenames = ['img1.jpg', 'img2.jpg', 'img3.jpg']


# https://opencv-python-tutroals.readthedocs.io/en/latest/py_tutorials/py_core/py_basic_ops/py_basic_ops.html#goal
def loadFiles():
    # img = cv.imread(filename, 0) # loads image in greyscale
    img = []
    for name in filenames:    
        print("Loading image: ", name)
        img = img + [cv.imread(name)]

    return img


# https://opencv-python-tutroals.readthedocs.io/en/latest/py_tutorials/py_core/py_basic_ops/py_basic_ops.html
def imageData(img):
    print("\nPixel data at 0,0:", img[0,0])
    print("The 3 numbers are RBG values [ red green blue]")


# https://opencv-python-tutroals.readthedocs.io/en/latest/py_tutorials/py_core/py_image_arithmetics/py_image_arithmetics.html
def imageArithmetic(img1, img2):
    # ratio resizing
    # img = img_lib.ResizeWithAspectRatio(img, width=500)

    img1 = cv.resize(img1, (500,300))
    img2 = cv.resize(img2, (500,300))

    # dst = a1*img1 + a2*img2 + b
    dst = cv.addWeighted(img1, 0.5, img2, 0.5, 0)

    cv.imshow('Merged image', dst)
    if (cv.waitKey(0)):
        cv.destroyAllWindows()

# https://opencv-python-tutroals.readthedocs.io/en/latest/py_tutorials/py_feature2d/py_features_harris/py_features_harris.html
def harrisCornerDetection(img):
    img = img_lib.ResizeWithAspectRatio(img, width=400)

    gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
    gray = np.float32(gray)

    # img = input should be grayscale and float32 type
    # blockSize = size of neighbourhood for corner detection
    # ksize = aperture size of Sobel derivative (how far to step when determining change in intensity?)
    # k = Harris detector free parameter 
        # scoring function: R = det(M) - k*tr(M)^2
    dst = cv.cornerHarris(gray,2,3,0.04)

    #result is dilated for marking the corners, not important
    dst = cv.dilate(dst,None)

    # threshold for "corner" = 1% of max value --> colored red
    img[dst>0.01*dst.max()]=[0,0,255]   # actually [blue, green, red]

    cv.imshow('dst',img)
    if (cv.waitKey(0)):
        cv.destroyAllWindows()


# https://opencv-python-tutroals.readthedocs.io/en/latest/py_tutorials/py_feature2d/py_shi_tomasi/py_shi_tomasi.html
def shiTomasiCornerDetection(img):
    img = img_lib.ResizeWithAspectRatio(img, width=600)

    gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)

    # modification of Harris scorring function
    # R = min(eigenvalue1, eigenvalue2) --> eigenvalues of matrix M
    # (input, number of corners, quality level 0-1, minimum distance between corners)
    corners = cv.goodFeaturesToTrack(gray, 25, 0.01, 10)
    corners = np.int0(corners)

    for i in corners:
        x,y = i.ravel()
        cv.circle(img, (x,y), 3, 255, -1)

    plt.imshow(img)
    plt.show()
    if(cv.waitKey(0)):
        cv.destroyAllWindows()



def main():
    print("-"*30)
    print("\nStarting OpenCV test")

    images = loadFiles()
    imageData(images[0])
    imageArithmetic(images[0], images[2])
    harrisCornerDetection(images[2])
    shiTomasiCornerDetection(images[2])

    print("-"*30)
    print("\nEnd of OpenCV test")

main()

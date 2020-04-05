#
# Created by NDHuy on 05/04/2020
# Copyright 2020 by SEstudio
# Search Max value of set a, b, c with a, b, c is Float
#

def main():
    # Input data from console
    a = float(input("Input a = "))
    b = float(input("Input b = "))
    c = float(input("Input c = "))

    # Bussiness
    if a < b:
        if b < c:
            max = c
        else:
            max = b
    elif a < c:
        max = c
    else:
        max = a

    # Output result to screen
    print("Max of " + str(a) + ", " + str(b) + ", " + str(c) + " is " + str(max))
    print("Max of %f, %f, %f is %f" %(a, b, c, max))

if __name__ == "__main__":
    main()
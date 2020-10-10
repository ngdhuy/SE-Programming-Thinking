#
#  Created by NDHuy at 09/04/2020
#  Copyright 2020 by SEstudio
#  Input 4 integer number. Sort ascending
#

def main():
    a = int(input("Input integer a = "))
    b = int(input("Input integer b = "))
    c = int(input("Input integer c = "))
    d = int(input("Input integer d = "))

    if a > b:
        temp = a
        a = b
        b = temp

    if c > d:
        temp = c
        c = d
        d = temp

    if a > c:
        temp = a
        a = c
        c = temp
    
    if b > d:
        temp = b
        b = d
        d = temp

    if b > c:
        temp = b
        b = c
        c = temp
    
    print("%d < %d < %d < %d" %(a, b, c, d))


if __name__ == "__main__":
    main()
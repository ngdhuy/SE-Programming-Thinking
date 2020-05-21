#
#  Created by NDHuy on 21/05/2020
#  Copyright 2020 by SEstudio
#  Array 01 Dimension
#

def Enter(a):
    n = int(input("Enter num of array: "))
    i = 0
    while(i < n):
        temp = int(input("a[%d] = " %(i)))
        a.append(temp)
        i += 1


def Output(a):
    s = ""
    for i in a:
        s += str(i) + "\t"
    print(s)


def PrintOdds(a):
    s = "Odds item: "
    for i in a:
        if(i % 2 != 0):
            s += str(i) + "\t"
    print(s)


def PrintEvens(a):
    s = "Evens item: "
    for i in a:
        if(i % 2 == 0):
            s += str(i) + "\t"
    print(s)


def CountValue(a, value):
    count = 0
    for i in a:
        if(i == value):
            count += 1

    return count

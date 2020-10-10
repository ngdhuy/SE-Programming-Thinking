#
#  Created by NDHuy on 05/04/2020
#  Copyright 2020 by SEstudio
#  Input a integer number. After that print character of number
#

def number_to_string(num):
    switcher = {
        0 : "Zero",
        1 : "One", 
        2 : "Two",
        3 : "Three",
        4 : "Four",
        5 : "Five", 
        6 : "Six", 
        7 : "Seven", 
        8 : "Eight",
        9 : "Nine"
    }
    return switcher.get(num, "Invalid character of number")


def main():
    num = int(input("Input a integer number: "))
    print(number_to_string(num))


if __name__ == "__main__":
    main()
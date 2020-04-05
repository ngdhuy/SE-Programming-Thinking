#
#  Created by NDHuy on 04/05/2020
#  Copyright 2020 by SEstudio
#  Input one integer number, which is the number of year.
#  Check this year is Leap year?
#

def main():
    year = int(input("Input a number of year: "))

    flagLeapYear = ((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0)

    if flagLeapYear:
        print(str(year) + " is leap year")
    else:
        print(str(year) + " is NOT leap year")


if __name__ == "__main__":
    main()
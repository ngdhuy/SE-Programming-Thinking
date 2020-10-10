#
#  Created by NDHuy at 11/04/2020
#  Copyright 2020 by SEstudio
#  Enter one day (day, month, year)
#  Calculate and print the next day
#

def main():
    day = int(input("Enter day: "))
    month = int(input("Enter month: "))
    year = int(input("Enter year: "))

    if (0 < day and day <= 31) and (0 < month and month <= 12) and (0 < year):
        if month == 12:
            if day == 31:
                day = 1
                month = 1
                year += 1
            else:
                day += 1
        elif month == 2:
            if day < 28:
                day += 1
            else:
                if day == 28:
                    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
                        day = 29
                    else:
                        day = 1
                        month += 1
                else:
                    day = 1
                    month += 1
        elif (month == 1) or (month == 3) or (month == 5) or (month == 7) or (month == 8) or (month == 10):
            if day == 31:
                day = 1
                month += 1
            else:
                day += 1
        elif (month == 4) or (month == 6) or (month == 9) or (month == 11):
            if day == 30:
                day = 1
                month += 1
            else:
                day += 1
        
        print("The next day %d/%d/%d" %(day, month, year))

    else:
        print("Invalid date %d/%d/%d" %(day, month, year))



if __name__ == "__main__":
    main()
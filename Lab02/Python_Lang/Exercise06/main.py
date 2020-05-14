#
#  Created by NDHuy at 03/05/2020
#  Copyright 2020 by SEstudio
#  15CTT31-BaiTapLyThuyet-04.pdf: Bai 5, 6, 7
#  

from lib import date

def main():
    day = date.enterN("Enter day >= 0: ", 1, 31)
    month = date.enterN("Enter month >= 0: ", 1, 12)
    year = date.enterN("Enter year >= 0: ", 0)
    print("=> %d/%d/%d" %(day, month, year))
    print("Day of year: %d" %(date.getDayOfYear(day, month, year)))
    print("Day of Anno Domini: %d" %(date.getDayOfAnnoDomini(day, month, year)))
    date.printNumOfWeek(day, month, year)
        

if __name__ == "__main__":
    main()
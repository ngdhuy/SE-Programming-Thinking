#
#  Created by NDHuy at 12/04/2020
#  Copyright 2020 by SEstudio
#  Check perfect square number
#

def main():
    n = int(input("Enter a iteger number n > 0: "))

    if n <= 0:
        print("%d is not greater than Zero" %(n))
    else:
        flag = False
        if (n == 1):
            flag = True
        else:
            i = 1
            while i <= (n / 2):
                if (i * i) == n:
                    flag = True
                    break
                i += 1

        if (flag == True):
            print("%d is a perfect square number" %(n))
        else:
            print("%d is not a perfect square number" %(n))


if __name__ == "__main__":
    main()
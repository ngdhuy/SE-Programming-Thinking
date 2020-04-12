#
#  Created by NDHuy at 12/04/2020
#  Copyright 2020 by SEstudio
#  Find Max/Min digit number
#

def main():
    n = int(input("Enter a integer number n > 0: "))

    if (n < 0):
        print("%d is not greater than Zero" %(n))
    else:
        max = n % 10
        min = n % 10

        i = n
        while (i > 0):
            t = i % 10
            max = t if (t > max) else max
            min = t if (t < min) else min
            i = int(i / 10)    
        else:
            print("Max digit = %d and Min digit = %d" %(max, min))

if __name__ == "__main__":
    main()
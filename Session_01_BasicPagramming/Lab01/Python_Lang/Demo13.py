#
#  Created by NDHuy at 12/04/2020
#  Copyright 2020 by SEstudio
#  Check prime number
#

def main():
    n = int(input("Enter a integer number n > 0: "))

    if (n < 0):
        print("%d is not greater than Zero" %(n))
    elif (n < 2):
        print("%d is NOT a prime number" %(n))
    else:
        i = 2
        while (i <= (n / 2)):
            if (n % i == 0):
                break
            i += 1

        if (i >= (n / 2)):
            print("%d is a prime number" %(n))
        else:
            print("%d is NOT a prime number" %(n))


if __name__ == "__main__":
    main()
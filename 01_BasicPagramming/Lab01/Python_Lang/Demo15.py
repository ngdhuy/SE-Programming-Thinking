#
#  Created by NDHuy at 12/04/2020
#  Copyright 2020 by SEstudio
#  Check increment or decreament digit
#

def main():
    n = int(input("Enter a integer number n > 0: "))

    if (n < 0):
        print("%d is not greater than Zero" %(n))
    else:
        t = n % 10
        k = int(n / 10) % 10

        isIncrement = True if (t > k) else False

        i = int(n / 10)
        while(i > 0):
            k = i % 10

            if isIncrement:
                if (t < k):
                    break
            else:
                if (t > k):
                    break

            t = k
            i = int(i / 10)

        if (i > 0):
            print("%d is NOT increment or decrement" %(n))
        else:
            if (isIncrement):
                print("%d is INCREMENT digit" %(n))
            else:
                print("%d is DECREMENT digit" %(n))

if __name__ == "__main__":
    main()
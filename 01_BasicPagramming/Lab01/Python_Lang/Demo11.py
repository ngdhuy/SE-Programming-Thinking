#
#  Created by NDHuy at 12/04/2020
#  Copyright 2020 by SEstudio
#  Check symmetry number
#

def main():
    n = int(input("Enter n > 0: "))

    if n >= 0:
        i = n
        m = 0
        while i != 0:
            m = (m * 10) + (i % 10)
            i = int(i / 10)

        print("Symmetry number: %d" %(m))

        if n == m:
            print("%d is symmetry number" %(n))
        else:
            print("%d is not symmetry number" %(n))
    else:
        print("%d is not greate than Zero" %(n))


if __name__ == "__main__":
    main()
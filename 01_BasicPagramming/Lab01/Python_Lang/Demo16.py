#
#  Created by NDHuy at 16/04/2020
#  Copyright 2020 by SEstudio
#  Find Fibonacci n with:
#      a0 = a1 = 1
#      a2 = a1 + a0
#      ...
#      an = a(n - 1) + a(n - 2)
#

def main():
    n = int(input("Enter a integer n = "))

    if (n < 0):
        print("Cannot find Fibonacci for a(%d)" %(n))
    else:
        if (n == 0) or (n == 1):
            a_n = 1
        else:
            a_1 = 1
            a_2 = 1
            i = 2
            while (i <= n):
                a_n = a_1 + a_2
                a_2 = a_1
                a_1 = a_n
                i += 1
        print("Fibonacci a(%d) = %d" %(n, a_n))


if __name__ == "__main__":
    main()
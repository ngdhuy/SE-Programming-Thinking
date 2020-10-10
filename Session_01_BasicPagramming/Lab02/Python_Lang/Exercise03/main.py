#
#  Created by NDHuy at 18/04/2020
#  Copyright 2020 by SEstudio
#  Integer number
#
from module import lib

def main():
    n = int(input("Enter a integer number n > 0: "))

    print("Revert number is %d" %(lib.RevertNumber(n)));
    print("Number is Symmetry: %d" %(lib.isSymmetry(n)));
    print("Number is Perfect Square: %d" %(lib.isPerfectSquare(n)));
    print("Number is Prime: %d" %(lib.isPrime(n)));
    print("Sum of Odd number: %d" %(lib.sumOddNumber(n)));
    print("Sum of Even number: %d" %(lib.sumEvenNumber(n)));
    print("Sum of Prime number: %d" %(lib.sumPrimeNumber(n)));
    print("Sum of Perfect Square number: %d" %(lib.sumPerfectSquareNumber(n)));


if __name__ == "__main__":
    main()
//
//  Created by NDHuy at 18/04/2020
//  Copyright 2020 by SEstudio
//  Integer number
//

#include <stdio.h>
#include "lib.h"

int main()
{
    int n;
    printf("Enter a integer number n > 0: ");
    scanf("%d", &n);
    
    printf("Number %d have: \n", n);
    printf("Revert number is %d \n", RevertNumber(n)); 
    printf("Number is Symmetry: %d \n", isSymmetry(n));
    printf("Number is Perfect Square: %d \n", isPerfectSquare(n));
    printf("Number is Prime: %d \n", isPrime(n));
    printf("Sum of Odd number: %d \n", sumOddNumber(n));
    printf("Sum of Even number: %d \n", sumEvenNumber(n));
    printf("Sum of Prime number: %d \n", sumPrimeNumber(n));
    printf("Sum of Perfect Square number: %d \n", sumPerfectSquareNumber(n));
    return 0;
}
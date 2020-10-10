//
//  Created by NDHuy at 18/04/2020
//  Copyright 2020 by SEstudio
//  Integer number
//

#include "lib.h"

int RevertNumber(int n)
{
    if (n < 0)
        return -1;
    
    int revertNumber = 0;
    while(n > 0)
    {
        revertNumber = (revertNumber * 10) + (n % 10);
        n = n / 10;
    }
    
    return revertNumber;
}

bool isSymmetry(const int n)
{
    if (n < 0)
        return false;

    // int revertNumber = RevertNumber(n);

    // if (n == revertNumber)
    //     return true;
    // else
    //     return false;

    return n == RevertNumber(n);
}

bool isPerfectSquare(const int n)
{
    if (n < 0)
        return false;

    int m = n / 2;
    for(int i = 1; i <= m; i++)
    {
        if ((i  * i) == n)
            return true;
    }
    
    return false;
}

bool isPrime(const int n)
{
    if (n <= 1)
        return false;

    int m = n / 2;
    for(int i = 2; i <= m; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int sumOddNumber(int n)
{
    if (n < 0)
        return -1;
    
    int sum = 0;
    while(n > 0)
    {
        int i = n % 10;
        if(i % 2 != 0)
            sum += i;
        n = n / 10;
    }
    return sum;
}

int sumEvenNumber(int n)
{
    if (n < 0)
        return -1;
    
    int sum = 0; 
    while(n > 0)
    {
        sum += ((n % 10) % 2 == 0) ? (n % 10) : 0;
        n /= 10;
    }

    return sum;
}

int sumPrimeNumber(int n)
{
    if (n < 0)
        return -1;
    
    int sum = 0; 
    while(n > 0)
    {
        int i = n % 10;
        if(isPrime(i))
            sum += i;
        n /= 10;
    }

    return sum;
}

int sumPerfectSquareNumber(int n)
{
    if (n < 0)
        return -1;
    
    int sum = 0; 
    while(n > 0)
    {
        int i = n % 10; 
        if (isPerfectSquare(i))
            sum += i;
        n /= 10;
    }

    return sum;
}
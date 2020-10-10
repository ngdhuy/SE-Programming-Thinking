//
//  Created by NDHuy at 28/04/2020
//  Copyright 2020 by SEstudio
//  15CTT31-BaiTapLyThuyet-04.pdf: Bai 2
//  

#include "lib.h"

int Input()
{
    int n; 
    do
    {
        printf("Enter n >= 0: ");
        scanf("%d", &n);
        if(n < 0)
            printf("n must be greater than ZERO! Please, try again. \n");
    } while (n < 0);
    return n;
}

bool IsPrime(int n)
{
    if(n == 0 || n == 1)
        return false;
    
    int m = n / 2;
    for(int i = 2; i <= m; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

void PrintPrimeLessThanN(int n)
{
    printf("The prime number less than n = %d: ", n);
    for(int i = 2; i <= n; i++)
    {
        if(IsPrime(i) == true)
            printf("%d\t", i);
    }
    printf("\n");
}

void PrintDevisorPrimeOfN(int n)
{
    printf("The Devisor Prime number of n = %d: ", n);
    for(int i = 2; i <= n; i++)
    {
        if((IsPrime(i) == true) && (n % i == 0))
            printf("%d\t", i);
    }
    printf("\n");
}

void PrintNumberOfN(int n)
{
    printf("Number of n: ");
    while(n > 0)
    {
        printf("%d ", n % 10);
        n = n / 10;
    }
    printf("\n");
}

int RevertNumber(int n)
{
    int m = 0;
    while(n > 0)
    {
        m = (m * 10) + (n % 10);
        n = n / 10;
    }
    return m;
}

void PrintRevertNumberOfN(int n)
{
    int m = RevertNumber(n);
    printf("Revert ");
    PrintNumberOfN(m);
}

bool IsPerfecSquareNumber(int n)
{
    int m = n / 2;
    for(int i = 1; i <= m; i++)
    {
        int k = 0;
        for(int j = 1; j <= i; j++)
            k = k + i;
        
        if(k == n)
            return true;
    }
    return false;
}

void Print_N_FirstNmberPerfectSquare(int n)
{
    int i = 1;
    int j = 1;
    
    printf("%d first Perfect Square number: ", n);
    while(i <= n)
    {
        if(IsPerfecSquareNumber(j) == true)
        {
            printf("%d\t", j);
            i++;
        }
        j++;
    }
    printf("\n");
}
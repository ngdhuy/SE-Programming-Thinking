//
//  Created by NDHuy on 21/05/2020
//  Copyright 2020 by SEstudio
//  Array 01 Dimension
//

#include "array.h"

void Input(int a[], int &n)
{
    do
    {
        printf("Enter num of array n = ");
        scanf("%d", &n);

        if(0 > n || n > MAX)
            printf("n must between 0 and %d. Try again later!\n", MAX);
    } while (0 > n || n > MAX);

    int temp;
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &temp);
        a[i] = temp;
    }
}

void Output(const int a[], const int &n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void PrintOdds(const int a[], const int &n)
{
    printf("Odds item: ");
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
            printf("%d\t", a[i]);
    }
    printf("\n");
}

void PrintEvens(const int a[], const int &n)
{
    printf("Evens item: ");
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            printf("%d\t", a[i]);
    }
    printf("\n");
}

int CountValue(const int a[], const int &n, const int value)
{
    int count = 0; 
    for(int i = 0; i < n; i++)
    {
        if(a[i] == value)
            count++;
    }
    return count;
}
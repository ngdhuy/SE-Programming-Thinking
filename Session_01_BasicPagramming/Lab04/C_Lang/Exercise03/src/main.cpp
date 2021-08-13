//
//  Created by NDHuy on 22/01/2021
//  Copyright 2020 by SEstudio
//  Pointer for array
//

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

// define prototype
void CreateArray(int *&a, int& n);
int* CreateArray(int n);

void Swap(int *a, int *b);
void SortArray(int *&a, const int n);

void PrintArray(int *a, const int n);

int main()
{
    
    int *a = CreateArray(10);
    int n = 10; 
    //CreateArray(a, n);

    PrintArray(a, n);
    SortArray(a, n);
    PrintArray(a, n);

    return 0;
}

// implement prototype
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b; 
    *b = temp;   
}

void SortArray(int *&a, const int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
                Swap(a + i, a + j);
        }
    }
}

void CreateArray(int *&a, int& n)
{
    n = 10; 
    a = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
        a[i] = i;
}

int* CreateArray(int n)
{
    int *p = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
    {
        // p[i] = i;
        *(p + i) = i;
    }

    return p;
}

void PrintArray(int *a, const int n)
{
    for(int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
}
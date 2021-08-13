//
//  Created by NDHuy on 22/01/2021
//  Copyright 2020 by SEstudio
//  Pointer for Matrix
//

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

// define prototype
void CreateMatrix(int **&a, int& n, int& m);
int* CreateMatrix(int n, int m);

void PrintMatrix(int **a, const int n, const int m);

int main()
{
    int **a = NULL; 
    int n, m;

    CreateMatrix(a, n, m);
    
    PrintMatrix(a, n, m);
    
    return 0;
}

// implement prototype
void CreateMatrix(int **&a, int& n, int& m)
{
    n = 3; 
    m = 4; 
    
    a = (int**)malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++)
    {
        a[i] = (int*)malloc(m * sizeof(int));
        for(int j = 0; j < m; j++)
        {
            a[i][j] = (i * m) + j;
            printf("=> a[%d][%d] = %d \n", i, j, a[i][j]);
        }
        printf("=> %d - %d\n", a[0][0], a[0][1]);
    }
}

void PrintMatrix(int **a, const int n , const int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
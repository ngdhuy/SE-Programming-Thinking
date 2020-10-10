//
//  Created by NDHuy on 29/05/2020
//  Copyright 2020 by SEstudio
//  Array 01 Dimension
//

#include "matrix.h"

void Input(int a[][MAX], int &n, int &m)
{
    do 
    {
        printf("Enter num of row n = ");
        scanf("%d", &n);

        if(n < 0)
            printf("Num of row must be greater than ZERO. Please try again!\n");
    } while (n < 0);

    do 
    {
        printf("Enter num of column m = ");
        scanf("%d", &m);

        if(m < 0)
            printf("Num of column must be greater than ZERO. Please try again!\n");
    } while (m < 0);

    int temp;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &temp);
            a[i][j] = temp;
        }
    }
}

void Output(const int a[][MAX], const int &n, const int &m)
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
//
//  Created by NDHuy on 08/05/2020
//  Copyright 2020 by SEstudio
//  Array 01 Dimension
//

#include "array.h"

void Input(int a[], int &n)
{
    printf("Enter the number of item: ");
    scanf("%d", &n);

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
        printf("%d\t", a[i]);
    
    printf("\n");
}
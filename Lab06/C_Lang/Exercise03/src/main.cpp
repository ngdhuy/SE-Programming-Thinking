//
//  Created by NDHuy on 15/08/2020
//  Copyright 2020 by SEstudio
//  Pointer for array
//

#include <stdio.h>

int main()
{
    int m = 4; 
    int n = 3;
    int a[n][m];

    int *p = (int *)a;

    for(int i = 0; i < n * m; i++)
    {
        *(p + i) = i;
    }

    for(int i = 0; i < n * m; i++)
    {
        if(i % m == 0)
            printf("\n");
        printf("%d\t", *(p + i));
    }

    printf("\n");
    return 0;
}
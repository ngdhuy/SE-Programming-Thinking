//
//  Created by NDHuy on 15/08/2020
//  Copyright 2020 by SEstudio
//  Pointer
//

#include <stdio.h>

int main()
{
    // static variable
    int a[5] = {5, 4, 3, 2, 1};

    printf("a = \t");
    for(int i = 0; i < 5; i++)
        printf("%d\t", a[i]);

    int *pa;
    pa = a;
    
    printf("pa = \t");
    for(int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d \t", i, a[i]);
        printf("pa[%d] = %d \t", i, pa[i]);
        printf("*(a + %d) = %d \t", i, *(a + i));
        printf("*(pa + %d) = %d \n", i, *(pa + i));
    }

    printf("\n");
    return 0;
}
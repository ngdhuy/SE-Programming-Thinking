//
//  Created by NDHuy on 08/05/2020
//  Copyright 2020 by SEstudio
//  Array 01 Dimension
//

#include <stdio.h>

#define MAX 100

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    int b[MAX];
    int n = 0;
    printf("Enter number of item in array b: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    b[n++] = 0;
    
    printf("\n Array B:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", b[i]);
    }

    printf("\n");

    return 0;
}
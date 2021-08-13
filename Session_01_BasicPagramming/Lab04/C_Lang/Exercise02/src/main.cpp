//
//  Created by NDHuy on 22/01/2021
//  Copyright 2020 by SEstudio
//  Pointer
//

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

// Define prototype

int main()
{
    int x = 12;
    printf("x = %d \n", x);
    printf("&x = %p \n", &x);

    int *p = &x; 
    printf("p = %p \n", p);
    printf("&p = %p \n", &p);
    printf("*p = %d \n", *p);

    return 0;
}
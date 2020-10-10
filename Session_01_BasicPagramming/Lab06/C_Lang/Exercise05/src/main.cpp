//
//  Created by NDHuy on 15/08/2020
//  Copyright 2020 by SEstudio
//  Review Pointer
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int S1(int n);
int S2(int n);
float S3(int n);

int main()
{
    
    int n = 10;
    printf("S1(%d) = %d \n", n, S1(n));
    printf("S2(%d) = %d \n", n, S2(n));
    printf("S3(%d) = %f \n", n, S3(n));

    printf("\n");
    return 0;
}

// s(n) = 1 + 2 + 3 + 4 ... + n;
int S1(int n)
{
    if(n <= 0)
        return 0;
    
    return n + S1(n - 1);
}

// s(n) = 1 * 2 * 3 * ... * n;
int S2(int n)
{
    if(n <= 0)
        return 1;
    
    return n * S2(n - 1);
}

// s(n) = 1/1 + 1/2 + 1/3 + ... + 1/n
float S3(int n)
{
    if(n <= 0)
        return 0;
    
    return (1.0/n) + S3(n - 1);
}
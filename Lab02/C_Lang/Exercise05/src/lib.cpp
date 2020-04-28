//
//  Created by NDHuy at 28/04/2020
//  Copyright 2020 by SEstudio
//  15CTT31-BaiTapLyThuyet-04.pdf: Bai 3
//  

#include "lib.h"

int Input()
{
    int n; 
    do
    {
        printf("Enter n >= 0: ");
        scanf("%d", &n);
        if(n < 0)
            printf("n must be greater than ZERO! Please, try again. \n");
    } while (n < 0);
    return n;
}

void PrintResolver(int n)
{

}

11 = 
5 + 5 + 1
5 + 2 + 2 + 1 + 1
5 + 2 + 2 + 2
5 + 2 + 1 + 1 + 1 + 1
5 + 1 + 1 + 1 + 1 + 1 + 1
2 + 2 + 1 + 1 + 1 + 1 + 1 + 1 + 1
2 + 2 + 2 + 1 + 1 + 1 + 1 + 1
2 + 2 + 2 + 2 + 1 + 1 + 1
2 + 2 + 2 + 2 + 2 + 1
2 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1
1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1
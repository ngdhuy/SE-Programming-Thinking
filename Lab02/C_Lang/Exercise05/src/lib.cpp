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
    // 1x + 2y + 5z = n
    int i = 0;
    for(int x = 0; x <= n; x++)
    {
        for(int y = 0; y <= n; y++)
        {
            for(int z = 0; z <= n; z++)
            {
                if(x + (2*y) + (5 * z) == n)
                    printf("%d = %d (1 dong) + %d (2 dong) + %d (5 dong) \n", n, x, y, z); 
                
                if(x + (2*y) + (5 * z) > n)
                    break;
            }

            if(x + (2*y) > n)
                break;
        }
    }

    printf("\n => i = %d", i);
}
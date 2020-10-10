//
//  Created by NDHuy at 12/04/2020
//  Copyright 2020 by SEstudio
//  Check perfect square number
//

#include <stdio.h>

int main()
{
    int n; 
    printf("Enter a integer n > 0: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("%d is not greater than Zero", n);
    else
    {
        if (n == 1)
        {
            printf("%d is a perfect square number\n", n);
        }
        else
        {
            int i;
            for(i = 1; i <= (n / 2); i++)
            {
                if (i * i == n) 
                {
                    printf("%d is a perfect square number\n", n);
                    break;
                }
            }

            if (i >= n/2)
                printf("%d is NOT a perfect square number\n", n);
        }
    }

    return 0;
}
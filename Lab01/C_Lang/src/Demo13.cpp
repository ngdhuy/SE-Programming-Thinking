//
//  Created by NDHuy at 12/04/2020
//  Copyright 2020 by SEstudio
//  Check prime number
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
        if (n < 2)
            printf("%d is NOT a prime number\n", n);
        else
        {
            int i;
            for(i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                    break;
            }

            if (i >= (n / 2))
                printf("%d is a prime number\n", n);
            else
                printf("%d is NOT a prime number\n", n);
        }
    }

    return 0;
}
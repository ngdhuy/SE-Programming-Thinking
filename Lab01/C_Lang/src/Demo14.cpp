//
//  Created by NDHuy at 12/04/2020
//  Copyright 2020 by SEstudio
//  Find Max/Min digit
//

#include <stdio.h>

int main()
{
    int n; 
    printf("Enter a integer n > 0: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("%d is not greater than Zero\n", n);
    else
    {
        int max = n % 10;
        int min = n % 10;

        for(int i = n; i > 0; i = i / 10)
        {
            int t = i % 10;
            max = (t > max) ? t : max;
            min = (t < min) ? t : min;
        }

        printf("Max digit = %d and Min digit = %d\n", max, min);
    }

    return 0; 
}
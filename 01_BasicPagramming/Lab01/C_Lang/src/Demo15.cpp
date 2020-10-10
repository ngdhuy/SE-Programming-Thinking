//
//  Created by NDHuy at 12/04/2020
//  Copyright 2020 by SEstudio
//  Check increment or decreament digit
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
        if (n % 10 == 0)
            printf("%d is TRUE with one digit\n", n);
        else
        {
            int t = n % 10;
            int k = (n / 10) % 10;

            bool isIncrement = (t > k) ? true : false;
            int i;
            for(i = n / 10; i > 0; i /= 10)
            {
                k = i % 10;

                if (isIncrement)
                {
                    if (t < k)
                        break;    
                }
                else
                {
                    if (t > k)
                        break;
                }
                
                t = k;
            }

            if (i > 0)
                printf("%d is NOT increment or decrement\n", n);
            else
                if (isIncrement)
                    printf("%d is INCREMENT digit\n", n);
                else
                    printf("%d is DECREMENT digit\n", n);
        }
    }

    return 0; 
}
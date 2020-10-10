//
//  Created by NDHuy at 09/04/2020
//  Copyright 2020 by SEstudio
//  Taxi payment
//

#include <stdio.h>

int main()
{
    int n; 
    printf("Input number of taxi km n = ");
    scanf("%d", &n);

    float total_price = 0.0;
    
    if(n > 0)
    {
        total_price = 15000.0;
        n = n - 1;

        if(n > 0)
        {
            int t = (n >= 4) ? 4 : n;
            
            total_price += t * 13500.0;

            if(n > t)
                n = n - t;

            total_price += n * 11000.0;

            // Discount
            if (n > 115)
                total_price = total_price * 0.9;
        }
    }

    printf("Total price: %.0f \n", total_price);

    return 0;
}
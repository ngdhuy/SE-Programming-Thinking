//
//  Created by NDHuy at 12/04/2020
//  Copyright 2020 by SEstudio
//  Check symmetry number
//

#include <stdio.h>

int main()
{
    int n; 
    printf("Enter n > 0: ");
    scanf("%d", &n);

    if (n < 0)
        printf("%d is not greater than 0", n);
    else
    {
        int t; 
        int m = 0; 
        int k = n;

        // Method-01
        // do
        // {
        //     t = k % 10;
        //     m = (m * 10) + t;
        //     k = k / 10;
        // } while (k != 0);

        // Method-02
        for(int i = n; i != 0; i /= 10)
        {
            m = (m * 10) + (i % 10);
        }
        
        printf("Symmetry number: %d \n", m);
        
        if(n == m)
            printf("%d is symmetry number\n", n);
        else
            printf("%d is not symmetry number\n", n);
    }
    
    return 0;
}



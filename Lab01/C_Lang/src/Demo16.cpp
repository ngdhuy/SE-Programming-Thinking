//
//  Created by NDHuy at 16/04/2020
//  Copyright 2020 by SEstudio
//  Find Fibonacci n with:
//      a0 = a1 = 1
//      a2 = a1 + a0
//      ...
//      an = a(n - 1) + a(n - 2)
//

#include <stdio.h>

int main()
{
    int n; 
    printf("Enter a integer n = ");
    scanf("%d", &n);

    unsigned long a_n;    // a_n = a(n)
    unsigned long a_1;    // a_1 = a(n - 1)
    unsigned long a_2;    // a_2 = a(n - 2)

    if(n < 0)
    {
        printf("Cannot find Fibonacci for a(%d) \n", n);
    }
    else
    {
        // Expecial case (STOP Case)
        if ((n == 0) || (n == 1))
            a_n = 1;
        else
        {
            a_1 = 1;    // a0 = 1
            a_2 = 1;    // a1 = 1
            for(int i = 2; i <= n; i++)
            {
                a_n = a_1 + a_2;
                a_2 = a_1;
                a_1 = a_n;
            }
        }
        
        printf("Fibonacci a(%d) = %ld \n", n, a_n);
    }
    
    return 0;
}
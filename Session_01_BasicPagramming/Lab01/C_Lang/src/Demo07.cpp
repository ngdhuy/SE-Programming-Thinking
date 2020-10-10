//
//  Created by NDHuy at 09/04/2020
//  Copyright 2020 by SEstudio
//  Input 4 integer number. Sort ascending
//

#include <stdio.h>

int main()
{
    int a; 
    int b; 
    int c; 
    int d;

    printf("Input integer a = ");
    scanf("%d", &a);
    printf("Input integer b = ");
    scanf("%d", &b);
    printf("Input integer c = ");
    scanf("%d", &c);
    printf("Input integer d = ");
    scanf("%d", &d);

    int max = a;
    int min = a;

    // search min value
    if(b < min)
        min = b;
    
    if(c < min)
        min = c;

    if(d < min)
        min = d;

    // search max value
    max = (b > max) ? b : max;
    max = (c > max) ? c : max;
    max = (d > max) ? d : max;

    int mid_1 = a;

    mid_1 = (b > min && b < max ) ? b : mid_1;
    mid_1 = (c > min && c < max ) ? c : mid_1;
    mid_1 = (d > min && d < max ) ? d : mid_1; 

    int mid_2 = a;

    mid_2 = (b > min && b < max && b != mid_1) ? b : mid_2;
    mid_2 = (c > min && c < max && c != mid_1) ? c : mid_2;
    mid_2 = (d > min && d < max && d != mid_1) ? d : mid_2;

    if(mid_1 > mid_2)
    {
        // Swap mid_1 and mid_2
        int temp = mid_1;
        mid_1 = mid_2;
        mid_2 = temp;
    }

    printf("%d < %d < %d < %d \n", min, mid_1, mid_2, max);

    return 0;
}

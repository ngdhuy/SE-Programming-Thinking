//
// Created by NDHuy on 05/04/2020
// Copyright 2020 by SEstudio
// Search Max value of set a, b, c with a, b, c is Float
//

#include <stdio.h>

int main()
{
    float a;
    float b; 
    float c;

    // Input data from console
    printf("Input a = ");
    scanf("%f", &a);

    printf("Input b = ");
    scanf("%f", &b);

    printf("Input c = ");
    scanf("%f", &c);

    // Bussiness
    float max = a;

    if(a < b)
    {
        if (b < c)
            max = c;
        else 
            max = b;
    }
    else 
    {
        if (a < c)
            max = c;
        else 
            max = a;
    }

    // Output result to Screen
    printf("Max of %.2f, %.2f, %.2f is %.2f", a, b, c, max);

    return 0;
}
//#include <stdio.h>
#include <iostream>

// --- Prototype
int Sum(int a, int b);
float Sum(float a, float b);

int Div(int a, int b = 1)
{
    return a / b;
}

// --- Main function
int main()
{
    int a = 4; 
    int b = 5;
    int c = Sum(a, b);
    printf("sum = %d + %d = %d\n", a, b, c);

    float d = 3.5; 
    float e = 2.4;
    printf("sum = %f + %f = %f\n", d, e, Sum(d, e));

    printf("div = %d / %d = %d\n", a, b, Div(a , b));
    printf("div = %d / %d = %d\n", a, b, Div(a));

    return 0;
}

// --- Implement functions
int Sum(int a, int b)
{
    printf("--> Sum INT\n");
    return a + b;
}

float Sum(float a, float b)
{
    printf("--> Sum FLOAT\n");
    return a + b;
}


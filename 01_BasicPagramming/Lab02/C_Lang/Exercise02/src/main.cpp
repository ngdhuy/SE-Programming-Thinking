#include <stdio.h>
#include "lib.h"

int main()
{
    int a = 8; 
    int b = 3;

    Swap(a, b);
    printf("a = %d, b = %d \n", a, b);

    int c = 2;
    int d = Sum(a, b, c);
    printf("Sum = %d + %d + %d = %d \n", a, b, c, d);
    int e = Div(a);
    printf("Div = %d = %d \n", a, e);
    int f = Div(a, b);
    printf("Div = %d / %d = %d \n", a, b, f);

    return 0;
}
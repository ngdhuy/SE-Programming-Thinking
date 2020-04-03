#include <stdio.h>

int main()
{
    int a = 10;
    printf("Value of a = %d \n", a);

    int b; 
    printf("Input b = ");
    scanf("%d", &b);

    printf("a = %d, b = %d \n", a, b);

    int c = a + b; 
    int d = a - b;
    int e = a * b;
    int f = a / b;
    int g = a % b;

    printf("c = %d, d = %d, e = %d, f = %d, g = %d \n", c, d, e, f , g);

    int h = 8;
    int i = 10 + h++; 
    printf("h = %d, i = %d \n", h, i);

    int j = 2 + (--h);
    printf("h = %d, j = %d \n", h, j);   

    h += 2; 
    printf("h = %d \n", h);
    
    h -= 1;
    printf("h = %d \n", h);
    
    h *= 4;
    printf("h = %d \n", h);

    h /= 2;
    printf("h = %d \n", h);

    h %= 2; 
    printf("h = %d \n", h);

    return 0;
}
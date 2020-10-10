#include "lib.h"

void Swap(int &a, int &b)
{
    int temp = a; 
    a = b; 
    b = temp;
}

int Sum(int a, int b, int c)
{
    return a + b + c;
}

int Div(int a)
{
    return a / 1;
}

int Div(int a, int b)
{
    return a / b;
}
#include <stdio.h>

// Prototype
int input();
int Sum(int a, int b);
void output(int a, int b, int c);

int main()
{
    int a; 
    int b;
    int sum; 

    // Input
    a = input();
    b = input();

    // Calculate
    sum = Sum(a, b);

    // Out
    output(a, b, sum);

    return 0;
}

// implement functions
int input()
{
    int n;
    printf("Enter n = ");
    scanf("%d", &n);
    return n;
}

int Sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

void output(int a, int b, int c)
{
    printf("s = %d + %d = %d", a, b, c);
}
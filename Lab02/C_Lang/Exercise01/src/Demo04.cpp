#include <stdio.h>

// --- Prototype
void Swap(int &a, int &b);
void Swap_02(int *a, int *b);

// --- Main function 
int main()
{
    int a = 10; 
    int b = 5; 
    printf("a = %d, b = %d\n", a, b);
    Swap(a, b);
    printf("a = %d, b = %d\n", a, b);
    int c = 8; 
    int d = 9;
    printf("c = %d, d = %d\n", c, d);
    Swap_02(&c, &d);
    printf("c = %d, d = %d\n", c, d);
    return 0;
}

// --- Implement function
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// --- swap with pointer
void Swap_02(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
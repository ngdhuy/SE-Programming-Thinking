#include <stdio.h>

// --- Prototype
int doubleValue(int n);     // --> Pass by Value
int tribleValue(int &n);    // --> Pass by Reference 

// --- Main function
int main()
{
    int a = 2;
    int b = doubleValue(a);
    printf("main: a = %d\n", a);
    printf("main: b = %d\n", b);

    printf("\n-------------------------\n");
    
    int c = tribleValue(a);
    printf("main: a = %d\n", a);
    printf("main: c = %d\n", c);
    return 0;
}

// --- Implement function
//  ---> Pass by Value
int doubleValue(int n)
{
    n = n * 2;
    printf("--> doubleValue: %d\n", n);
    return n;
}

// ---> Pass by Reference
int tribleValue(int &n)
{
    n = n * 3;
    printf("--> tribleValue: %d\n", n);
    return n;
}

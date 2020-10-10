#include <stdio.h>

int main()
{
    for(int i = 0; i < 10; i++)
        printf("%d\t", i);

    printf("\n");

    for(int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
            printf("%d\t", i);
    }

    printf("\n");
    
    int i = 0; 
    for(;i < 10;)
    {
        printf("%d\t", i);
        i+=2;
    }

    printf("\n----------- WHILE -----------\n");

    int j = 1;
    while(j < 10)
    {
        printf("%d\t", j);
        j += 2;
    }
    
    printf("\n----------- DO ... WHILE -----------\n");

    int n; 
    do
    {
        printf("Enter n > 0: ");
        scanf("%d", &n);
    } while (n < 0);
    
    printf("n = %d\n", n);
    
    return 0;
}
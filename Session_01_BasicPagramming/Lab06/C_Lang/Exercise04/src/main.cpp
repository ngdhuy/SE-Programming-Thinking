//
//  Created by NDHuy on 15/08/2020
//  Copyright 2020 by SEstudio
//  Review Pointer
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Modulus(int a, int b);
void Factor(int n);
float Power(float base, int exponent);
char* ItoA(int i);
char* Revert(char *s);

int main()
{
    int a = 2020; 
    int b = 400; 
    int k = Modulus(a, b);
    printf("%d mod %d = %d\n", a, b, k);

    int n = 120; 
    Factor(n);

    float c = 5.0;
    int d = -2;
    float power = Power(c, d);
    printf("%2.2f ^ %d = %2.2f \n", c, d, power);

    int e = 12300;
    printf("ItoA = %s \n", ItoA(e));
    
    char *s = (char*)malloc(12 * sizeof(char));
    strcpy(s, "Hello World!");
    printf("=> %s", Revert(s));

    printf("\n");
    return 0;
}

char* Revert(char *s)
{
    char *c = (char*)malloc(sizeof(char));
    if(strlen(s) == 0)
    {
        strcpy(c, "");
        return c;
    }

    int sLength = strlen(s);
    memcpy(c, &s[sLength - 1], 1);

    char *sub = (char*)malloc((sLength - 1) * sizeof(char));
    memcpy(sub, &s[0], sLength - 1);
    
    return strcat(c, Revert(sub));
}

char* ItoA(int i)
{
    char *c = (char *)malloc(sizeof(char));
    
    if(i == 0)
    {
        strcpy(c,"");
        return c;
    }

    switch(i % 10)
    {
        case 0:
            strcpy(c,"0");
            break;
        case 1:
            strcpy(c,"1");
            break;
        case 2:
            strcpy(c,"2");
            break;
        case 3: 
            strcpy(c,"3");
            break;
        case 4:
            strcpy(c,"4");
            break;
        case 5:
            strcpy(c,"5");
            break;
        case 6:
            strcpy(c,"6");
            break;
        case 7:
            strcpy(c,"7");
            break;
        case 8:
            strcpy(c,"8");
            break;
        case 9:
            strcpy(c,"9");
            break;
    }
    
    return strcat(ItoA(i / 10), c);
}



float Power(float base, int exponent)
{
    if(exponent == 0)
        return 1;
    else
    {
        float result = 1;
        int exp = exponent;
        
        if(exp < 0)
            exp = -exp;

        for(int i = 1; i <= exp; i++)
        {
            result *= base;
        }


        if(exponent > 0)
        {
            return result;   
        }
        else 
        {
            return 1.0 / result;
        }
    }
    
}

void Factor(int n)
{
    int i = 2;
    while(n > 1)
    {
        if(n % i  == 0)
        {
            n = n / i;
            printf("%d\t", i);
        }
        else
        {
            i++;
        }
        
    }
}

int Modulus(int a, int b)
{
    while(a >= b)
    {
        a = a - b;
    }

    return a;
}
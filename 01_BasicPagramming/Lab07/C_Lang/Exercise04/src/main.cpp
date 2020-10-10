//
//  Created by NDHuy on 11/09/2020
//  Copyright 2020 by SEstudio
//  File operator
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Sum(int a[], int n);
int _atoi(const char *str);

char *strdate(const char *src, char *dest);

int main() 
{
    // int a[] = {1, 2, 3, 4, 5};    
    // int n = 5;

    // printf("Sum = %d\n", Sum(a, n));

    // char *a;
    // strcpy(a, "?>*&");

    // int n = _atoi(a);
    // printf("=> %d \n", n);

    char *src = (char*)malloc(10 * sizeof(char));
    strcpy(src, "09/13/2020");
    char *dest = (char*)malloc(20);
    
    strdate(src, dest);

    return 0;
}

char *strdate(const char *src, char *dest)
{
    char *dd = (char*)malloc(2 * sizeof(char));
    char *mm = (char*)malloc(2 * sizeof(char));
    char *yyyy = (char*)malloc(4 * sizeof(char));

    int i = 0;
    while(src[i] != '/')
    {
        char *buffer = (char *)malloc(2 * sizeof(char));
        buffer[0] = src[i];
        buffer[1] = '\0';
        strcat(mm, buffer);
        
        i++;
    }

    i++;
    while(src[i] != '/')
    {
        char *buffer = (char *)malloc(2 * sizeof(char));
        buffer[0] = src[i];
        buffer[1] = '\0';
        strcat(dd, buffer);

        printf("%s \n", dd);
        i++;
    }
    
    i++;
    while(src[i] != '\0')
    {
        char *buffer = (char *)malloc(2 * sizeof(char));
        buffer[0] = src[i];
        buffer[1] = '\0';
        strcat(yyyy, buffer);
        i++;
    }

    char *Month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    strcpy(dest, dd);
    strcat(dest, " ");
    strcat(dest, Month[_atoi(mm) - 1]);
    strcat(dest, " ");
    strcat(dest, yyyy);

    printf("%s\n", dest);

    return dest;
}

int _atoi(const char *str)
{
    int n = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] < 48 || str[i] >= 58)
            return 0;

        n = (n * 10) + (int)(str[i] - 48);
    }

    return n;
}

int Sum(int a[], int n)
{
    if(n <= 0)
        return 0;
    
    return a[n - 1] + Sum(a, n - 1);
}
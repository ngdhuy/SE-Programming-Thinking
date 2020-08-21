//
//  Created by NDHuy on 15/08/2020
//  Copyright 2020 by SEstudio
//  Review Pointer
//

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main()
{
    char *s;
    strcpy(s, "Hello word");

    int len = 0;
    
    while(s[len] != '\0')
    {
        len++;
    }

    printf("Len = %d\n", len);
    printf("%s\n", s);

    char *t = (char *)malloc(len * sizeof(char));
    int j = 0;
    for(int i = len - 1; i >= 0; i--)
    {
        t[j++] = s[i];
    }

    printf("%s\n", t);

    int m = 4; 
    int n = 3;
    int a[n][m];

    int *p = (int *)a;

    for(int i = 0; i < n * m; i++)
    {
        *(p + i) = i;
    }

    for(int i = 0; i < n * m; i++)
    {
        if(i % m == 0)
            printf("\n");
        printf("%d\t", *(p + i));
    }
    
    printf("\n");
    return 0;
}
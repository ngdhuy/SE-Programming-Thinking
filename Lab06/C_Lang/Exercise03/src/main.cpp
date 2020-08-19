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

    printf("\n");
    return 0;
}
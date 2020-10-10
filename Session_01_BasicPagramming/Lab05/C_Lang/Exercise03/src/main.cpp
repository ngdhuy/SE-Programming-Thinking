//
//  Created by NDHuy on 23/07/2020
//  Copyright 2020 by SEstudio
//  Char[] and String
//

#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char s_1[MAX];
    char s_2[MAX];
    char s_3[MAX];

    printf("Enter the first string: ");
    scanf("%[^\n]s", s_1);
    strcpy(s_2, s_1);
    strncpy(s_3, s_1, 3);
    printf("=> %s - %s - %s \n", s_1, s_2, s_3);
    printf("=> %d", strcmp(s_3, s_2));
    printf("=> %d", strcmp(s_1, s_2));
    printf("=> %d", strcmp(s_1, s_3));
    return 0;
}
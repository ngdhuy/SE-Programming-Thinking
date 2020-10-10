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

    printf("Enter the first string: ");
    scanf("%[^\n]s", s_1);
    fflush(stdin);
    printf("Enter the second string: ");
    scanf("%[^\n]s", s_2);
    printf("=> %s - %s\n", s_1, s_2);
    
    return 0;
}
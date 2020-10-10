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
    
    int length = strlen(s_1);

    // Convert to Upper String
    strcpy(s_2, s_1);
    for(int i = 0; i < length; i++)
    {
        if(97 <= s_2[i] && s_2[i] <= 122)
            s_2[i] -= 32;
    }
    printf("Upper string: %s\n", s_2);

    // Convert to Lower String
    strcpy(s_3, s_1);
    for(int i = 0; i < length; i++)
    {
        if(65 <= s_3[i] && s_3[i] <= 90)
            s_3[i] += 32;
    }
    printf("Upper string: %s\n", s_3);

    return 0;
}
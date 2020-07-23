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

    // copy s_1 to s_2 for trim s_2
    strcpy(s_2, s_1);

    int length = strlen(s_2);
    int i = length; 
    
    while(i >= 0)
    {
        if(s_2[i] == ' ')
        {
            if(i == 0 || i == length - 1 || s_2[i - 1] == ' ')
            {
                for(int j = i; j <= length; j++)
                {
                    s_2[j] = s_2[j + 1];
                }
                length--;
            }
        }
        i--;
    }
    
    printf("Trim string:%s!\n", s_2);

    return 0;
}
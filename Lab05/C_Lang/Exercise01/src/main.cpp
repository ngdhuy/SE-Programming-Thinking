//
//  Created by NDHuy on 23/07/2020
//  Copyright 2020 by SEstudio
//  Char[] and String
//

#include <stdio.h>
#include <string.h>

int main()
{
    char c[] = "hello";
    char s[6];
    s[0] = 'h';
    s[1] = 'e';
    s[2] = 'l';
    s[3] = 'l';
    s[4] = 'o';
    s[5] = '\0';

    printf("%s - %lu \n", c, strlen(c));
    fflush(stdin);
    printf("%s - %lu \n", s, strlen(s));
    
    return 0;
}
//
//  Created by NDHuy on 05/04/2020
//  Copyright 2020 by SEstudio
//  Input one character. Change to Upper or Lower
//

#include <stdio.h>

int main()
{
    char c;
    printf("Input character c = ");
    scanf("%c", &c);

    if((c >= 65) && (c <= 90))
    {
        c = c + 32;
    }
    else 
    {
        if ((c >= 97) && (c <= 122))
        {
            c -= 32;
        }
    }

    printf("Result of convert character c = %c \n", c);

    return 0;
}
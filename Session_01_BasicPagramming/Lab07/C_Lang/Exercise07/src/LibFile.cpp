//
//  Created by NDHuy on 02/02/2021
//  Copyright 2020 by SEstudio
//  TEXT File operator
//

#include "LibFile.h"

void PrintTextFile(char* fileName)
{
    FILE *f = fopen(fileName, "rt");

    if(f != NULL)
    {
        char c; 
        while(fscanf(f, "%c", &c) == 1)
        {
            printf("%c", c);
        }
        fclose(f);
    }
    else 
    {
        printf("File cannot accessed!");
    }
}

char* ReadTextFile(char* fileName)
{
    int lengthOfFile = LengthOfFile(fileName);
    FILE *f = fopen(fileName, "rt");

    if(f != NULL)
    {
        char *s = (char*)malloc(lengthOfFile * sizeof(char));
        char c;
        int i = 0; 
        while(fscanf(f, "%c", &c) == 1)
        {
            s[i++] = c;
        }
        s[i] = '\0';
        fclose(f);
        return s;
    }
    else
    {
        printf("File cannot accessed!");
        return NULL;
    }
}

int LengthOfFile(char* fileName)
{
    FILE *f = fopen(fileName, "rt");
    if(f != NULL)
    {
        fseek(f, 0, SEEK_END);
        size_t length = ftell(f);

        fclose(f);
        return length;
    }
    else
    {
        return 0;
    }
}
//
//  Created by NDHuy on 07/09/2020
//  Copyright 2020 by SEstudio
//  Pointer
//

#include <stdio.h>

void WriteTextFile(const char *filePath);
void ReadTextFile(const char *filePath);

int main()
{
    //WriteTextFile("out.txt");
    ReadTextFile("data.out");
    return 0;
}

void ReadTextFile(const char *filePath)
{
    FILE *f = fopen(filePath, "rt");
    if(f != NULL)
    {
        // 0 1 2 3 4
        int i; 
        while(fscanf(f, "%d", &i) == 1)
        {
            printf("%d\t", i);
        } 
        fclose(f);
    }
    else
    {
        printf("Cannot access file %s \n", filePath);
    }
    
}

void WriteTextFile(const char *filePath)
{
    FILE *f = fopen(filePath, "wt");    
    if(f != NULL)
    {
        for(int i = 0; i < 10; i++)
        {
            fprintf(f, "%d\t", i);
        }
        fclose(f);
        printf("Save file %s is success", filePath);
    }
    else
    {
        printf("Cannot access file %s \n", filePath);
    }
}
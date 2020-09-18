//
//  Created by NDHuy on 18/09/2020
//  Copyright 2020 by SEstudio
//  File operator
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10000

int copy(const char *inFileName, const char *outFileName);
int copy_with_line_number(const char *inFileName, const char *outFileName);
int count_line_word(const char *fileName);
int compare_first_line(const char *fileName_1, const char *fileName_2);
int append(const char *fileName_1, const char *fileName_2);

int main(int argc, char *argv[])
{
    if(argc == 3)
        append(argv[1], argv[2]);
    else
        printf("Command with parameter is error:");

    // if(argc == 2)
    //     count_line_word(argv[1]);
    // else
    //     printf("Command with parameter is error");

    return 0;
}

int copy(const char *inFileName, const char *outFileName)
{
    FILE *f_In = fopen(inFileName, "rt");
    FILE *f_Out = fopen(outFileName, "wt");

    if(f_In != NULL && f_Out != NULL)
    {
        char c;
        while(fscanf(f_In, "%c", &c) == 1)
        {
            fprintf(f_Out, "%c", c);
        }
        fclose(f_In);
        fclose(f_Out);
        return 1;
    }
    else
    {
        return 0;
    }
}

int copy_with_line_number(const char *inFileName, const char *outFileName)
{
    FILE *f_In = fopen(inFileName, "rt");
    FILE *f_Out = fopen(outFileName, "wt");

    if(f_In != NULL && f_Out != NULL)
    {
        char c;
        int i = 1;
        fprintf(f_Out, "%d.", i++);
        while(!feof(f_In))
        {
            fscanf(f_In, "%c", &c);
            if(c == '\n')
                fprintf(f_Out, "%c%d.", c, i++);
            else
                fprintf(f_Out, "%c", c);
        }

        fclose(f_In);
        fclose(f_Out);
        return 1;
    }
    else
    {
        return 0;
    }
}

int count_line_word(const char *fileName)
{
    FILE *f = fopen(fileName, "rt");

    if(f != NULL)
    {
        int numLine = 1; 
        int numWord = 0;

        char c;
        while(fscanf(f, "%c", &c) == 1)
        {
            if(c == ' ')
                numWord++;
            else
                if(c == '\n')
                    numLine++;
        }
        if(numWord != 0)
            numWord++;

        printf("Num of Word: %d \t Num of Line: %d\n", numWord, numLine);

        fclose(f);
        return 1;
    }
    else 
    {
        printf("Cannot access file %s\n", fileName);
        return 0;
    }
}

int compare_first_line(const char *fileName_1, const char *fileName_2)
{
    FILE *f_1 = fopen(fileName_1, "rt");
    FILE *f_2 = fopen(fileName_2, "rt");

    if(f_1 != NULL && f_2 != NULL)
    {
        char *s_1 = (char*)malloc(MAX * sizeof(char));
        char *s_2 = (char*)malloc(MAX * sizeof(char));

        fscanf(f_1, "%[^\n]", s_1);
        fscanf(f_2, "%[^\n]", s_2);

        int len_1 = strlen(s_1);
        int len_2 = strlen(s_2);

        int i = 0; 
        int j = 0; 

        while(i < len_1 || j < len_2)
        {
            if(i >= len_1)
            {
                printf("%c\n", s_2[j]);
            }
            else
            {
                if(j >= len_2)
                {
                    printf("%c\n", s_1[i]);
                }
                else 
                    if(s_1[i] != s_2[j])
                    {
                        printf("%c - %c \n", s_1[i], s_2[j]);
                    }
            }
            i++;
            j++;
        }

        fclose(f_1);
        fclose(f_2);
        return 1;
    }
    else
    {
        printf("Cannot access file %s or %s\n", fileName_1, fileName_2);
        return 0;
    }
}

int append(const char *fileName_1, const char *fileName_2)
{
    FILE *f_1 = fopen(fileName_1, "at");
    FILE *f_2 = fopen(fileName_2, "rt");

    if(f_1 != NULL && f_2 != NULL)
    {
        char c;
        
        while(fscanf(f_2, "%c", &c) == 1)
        {
            fprintf(f_1, "%c", c);
        }

        fclose(f_1);
        fclose(f_2);
        return 1;
    }
    else
    {
        printf("Cannot access file %s or %s\n", fileName_1, fileName_2);
        return 0;
    }
}
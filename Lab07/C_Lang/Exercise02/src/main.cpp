//
//  Created by NDHuy on 11/09/2020
//  Copyright 2020 by SEstudio
//  File operator
//

#include <stdio.h>
#include <string.h>

typedef struct student
{
    int     m_id;       // => 4 bytes
    char    m_name[20]; // => 20 bytes
} Student;

void IntegerToString(int n, char *s);
void CreateStudentList(Student arrStudent[], int &n);
void WriteTextFile(const char *filePath, const Student s[], const int n);
void ReadTextFile(const char *filePath, Student s[], int &n);

int main()
{
    Student s[1000];
    int n = 1000;
    
    // CreateStudentList(s, n);
    // WriteTextFile("output.txt", s, n);

    ReadTextFile("output.txt", s, n);

    return 0;
}

void IntegerToString(int n, char *s)
{
    // revert value of n => n = 123 -> m = 321
    int m = 0; 
    int h = 0;
    while(n > 0)
    {
        m = (m * 10) + (n % 10);
        n = n / 10;
        h++;
    }

    // set empty for s
    strcpy(s, "");
    if (m == 0)
        strcpy(s, "0");
    else
    {    
        while(m > 0)
        {
            int k = m % 10;
            m = m / 10;

            char *buffer = new char[1];
            buffer[0] = k + 48;

            strcat(s, buffer);
            h--;
        }

        while(h > 0)
        {
            strcat(s, "0");
            h--;
        }
    }
}

void CreateStudentList(Student arrStudent[], int &n)
{
    for(int i = 0; i < n; i++)
    {
        arrStudent[i].m_id = i;
        strcpy(arrStudent[i].m_name, "Student#");
        
        char *buffer = new char[10];
        IntegerToString(i, buffer);
        printf("%s\t", buffer);
        strcat(arrStudent[i].m_name, buffer);
    }
}

void ReadTextFile(const char *filePath, Student s[], int &n)
{
    FILE *f = fopen(filePath, "rt");
    if(f != NULL)
    {
        int i; 
        while(fscanf(f, "%d", &s[i].m_id) == 1)
        {
            // read duty character in file
            char c;
            fscanf(f, "%c%c%c", &c, &c, &c);

            fscanf(f, " %[^\n]", &s[i].m_name);
            printf("%d <> %s\n", s[i].m_id, s[i].m_name);
        } 
        fclose(f);
    }
    else
    {
        printf("Cannot access file %s \n", filePath);
    }
    
}

void WriteTextFile(const char *filePath, const Student s[], const int n)
{
    FILE *f = fopen(filePath, "wt");    
    if(f != NULL)
    {
        for(int i = 0; i < n; i++)
            fprintf(f, "%d - %s\n", s[i].m_id, s[i].m_name);
        fclose(f);
        printf("Save file %s is success\n", filePath);
    }
    else
    {
        printf("Cannot access file %s \n", filePath);
    }
}
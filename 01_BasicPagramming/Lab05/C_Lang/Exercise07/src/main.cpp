//
//  Created by NDHuy on 23/07/2020
//  Copyright 2020 by SEstudio
//  Char[] and String
//

#include <stdio.h>
#include <string.h>

#define MAX 1000

int main()
{
    char s[MAX] = "   people expect     macOS apps to be intuitive    , while simultaneously adaptable to their workflow through customization and flexibility   .Many apps offer configurable preferences, customizable interfaces, and alternate ways of completing tasks   .      windows can often be resized and interface elements hidden or repositioned. tasks can be initiated from toolbars   ,    menus     ,      controls    , keyboard    shortcuts, the Touch Bar,    accessibility   features, and more. a flexible app facilitates learning through     discoverability    .    ";
    
    // printf("Enter the first string: ");
    // scanf("%[^\n]s", s);

    // Trim the String
    int length = strlen(s);
    int i = length; 
    
    while(i >= 0)
    {
        if(s[i] == ' ' && (i == 0 || i == length - 1 || s[i - 1] == ' '))
        {
            for(int j = i; j <= length; j++)
            {
                s[j] = s[j + 1];
            }
            length--;
        }
        i--;
    }
    
    printf("\nTrim string:%s!\n", s);

    // Remove blank before period
    length = strlen(s);
    i = length;
    while(i >= 0)
    {
        if(s[i] == ' ' && (s[i + 1] == ',' || s[i + 1] == '.' || s[i + 1] == ';' || s[i + 1] == '!' || s[i + 1] == '?' || s[i + 1] == ':'))
        {
            for(int j = i; j <= length; j++)
            {
                s[j] = s[j + 1];
            }
            length--;
        }
        i--;
    }

    printf("\nTrim period:%s!\n", s);

    // Insert blank after period
    length = strlen(s);
    i = length - 1;
    while(i >= 0)
    {
        if(s[i] != ' ' && (s[i - 1] == ',' || s[i - 1] == '.' || s[i - 1] == ';' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == ':'))
        {
            for(int j = length + 1; j > i; j--)
            {
                s[j] = s[j - 1];
            }
            s[i] = ' ';
            length++;
        }
        i--;
    }

    printf("\nBlank period:%s!\n", s);

    // Upper the first character of the sentence
    length = strlen(s);
    i = length - 1;
    while(i > 0)
    {
        if(s[i] == ' ' && (s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?') && (97 <= s[i + 1] && s[i + 1] <= 122))
        {
            s[i + 1] -= 32;
        }
        i--;
    }

    if(97 <= s[0] && s[0] <= 122)
        s[0] -= 32;

    printf("\nUpper string:%s!\n", s);

    return 0;
}
//
//  Created by NDHuy on 11/09/2020
//  Copyright 2020 by SEstudio
//  File operator
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10000

bool ReadFile(const char *fileName, char *document, int &n);
bool WriteFile(const char *fileName, const char *document, const int n);

char* FindMaxWord(const char *fileName);

void TrimWord(char *word);
void LowerCase(char &c);
void UpperCase(char &c);

int main() 
{
    char *fileName = "article_1.txt";
    
    // Find word max-length
    // char *maxWord = FindMaxWord(fileName);
    // if(maxWord != NULL)
    //     printf("Max word: %s\n", maxWord);
    
    char *document = (char*)malloc(MAX * sizeof(char)); 
    int n;
    if(ReadFile(fileName, document, n) == true)
    {
        for(int i = 0; i < n; i++)
            UpperCase(document[i]);
        WriteFile("UpperCaseData.out", document, n);

        for(int i = 0; i < n; i++)
            LowerCase(document[i]);
        WriteFile("LowerCaseData.out", document, n);
    }
    
    return 0;
}

bool ReadFile(const char *fileName, char *document, int &n)
{
    FILE *f = fopen(fileName, "rt");
    if(f != NULL)
    {
        // document = (char*)malloc(MAX * sizeof(char));
        n = 0;
        char *s = (char*)malloc(MAX * sizeof(char));
        char c;
        while(!feof(f))
        {
            fscanf(f, "%c", &c);
            document[n++] = c;
        }
        fclose(f);
        return true;
    }
    else
    {
        printf("Cannot read file %s\n", fileName);
        return false;
    }
}

bool WriteFile(const char *fileName, const char *document, const int n)
{
    FILE *f = fopen(fileName, "wt");
    if(f != NULL)
    {
        for(int i = 0; i < n; i++)
            fprintf(f, "%c", document[i]);
        fclose(f);
        return true;
    }
    else
    {
        printf("Cannot create file %s\n", fileName);
        return false;
    }
    
}

char* FindMaxWord(const char *fileName)
{
    FILE *f = fopen(fileName, "rt");
    if(f != NULL)
    {
        char *word = (char*)malloc(MAX * sizeof(char));
        char *maxWord = (char*)malloc(MAX * sizeof(char));
        int wordLen = 0;
        while(!feof(f))
        {
            fscanf(f, "%s", word);
            TrimWord(word);
            if(wordLen < strlen(word))
            {
                wordLen = strlen(word);
                strcpy(maxWord, word);
            }
        }
        fclose(f);
        return maxWord;
    }
    else
    {
        printf("Cannot read file %s\n", fileName);
        return NULL;
    }
}

void TrimWord(char *word)
{
    int last = strlen(word) - 1;
    while(last > 0 && (word[last] < 48 || (57 < word[last] && word[last] < 65) || (90 < word[last] && word[last] < 97) || 122 < word[last]))
    {  
        word[last] = '\0';
        printf("=> %s - %lu\n", word, strlen(word));
        last--;
    }
    last = 0;
    while(strlen(word) > 0 && (word[last] < 48 || (57 < word[last] && word[last] < 65) || (90 < word[last] && word[last] < 97) || 122 < word[last]))
    {  
        for(int i = 0; i < strlen(word) - 1; i++)
            word[i] = word[i + 1];
        word[strlen(word) - 1] = '\0';
        
        printf("%c => %s - %lu\n", word[last], word, strlen(word));
    }
}

void LowerCase(char &c)
{
    if(65 <= c && c <= 90)
        c += 32;
}

void UpperCase(char &c)
{
    if(97 <= c && c <= 122)
        c -= 32;
}
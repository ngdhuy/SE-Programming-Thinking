//
//  Created by NDHuy on 02/02/2021
//  Copyright 2020 by SEstudio
//  TEXT File operator
//

#include <stdio.h>
#include <string.h>
#include "LibFile.h"

#define MAX 100

int main()
{
    char fileInput[MAX] = "./Exercise07/data/input.txt";
    char fileOutput[MAX] = "./Exercise07/data/output.txt";
    //PrintTextFile(fileInput);
    char *s = ReadTextFile(fileInput);
    printf("%s", s);
    return 0;
}
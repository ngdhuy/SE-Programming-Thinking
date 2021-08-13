//
//  Created by NDHuy on 02/02/2021
//  Copyright 2020 by SEstudio
//  TEXT File operator
//

#ifndef __LIBFILE_H__
#define __LIBFILE_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintTextFile(char* fileName);
char* ReadTextFile(char* fileName);
int LengthOfFile(char* fileName);

#endif // __LIBFILE_H__
//
//  Created by NDHuy on 21/05/2020
//  Copyright 2020 by SEstudio
//  Array 01 Dimension
//

#include <stdio.h>
#include "array.h"

int main()
{
    int a[MAX];
    int n;
    Input(a, n);
    Output(a, n);
    PrintOdds(a, n);
    PrintEvens(a, n);
    printf("Count of %d in array: %d\n", 5, CountValue(a, n, 5));

    return 0;
}
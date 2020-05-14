//
//  Created by NDHuy on 08/05/2020
//  Copyright 2020 by SEstudio
//  Array 01 Dimension
//

#include <stdio.h>
#include "array.h"

int main()
{
    int a[MAX];
    int n = 0;
    Input(a, n);
    Output(a, n);

    int pos = Search(a, n, 10);
    printf("\nSearch value %d in array a at position: %d\n", 10, pos);

    if(IsPrimeArray(a, n))
        printf("Array a is a prime array\n");
    else
        printf("Array a is NOT prime array\n");

    int b[MAX]; 
    int m = 0; 

    int c[MAX];
    int k = 0;
    
    printf("Prime array B: \n");
    SplitPrimeArray(a, n, b, m);
    Output(b, m);

    SplitArray(a, n, b, m, c, k);
    printf("Prime array B: \n");
    Output(b, m);
    printf("Not prime array C: \n");
    Output(c, k);

    int d[MAX];
    int h = 0;
    printf("Merge Array D: \n");
    MergeArray(b, m, c, k, d, h);
    Output(d, h);

    printf("Max value of A array: %d\n", Max(a, n));
    printf("Min value of A array: %d\n", Min(a, n));

    printf("Sort accending A array: \n");
    SortAccending(a, n);
    Output(a, n);

    printf("Sort descending A array: \n");
    SortDescending(a, n);
    Output(a, n);
    
    printf("Insert 99 at index 4 in A array: \n");
    InsertAt(a, n, 4, 99);
    Output(a, n);

    printf("Remove at index 2 int A array: \n");
    RemoveAt(a, n, 2);
    Output(a, n);

    printf("\n");
    return 0;
}
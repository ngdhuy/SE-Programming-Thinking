//
//  Created by NDHuy on 11/09/2020
//  Copyright 2020 by SEstudio
//  File operator
//

#include <stdio.h>
#include <stdlib.h>

void change_it(int **k)
{ 
    int i = 777;
    int *q = &i;
    *k = q;
}

int main() {
    int *a = (int *)malloc(5 * sizeof(int));
    int *p;
    p = a;
    printf("a has the value %p\n", &a); 
    printf("p has the value %p\n", p); 
    change_it(&a);
    p = a;
    printf("a has the value %p\n", a); 
    printf("p has the value %p\n", p); 
    return 0;
}
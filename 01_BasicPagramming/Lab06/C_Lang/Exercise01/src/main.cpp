//
//  Created by NDHuy on 15/08/2020
//  Copyright 2020 by SEstudio
//  Pointer
//

#include <stdio.h>

int main()
{
    // static variable
    int n = 2;

    printf("value       --> \t  n = %d \n", n);
    printf("address     --> \t &n = %lu \n", (unsigned long)&n);
    printf("size of n   --> \t size n: %lu bytes\n", sizeof(n));

    printf("\n-------------------------------------\n");

    // pointer
    int *p = new int(99);
    
    printf("value       --> \t  p = %lu \n", (unsigned long)p);
    printf("address     --> \t &p = %lu \n", (unsigned long)&p);
    printf("size of p   --> \t size p: %lu bytes\n\n", sizeof(p));

    printf("value of pointer    --> \t *p = %d\n", *p);
    printf("address of pointer  --> \t &(*p) = %lu \n", (unsigned long)&(*p));
    printf("size of             --> \t size *p: %lu bytes\n", sizeof(*p));

    int **k;
    k = &p;

    printf("value       --> \t  k = %lu \n", (unsigned long)k);
    printf("address     --> \t &k = %lu \n", (unsigned long)&k);
    printf("size of p   --> \t size k: %lu bytes\n\n", sizeof(k));

    printf("value of pointer    --> \t *k = %lu\n", (unsigned long)*k);
    printf("address of pointer  --> \t &(*k) = %lu \n", (unsigned long)&(*k));
    printf("size of             --> \t size *k: %lu bytes\n", sizeof(*k));

    printf("value of pointer    --> \t **k = %d\n", **k);
    printf("address of pointer  --> \t &(**k) = %lu \n", (unsigned long)&(**k));
    printf("size of             --> \t size **k: %lu bytes\n", sizeof(**k));
    return 0;
}
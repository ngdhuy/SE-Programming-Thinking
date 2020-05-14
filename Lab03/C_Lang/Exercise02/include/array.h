//
//  Created by NDHuy on 08/05/2020
//  Copyright 2020 by SEstudio
//  Array 01 Dimension
//

#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <stdio.h>

#define MAX 100

void Input(int a[], int &n);
void Output(const int a[], const int &n);
int Search(const int a[], const int &n, int value); // return -1 when value is not exist in array

void Swap(int &a, int &b);
bool IsPrime(const int &n);

bool IsPrimeArray(const int a[], const int &n);
void SplitPrimeArray(const int a[], const int &n, int b[], int &m);
void SplitArray(const int a[], const int &n, int b[], int &m, int c[], int &k);
void MergeArray(const int a[], const int &n, const int b[], const int &m, int c[], int &k);
int Max(const int a[], const int &n);
int Min(const int a[], const int &n);
void SortAccending(int a[], const int &n);
void SortDescending(int a[], const int &n);
bool Insert(int a[], int &n, int value);
bool InsertAt(int a[], int &n, int pos, int value);
bool Remove(int a[], int &n);
bool RemoveAt(int a[], int &n, int pos);

#endif
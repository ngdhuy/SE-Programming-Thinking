//
//  Created by NDHuy on 21/05/2020
//  Copyright 2020 by SEstudio
//  Array 01 Dimension
//

#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <stdio.h>

#define MAX 100

void Input(int a[], int &n);
void Output(const int a[], const int &n);
void PrintOdds(const int a[], const int &n);
void PrintEvens(const int a[], const int &n);
int CountValue(const int a[], const int &n, const int value);

bool isPrime(int &n);
bool isPerfectSquare(int &n);
void Swap(int &a, int &b);

bool isPrimeArray(const int a[], const int &n);
bool isPerfectsSquareArray(const int a[], const int &n);
void ExtractPrimeArray(const int a[], const int &n, int b[], int &m);
void ExtractPerfectSquareArray(const int a[], const int &n, int b[], int &m);
void ExtractOddsArray(const int a[], const int &n, int b[], int &m);
void ExtractEvenArray(const int a[], const int &n, int b[], int &m);
void ExtractNegativeArray(const int a[], const int &n, int b[], int &m);
void ExtractPositiveArray(const int a[], const int &n, int b[], int &m);
void ExtractZeroArray(const int a[], const int &n, int b[], int &m);
void MergeNegativeZeroPositive(const int a[], const int &n, const int b[], const int &m, const int c[], const int &k, int d[], int &h);
void MergeZeroNegativePositive(const int a[], const int &n, const int b[], const int &m, const int c[], const int &k, int d[], int &h);
void MergePositiveZeroNegative(const int a[], const int &n, const int b[], const int &m, const int c[], const int &k, int d[], int &h);
void MergePositiveNegativeZero(const int a[], const int &n, const int b[], const int &m, const int c[], const int &k, int d[], int &h);


#endif
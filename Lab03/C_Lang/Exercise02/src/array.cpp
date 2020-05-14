//
//  Created by NDHuy on 08/05/2020
//  Copyright 2020 by SEstudio
//  Array 01 Dimension
//

#include "array.h"

void Input(int a[], int &n)
{
    printf("Enter the number of item: ");
    scanf("%d", &n);

    int temp;
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &temp);
        a[i] = temp;
    }
}

void Output(const int a[], const int &n)
{
    for(int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    
    printf("\n");
}

int Search(const int a[], const int &n, int value)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == value)
            return i;
    }
    return -1;
}

void Swap(int &a, int &b)
{
    int temp = a; 
    a = b; 
    b = temp;
}

bool IsPrime(const int &n)
{
    if(n == 0 || n == 1)
        return false;
        
    int m = n / 2;
    for(int i = 2; i <= m; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

bool IsPrimeArray(const int a[], const int &n)
{
    for(int i = 0; i < n; i++)
    {
        if(!IsPrime(a[i]))
            return false;
    }
    return true;
}

void SplitPrimeArray(const int a[], const int &n, int b[], int &m)
{
    m = 0; 
    for(int i = 0; i < n; i++)
    {
        if(IsPrime(a[i]))
            b[m++] = a[i];
    }
}

void SplitArray(const int a[], const int &n, int b[], int &m, int c[], int &k)
{
    m = 0; 
    k = 0; 
    for(int i = 0; i < n; i++)
    {
        if(IsPrime(a[i]))
            b[m++] = a[i];
        else
            c[k++] = a[i];
    }
}

void MergeArray(const int a[], const int &n, const int b[], const int &m, int c[], int &k)
{
    k = 0;
    for(int i = 0; i < n; i++)
        c[k++] = a[i];

    for(int i = 0; i < m; i++)
        c[k++] = b[i];
}

int Max(const int a[], const int &n)
{
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
        if(max < a[i])
            max = a[i];
    }

    return max;
}

int Min(const int a[], const int &n)
{
    int min = a[0];
    for(int i = 0; i < n; i++)
    {
        if(min > a[i])
            min = a[i];
    }

    return min;
}

void SortAccending(int a[], const int &n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
                Swap(a[i], a[j]);
        }
    }
}

void SortDescending(int a[], const int &n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
                Swap(a[i], a[j]);
        }
    }
}

bool Insert(int a[], int &n, int value)
{
    if(n == MAX)
        return false;
    
    a[n++] = value;
    return true;
}

bool InsertAt(int a[], int &n, int pos, int value)
{
    if(n == MAX)
        return false;

    if(0 <= pos && pos <= n)
    {
        for(int i = n; i > pos; i--)
        {
            a[i] = a[i - 1];
        }
        a[pos] = value;
        n++;
        return true;
    }
    else
        return false;
}

bool Remove(int a[], int &n)
{
    if(n == 0)
        return false;
    
    n--;
    return false;
}

bool RemoveAt(int a[], int &n, int pos)
{
    if(n == 0)
        return 0;

    if(0 <= pos && pos < n)
    {
        for(int i = pos; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        n--;
        return true;
    }
    else
        return false;
    
}
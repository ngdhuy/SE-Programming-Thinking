#ifndef __ARR_H__
#define __ARR_H__

#include <iostream>

#pragma once
#define MAX 100

using namespace std; 

template <class T>
class Array
{
    private:
        T arr[MAX];
        int num;

    public:
        Array();
        
        void Add(T value);
        void Print();
};

#endif
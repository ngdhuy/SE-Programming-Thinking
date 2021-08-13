//
//  Created by NDHuy on 23/03/2021
//  Copyright 2020 by SEstudio
//  Introduce to C++ with Vector<data type>
//

#include <iostream>
#include <vector>

using namespace std; 

#define MAX 100

void OriginalDynamicArrayMethod()
{
    // static array
    int a[5] = {1, 2, 3, 4, 5};
    int n = 5; 

    for(int i = 0; i < n; i++)
        cout << a[i] << "\t";
    cout << endl;

    // a[5] = 6;        // Error because of out of memory of Array A
    // cout << a[5] << endl;

    // dynamic array
    int *b = new int[5];
    
    for(int i = 0; i < n; i++)
        b[i] = i + 1;
    
    for(int i = 0; i < n; i++)
        cout << b[i] << "\t";
    cout << endl;
    
    // Resize array B to C with 6 items
    int* c = new int[6];
    for(int i = 0; i < n; i++)
        *(c + i) = b[i];
    
    delete[] b;          // Delete memory of array B
    
    c[5] = 6; 
    for(int i = 0; i < 6; i++)
        cout << c[i] << "\t";
    cout << endl;

    delete[] c;         // Delete memory of array C
}

// using Vector -> C++
void ModernDynamicArrayMethod()
{
    vector<int> v; 
    for(int i = 0; i < 10; i++)
        v.push_back(i);
    v.push_back(99);
    v.push_back(100);

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << "\t";
    cout << endl;

    v.pop_back();

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << "\t";
    cout << endl;

    v.erase(v.begin() + 3);
    
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << "\t";
    cout << endl;

    v.erase(v.begin() + 4, v.begin() + 8);
    
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << "\t";
    cout << endl;

    // Delete all item in array
    v.clear();
}

int main()
{
    OriginalDynamicArrayMethod();
    ModernDynamicArrayMethod();
    return 0;
}
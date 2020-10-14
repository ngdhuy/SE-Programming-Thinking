//
//  Created by NDHuy on 14/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to C++ with Vector<data type>
//

#include <iostream>
#include <vector>

using namespace std;

#define MAX 100;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    for(int i = 0; i < n; i++)
        cout << a[i] << "\t";

    cout << endl;

    vector<int> v;

    for(int i =0; i < 10; i++)
        v.push_back(i);

    v.push_back(99);
    v.push_back(100);

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << "\t";
    cout << endl;

    // clear all vector
    // v.clear();

    v.pop_back();
    v.erase(v.begin() + 1);
    v.erase(v.begin() + 4, v.begin() + 8);

    for(auto item = v.begin(); item != v.end(); item++)
        cout << *item << "\t";
    cout << endl;

    return 0;
}
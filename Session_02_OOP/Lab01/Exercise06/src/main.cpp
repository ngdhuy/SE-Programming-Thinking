//
//  Created by NDHuy on 14/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to C++ with Dictionary
//

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<int, string> list;
    list.insert(pair<int, string>(1, "Vinh"));
    list.insert(pair<int, string>(2, "Bao"));

    list.insert(pair<int, string>(99, "Huy"));

    for(int i = 0; i < list.size(); i++)
        cout << list[i] << endl;


    return 0;
}
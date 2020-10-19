//
//  Created by NDHuy on 16/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to OOP - Object Oriented Programming
//

#include <iostream>
#include "cat.h"

using namespace std;

int main()
{
    Animal::Cat c1;
    Animal::Cat c2("Cat VN", "Red");
    Animal::Cat *c3 = new Animal::Cat(c2);
    
    c1.SetName("Cat USA");
    c1.SetColor("Black");

    c1.Move();
    c1.Sound();

    c2.Move();
    c2.Sound();

    cout << "-- Cat 03 --" << endl;
    c3->Move();
    c3->Sound();
    
    return 0;
}
/**
 * Created by NDHuy on 17/11/2020
 * Copyright 2020 by SEstudio
 * Inherited in OOP
 **/ 

#include <iostream>

#include "Animal.h"
#include "Cat.h"

using namespace std;

int main()
{
    Cat* cat = new Cat(9, "Cat 3 Color", "RGB");
    cout << cat->getID() << "-" << cat->getName() << "-" << cat->getColor() << endl;

    cat->Run();

    cat->MakeSound();   
    
    return 0;
}
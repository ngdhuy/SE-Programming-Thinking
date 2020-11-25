/**
 * Created by NDHuy on 17/11/2020
 * Copyright 2020 by SEstudio
 * Inherited in OOP
 **/ 

#include <iostream>

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

#define MAX 10

using namespace std;

int main()
{
    Cat* cat = new Cat(9, "Cat 3 Color", "RGB");
    cout << cat->getID() << "-" << cat->getName() << "-" << cat->getColor() << endl;

    cat->Run();
    cat->MakeSound();   

    cout << endl << "----------------------" << endl;

    Animal* arr[MAX];
    int n = 3; 

    arr[0] = new Dog();
    arr[1] = new Cat(2, "Meo", "White");
    arr[2] = new Dog(3, "Cho", "Corgi", 1);

    for(int i = 0; i < n; i++)
        arr[i]->MakeSound();
    
    return 0;
}
#include <iostream>
#include "arr.h"

using namespace std;

int main()
{
    Array<double>* a = new Array<double>(); 
    a->Add(1.2);
    a->Add(2.5);
    a->Add(3.8);
    a->Print();
    return 0;
}
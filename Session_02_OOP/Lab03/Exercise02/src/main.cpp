/**
 * Created by NDHuy on 30/12/2020
 * Copyright 2020 by SEstudio
 * Single Linked List
 **/ 

#include <iostream>
#include "SingleLinkedList.h"
#include "Node.h"

using namespace std;

int main()
{
    SingleLinkedList* list = new SingleLinkedList();
    
    list->AddTail(5);
    list->AddTail(8);
    list->AddTail(9);
    list->AddTail(10);

    list->Print();

    return 0;
}
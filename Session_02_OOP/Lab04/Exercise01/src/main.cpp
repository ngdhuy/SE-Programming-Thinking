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
    SingleLinkedList* list_1 = new SingleLinkedList();
    
    list_1->AddHead(5);
    list_1->AddHead(8);
    list_1->AddHead(9);
    list_1->AddHead(10);

    cout << "Add Head: ";
    list_1->Print();

    SingleLinkedList* list_2 = new SingleLinkedList();

    list_2->AddTail(5);
    list_2->AddTail(8);
    list_2->AddTail(9);
    list_2->AddTail(10);

    cout << "Add Tail: ";
    list_2->Print();

    return 0;
}
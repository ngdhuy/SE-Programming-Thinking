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

    SingleLinkedList* list_3 = new SingleLinkedList();
    list_3->AddIncrease(8);
    list_3->AddIncrease(10);
    list_3->AddIncrease(5);
    list_3->AddIncrease(1);
    list_3->AddIncrease(-2);
    list_3->AddIncrease(4);
    list_3->AddIncrease(25);
    
    cout << "Add Increasement: ";
    list_3->Print();

    SingleLinkedList* list_4 = new SingleLinkedList();
    list_4->AddDecrease(8);
    list_4->AddDecrease(10);
    list_4->AddDecrease(5);
    list_4->AddDecrease(1);
    list_4->AddDecrease(-2);
    list_4->AddDecrease(4);
    list_4->AddDecrease(25);
    
    cout << "Add Decreasement: ";
    list_4->Print();

    cout << "Delete 5 in the Middle of linked list: ";
    list_4->Delete(5);
    list_4->Print();

    cout << "Delete 25 in the Head of linked list: ";
    list_4->Delete(25);
    list_4->Print();

    cout << "Delete -2 in the Tail of linked list: ";
    list_4->Delete(-2);
    list_4->Print();

    return 0;
}
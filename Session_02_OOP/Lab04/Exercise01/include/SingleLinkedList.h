/**
 * Created by NDHuy on 30/12/2020
 * Copyright 2020 by SEstudio
 * Single Linked List
 **/ 

#include <iostream>
#include "Node.h"

#pragma once

using namespace std;

class SingleLinkedList
{
    private: 
        Node* pHead;
    
    public: 
        SingleLinkedList(); 
        SingleLinkedList(Node* node);
        SingleLinkedList(int data);
        SingleLinkedList(const SingleLinkedList& singleLinkedList);
        ~SingleLinkedList();

        Node* getHead();
        void setHead(Node* pHead);

        void AddHead(Node* node);
        void AddHead(int data);

        void AddTail(Node* node);
        void AddTail(int data);

        void Print();
};
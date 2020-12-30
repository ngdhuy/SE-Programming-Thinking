/**
 * Created by NDHuy on 30/12/2020
 * Copyright 2020 by SEstudio
 * Single Linked List
 **/ 

#include <iostream>

#pragma once

using namespace std;

class Node
{
    private: 
        int data; 
        Node* pNext;

    public: 
        Node(); 
        Node(int data); 
        Node(const Node& node);
        ~Node();

        int getData(); 
        Node* getNext(); 

        void setData(int data);
        void setNext(Node* node);

        friend ostream& operator<<(ostream& os, Node& node);
        friend istream& operator>>(istream& is, Node& node);
};
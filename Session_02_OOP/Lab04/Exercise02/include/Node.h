/**
 * Created by NDHuy on 31/12/2020
 * Copyright 2020 by SEstudio
 * Single Linked List
 **/ 

#include <iostream>

#pragma once

using namespace std;

template <class T>
class Node
{
    private: 
        T data; 
        Node<T>* pNext;

    public: 
        Node(); 
        Node(T data); 
        Node(const Node<T>& node);
        ~Node();

        T getData(); 
        Node<T>* getNext(); 

        void setData(T data);
        void setNext(Node<T>* node);

        friend ostream& operator<<(ostream& os, Node<T>& node);
        friend istream& operator>>(istream& is, Node<T>& node);
};
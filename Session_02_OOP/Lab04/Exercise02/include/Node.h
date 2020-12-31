/**
 * Created by NDHuy on 31/12/2020
 * Copyright 2020 by SEstudio
 * Single Linked List
 **/ 

#ifndef __NODE_H__
#define __NODE_H__

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

        friend ostream& operator<<(ostream& os, Node<T>& node)
        {
            os << node.getData();
            return os;
        }

        friend istream& operator>>(istream& is, Node<T>& node)
        {
            T temp = 0; 
            cout << "Enter node's data = ";
            cin >> temp; 
            node.setData(temp);
            return is;
        }
};

#endif
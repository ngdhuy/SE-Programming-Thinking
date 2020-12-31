/**
 * Created by NDHuy on 31/12/2020
 * Copyright 2020 by SEstudio
 * Single Linked List
 **/ 

#include "Node.h"

template <class T>
inline
Node<T>::Node()
{
    this->data = 0;
    this->pNext = NULL;
}

template <class T>
inline
Node<T>::Node(T data)
{
    this->data = data; 
    this->pNext = NULL;
}

template <class T>
inline
Node<T>::Node(const Node<T>& node)
{
    this->data = node.data;
    this->pNext = node.pNext;
}

template <class T>
inline
Node<T>::~Node()
{
    delete this->pNext; 
    this->pNext = NULL;
}

template <class T>
inline
T  Node<T>::getData()
{
    return this->data;
}

template <class T>
inline
Node<T>* Node<T>::getNext()
{
    return this->pNext;
}

template <class T>
inline
void  Node<T>::setData(T data)
{
    this->data = data;
}

template <class T>
inline
void  Node<T>::setNext(Node<T>* node)
{
    this->pNext = node;
}

template <class T>
inline
ostream& operator<<(ostream& os, Node<T>& node)
{
    os << node.getData();
    return os;
}

template <class T>
inline
istream& operator>>(istream& is, Node<T>& node)
{
    T temp = 0; 
    cout << "Enter node's data = ";
    cin >> temp; 
    node.setData(temp);
    return is;
}
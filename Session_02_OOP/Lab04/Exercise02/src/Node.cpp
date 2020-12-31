/**
 * Created by NDHuy on 31/12/2020
 * Copyright 2020 by SEstudio
 * Single Linked List
 **/ 

#include "Node.h"

template <class T>
Node<T>::Node()
{
    this->data = 0;
    this->pNext = NULL;
}

template <class T>
Node<T>::Node(T data)
{
    this->data = data; 
    this->pNext = NULL;
}

template <class T>
Node<T>::Node(const Node<T>& node)
{
    this->data = node.data;
    this->pNext = node.pNext;
}

template <class T>
Node<T>::~Node()
{
    delete this->pNext; 
    this->pNext = NULL;
}

template <class T>
T  Node<T>::getData()
{
    return this->data;
}

template <class T>
Node<T>* Node<T>::getNext()
{
    return this->pNext;
}

template <class T>
void  Node<T>::setData(T data)
{
    this->data = data;
}

template <class T>
void  Node<T>::setNext(Node<T>* node)
{
    this->pNext = node;
}

//--- define data types which is used for template ---
template class Node<int>;
template class Node<long>;
template class Node<float>;
template class Node<double>;
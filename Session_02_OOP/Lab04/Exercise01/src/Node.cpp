/**
 * Created by NDHuy on 30/12/2020
 * Copyright 2020 by SEstudio
 * Single Linked List
 **/ 

#include "Node.h"

Node::Node()
{
    this->data = 0;
    this->pNext = NULL;
}

Node::Node(int data)
{
    this->data = data; 
    this->pNext = NULL;
}

Node::Node(const Node& node)
{
    this->data = node.data;
    this->pNext = node.pNext;
}


Node::~Node()
{
    delete this->pNext; 
    this->pNext = NULL;
}

int  Node::getData()
{
    return this->data;
}

Node* Node::getNext()
{
    return this->pNext;
}

void  Node::setData(int data)
{
    this->data = data;
}

void  Node::setNext(Node* node)
{
    this->pNext = node;
}

ostream& operator<<(ostream& os, Node& node)
{
    os << node.getData();
    return os;
}

istream& operator>>(istream& is, Node& node)
{
    int temp = 0; 
    cout << "Enter node's data = ";
    cin >> temp; 
    node.setData(temp);
    return is;
}


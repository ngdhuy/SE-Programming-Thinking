/**
 * Created by NDHuy on 30/12/2020
 * Copyright 2020 by SEstudio
 * Single Linked List
 **/ 

#include "SingleLinkedList.h"

SingleLinkedList::SingleLinkedList()
{
    this->pHead = NULL;
}

SingleLinkedList::SingleLinkedList(Node* node)
{
    this->pHead = node;
}

SingleLinkedList::SingleLinkedList(int data)
{
    Node* node = new Node(data);
    this->pHead = node;
}

SingleLinkedList::SingleLinkedList(const SingleLinkedList& singleLinkedList)
{
    this->pHead = singleLinkedList.pHead;
}

SingleLinkedList::~SingleLinkedList()
{
    Node* p = this->pHead;

    while(p != NULL)
    {
        Node* q = p;
        p = p->getNext();

        delete q;
        q = NULL;
    }

    this->pHead = NULL;
}

Node* SingleLinkedList::getHead()
{
    return this->pHead;
}

void SingleLinkedList::setHead(Node* pHead)
{
    this->pHead = pHead;
}

void SingleLinkedList::AddHead(Node* node)
{
    if(this->pHead == NULL)
    {
        this->pHead = node;
    }
    else
    {
        node->setNext(this->pHead);
        this->pHead = node;
    }
}

void SingleLinkedList::AddHead(int data)
{
    Node* node = new Node(data);
    this->AddHead(node);
}

void SingleLinkedList::AddTail(Node* node)
{
    if(this->pHead == NULL)
    {
        this->pHead = node;
    }
    else
    {
        Node* p = this->pHead;
        
        while(p->getNext() != NULL)
        {
            p = p->getNext();
        }

        p->setNext(node);
    }
}

void SingleLinkedList::AddTail(int data)
{
    Node* node = new Node(data);
    this->AddTail(node);
}

void SingleLinkedList::Print()
{
    Node* p = this->pHead;
    while(p)
    {
        cout << *p << "\t";
        p = p->getNext();
    }
    cout << endl;
}
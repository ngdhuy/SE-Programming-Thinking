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

void SingleLinkedList::AddIncrease(Node* node)
{
    if(this->pHead == NULL)
    {
        this->pHead = node;
    }
    else
    {
        if(this->pHead->getData() > node->getData())
        {
            this->AddHead(node);
            return;
        }
        else
        {
            Node* p = this->pHead;
            while(p)
            {
                if(p->getData() < node->getData() && p->getNext() != NULL && p->getNext()->getData() > node->getData())
                {
                    node->setNext(p->getNext());
                    p->setNext(node);
                    return;   
                }

                p = p->getNext();
            }

            this->AddTail(node);
        }        
    }
}

void SingleLinkedList::AddIncrease(int data)
{
    Node* node = new Node(data);
    this->AddIncrease(node);
}

void SingleLinkedList::AddDecrease(Node* node)
{
    if(this->pHead == NULL)
    {
        this->pHead = node;
    }
    else
    {
        if(this->pHead->getData() < node->getData())
        {
            this->AddHead(node);
            return;
        }
        else
        {
            Node* p = this->pHead;
            while(p)
            {
                if(p->getData() > node->getData() && p->getNext() != NULL && p->getNext()->getData() < node->getData())
                {
                    node->setNext(p->getNext());
                    p->setNext(node);
                    return;   
                }

                p = p->getNext();
            }

            this->AddTail(node);
        }        
    }
}

void SingleLinkedList::AddDecrease(int data)
{
    Node* node = new Node(data);
    this->AddDecrease(node);
}

void SingleLinkedList::Swap(Node* nodeA, Node* nodeB)
{
    int temp = nodeA->getData(); 
    nodeA->setData(nodeB->getData());
    nodeB->setData(temp);
}

Node* SingleLinkedList::Find(int data)
{
    for(Node* p = this->pHead; p != NULL; p = p->getNext())
    {
        if(p->getData() == data)
            return p;
    }
    return NULL;
}

void SingleLinkedList::Delete(int data)
{
    Node* node = this->Find(data);
    if(node != NULL)
    {
        if(this->pHead->getData() == data)
        {
            Node* p = this->pHead;
            this->pHead = this->pHead->getNext();

            p->setNext(NULL);
            delete p; 
            p = NULL;
        }
        else
        {
            Node* p = this->pHead;
            while(p)
            {
                if(p->getNext() == node)
                {
                    p->setNext(node->getNext());
                    
                    node->setNext(NULL);
                    delete node;
                    node = NULL;

                    return;
                }

                p = p->getNext();
            }
        }
    }
}
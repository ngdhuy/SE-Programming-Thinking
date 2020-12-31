/**
 * Created by NDHuy on 31/12/2020
 * Copyright 2020 by SEstudio
 * Single Linked List
 **/ 

#include "SingleLinkedList.h"

template <class L>
SingleLinkedList<L>::SingleLinkedList()
{
    this->pHead = NULL;
}

template <class L>
SingleLinkedList<L>::SingleLinkedList(Node<L>* node)
{
    this->pHead = node;
}

template <class L>
SingleLinkedList<L>::SingleLinkedList(L data)
{
    Node<L>* node = new Node<L>(data);
    this->pHead = node;
}

template <class L>
SingleLinkedList<L>::SingleLinkedList(const SingleLinkedList<L>& singleLinkedList)
{
    this->pHead = singleLinkedList.pHead;
}

template <class L>
SingleLinkedList<L>::~SingleLinkedList()
{
    Node<L>* p = this->pHead;

    while(p != NULL)
    {
        Node<L>* q = p;
        p = p->getNext();

        delete q;
        q = NULL;
    }

    this->pHead = NULL;
}

template <class L>
Node<L>* SingleLinkedList<L>::getHead()
{
    return this->pHead;
}

template <class L>
void SingleLinkedList<L>::setHead(Node<L>* pHead)
{
    this->pHead = pHead;
}

template <class L>
void SingleLinkedList<L>::AddHead(Node<L>* node)
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

template <class L>
void SingleLinkedList<L>::AddHead(L data)
{
    Node<L>* node = new Node<L>(data);
    this->AddHead(node);
}

template <class L>
void SingleLinkedList<L>::AddTail(Node<L>* node)
{
    if(this->pHead == NULL)
    {
        this->pHead = node;
    }
    else
    {
        Node<L>* p = this->pHead;
        
        while(p->getNext() != NULL)
        {
            p = p->getNext();
        }

        p->setNext(node);
    }
}

template <class L>
inline
void SingleLinkedList<L>::AddTail(L data)
{
    Node<L>* node = new Node<L>(data);
    this->AddTail(node);
}

template <class L>
void SingleLinkedList<L>::Print()
{
    Node<L>* p = this->pHead;
    while(p)
    {
        cout << *p << "\t";
        p = p->getNext();
    }
    cout << endl;
}

template <class L>
void SingleLinkedList<L>::AddIncrease(Node<L>* node)
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
            Node<L>* p = this->pHead;
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

template <class L>
void SingleLinkedList<L>::AddIncrease(L data)
{
    Node<L>* node = new Node<L>(data);
    this->AddIncrease(node);
}

template <class L>
void SingleLinkedList<L>::AddDecrease(Node<L>* node)
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
            Node<L>* p = this->pHead;
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

template <class L>
void SingleLinkedList<L>::AddDecrease(L data)
{
    Node<L>* node = new Node<L>(data);
    this->AddDecrease(node);
}

template <class L>
void SingleLinkedList<L>::Swap(Node<L>* nodeA, Node<L>* nodeB)
{
    L temp = nodeA->getData(); 
    nodeA->setData(nodeB->getData());
    nodeB->setData(temp);
}

template <class L>
Node<L>* SingleLinkedList<L>::Find(L data)
{
    for(Node<L>* p = this->pHead; p != NULL; p = p->getNext())
    {
        if(p->getData() == data)
            return p;
    }
    return NULL;
}

template <class L>
void SingleLinkedList<L>::Delete(L data)
{
    Node<L>* node = this->Find(data);
    if(node != NULL)
    {
        if(this->pHead->getData() == data)
        {
            Node<L>* p = this->pHead;
            this->pHead = this->pHead->getNext();

            p->setNext(NULL);
            delete p; 
            p = NULL;
        }
        else
        {
            Node<L>* p = this->pHead;
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

//--- define data types which is used for template ---
template class SingleLinkedList<int>;
template class SingleLinkedList<long>;
template class SingleLinkedList<float>;
template class SingleLinkedList<double>;
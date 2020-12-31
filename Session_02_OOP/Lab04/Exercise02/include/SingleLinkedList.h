/**
 * Created by NDHuy on 31/12/2020
 * Copyright 2020 by SEstudio
 * Single Linked List
 **/ 

#ifndef __SINGLELINKEDLIST_H__
#define __SINGLELINKEDLIST_H__

#include <iostream>
#include "Node.h"

#pragma once

using namespace std;

template <class L>
class SingleLinkedList
{
    private: 
        Node<L>* pHead;
    
    public: 
        SingleLinkedList(); 
        SingleLinkedList(Node<L>* node);
        SingleLinkedList(L data);
        SingleLinkedList(const SingleLinkedList<L>& singleLinkedList);
        ~SingleLinkedList();

        Node<L>* getHead();
        void setHead(Node<L>* pHead);

        void AddHead(Node<L>* node);
        void AddHead(L data);

        void AddTail(Node<L>* node);
        void AddTail(L data);

        void AddIncrease(Node<L>* node);
        void AddIncrease(L data);

        void AddDecrease(Node<L>* node);
        void AddDecrease(L data);

        Node<L>* Find(L data);

        void Delete(L data);

        void Swap(Node<L>* nodeA, Node<L>* nodeB);
        void Print();
};

#endif
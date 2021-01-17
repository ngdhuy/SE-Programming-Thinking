/**
 * Created on 11/01/2021 
*/

#include "ListVideo.h"

ListVideo::ListVideo()
{
    this->head = NULL; 
    this->size = 0; 
}

ListVideo::ListVideo(Video* video)
{
    this->head = new NodeVideo(video); 
    this->size = 1;
}

ListVideo::~ListVideo()
{
    NodeVideo* p = this->head;
    while(p)
    {
        NodeVideo* q = p;
        p = p->getNext();

        delete q;
    }

    this->head = NULL;
    this->size = 0;
}

void ListVideo::setHead(NodeVideo* nodeVideo)
{
    this->head = nodeVideo;
}

NodeVideo* ListVideo::getHead()
{
    return this->head;
}

int ListVideo::getSize()
{
    return this->size;
}

void ListVideo::AddHead(Video* video)
{
    if(this->head == NULL)
    {
        this->head = new NodeVideo(video);
        this->size = 1;
    }
    else
    {
        NodeVideo* p = new NodeVideo(video);
        p->setNext(this->head);
        this->head = p;
        this->size++;
    }
}

NodeVideo* ListVideo::Find(Video* video)
{
    NodeVideo* p = this->head;
    while(p)
    {
        if(p->getVideo()->getID() == video->getID())
            return p;
    }
    return NULL;
}

void ListVideo::Remove(Video* video)
{
    NodeVideo* q = this->Find(video);

    if(q != NULL)
    {
        if(this->head == q)
        {
            NodeVideo* p = this->head; 
            this->head = this->head->getNext();

            delete p;
            p = NULL;

            this->size--;
        }
        else
        {
            NodeVideo* p = this->head;

            while (p)
            {
                if(p->getNext() == q)
                {
                    p->setNext(q->getNext());

                    delete q; 
                    q = NULL;

                    this->size--;
                    return;
                }
            }
        }
    }
}

void ListVideo::LoadFromFile(string fileName)
{
    fstream f(fileName, ios::in);
    if(f.is_open())
    {
        string line;
        while(getline(f, line))
        {
            if(line[0] == '#')
                continue;
            
            string sObject[MAX];
            int n;

            Split(line, ',', sObject, n);

            Video* object;
            if (sObject[2] == "DVD")
            {
                object = new DVD(sObject[0], sObject[1], sObject[2], sObject[3], stoi(sObject[4]), stof(sObject[5]), sObject[6]);
            }
            else if (sObject[2] == "Record")
            {
                object = new MovieRecord(sObject[0], sObject[1], sObject[2], sObject[3], stoi(sObject[4]), stof(sObject[5]), sObject[6]);
            }
            else if (sObject[2] == "Game")
            {
                object = new Game(sObject[0], sObject[1], sObject[2], sObject[3], stoi(sObject[4]), stof(sObject[5]));
            }
            
            this->AddHead(object);
        }
        
        f.close();
    }
    else
    {
        cout << "Cannot access file " << fileName << endl;
    }   
}

void ListVideo::Print()
{
    NodeVideo* p = this->head;

    while (p)
    {
        cout << p->getVideo()->toString() << endl;
        p = p->getNext();
    }
}

void ListVideo::Action()
{
    
}
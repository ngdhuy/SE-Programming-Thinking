/**
 * Created on 11/01/2021 
*/

#ifndef __LISTVIDEO_H__
#define __LISTVIDEO_H__

#include <iostream>
#include <string>
#include <fstream>

#include "Video.h"
#include "DVD.h"
#include "Game.h"
#include "MovieRecord.h"

#include "NodeVideo.h"

#include "Lib.h"

#pragma once

using namespace std;

class ListVideo
{
    private:
        NodeVideo* head;
        int size;

    public:
        ListVideo(); 
        ListVideo(Video* video); 
        ~ListVideo();

        void setHead(NodeVideo* nodeVideo);
        
        NodeVideo* getHead();
        int getSize();

        void AddHead(Video* video);
        NodeVideo* Find(Video* video);
        NodeVideo* Find(ID* id);
        void Remove(Video* video);

        void LoadFromFile(string fileName);
        void SaveToFile(string fileName);
        
        void Print();

        void Action();

        void CreateDVD();
        void CreateMovieRecord();
        void CreateGame();

        void UpdateVideo();

        void PrintOneNodeVideo(NodeVideo* nodeVideo);

        void DeleteItem();

        void PrintAllItem();
        void PrintItemOutOfStock();

        void SearchByID();
        void SearchByTitle();
};

#endif // __LISTVIDEO_H__
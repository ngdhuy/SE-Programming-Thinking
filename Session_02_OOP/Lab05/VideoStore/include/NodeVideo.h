/**
 * Created on 11/01/2021 
*/

#ifndef __NODEVIDEO_H__
#define __NODEVIDEO_H__

#include <iostream>
#include <string>

#include "Video.h"
#include "DVD.h"
#include "Game.h"
#include "MovieRecord.h"

#pragma once

using namespace std;

class NodeVideo
{
    private:
        Video* video;
        NodeVideo* next;

    public: 
        NodeVideo();
        NodeVideo(Video* video);
        ~NodeVideo();

        void setVideo(Video* video);
        void setNext(NodeVideo* nodeVideo);

        Video* getVideo();
        NodeVideo* getNext();
};

#endif // __NODEVIDEO_H__
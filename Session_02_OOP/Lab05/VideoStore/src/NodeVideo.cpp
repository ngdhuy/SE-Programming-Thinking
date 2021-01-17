/**
 * Created on 11/01/2021 
*/

#include "NodeVideo.h"

NodeVideo::NodeVideo()
{
    this->video = NULL;
    this->next = NULL;
}

NodeVideo::NodeVideo(Video* video)
{
    this->video = video; 
    this->next = NULL;
}

NodeVideo::~NodeVideo()
{
    if(this->video != NULL)
    {
        if(this->video->getRental() == "DVD")
        {
            delete (DVD*)this->video;    
        }
        else if (this->video->getRental() == "Game")
        {
            delete (Game*)this->video;
        }
        else if (this->video->getRental() == "Record")
        {
            delete (MovieRecord*)this->video;
        }
        this->video = NULL;    
    }

    delete this->next; 
    this->next = NULL;
}

void NodeVideo::setVideo(Video* video)
{
    this->video = video;
}

void NodeVideo::setNext(NodeVideo* nodeVideo)
{
    this->next = nodeVideo;
}

Video* NodeVideo::getVideo()
{
    return this->video;
}

NodeVideo* NodeVideo::getNext()
{
    return this->next;
}
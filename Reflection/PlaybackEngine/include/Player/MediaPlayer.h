#ifndef MEDIAPLAYER_H__
#define MEDIAPLAYER_H__
#include "ClassRegister.h"

class MediaPlayer
{
public:
	virtual void play()=0;
	virtual void pause()=0;
	virtual void load(string url)=0;
};

#endif

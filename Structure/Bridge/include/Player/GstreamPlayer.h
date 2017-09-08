#ifndef GSTREAMPLAYER_H_H_
#define GSTREAMPLAYER_H_H_
#include "MediaPlayer.h"

class GstreamPlayer:public MediaPlayer
{
public:
	GstreamPlayer();
	~GstreamPlayer();
	virtual void Play();
};

#endif

#ifndef GSTREAM_PLAYER_H_H
#define GSTREAM_PLAYER_H_H
#include "MediaPlayer.h"

class GstreamPlayer:public MediaPlayer
{
public:
	virtual void play();
};
#endif

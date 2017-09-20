#ifndef GSTREAMPLAYER_H__
#define GSTREAMPLAYER_H__
#include "MediaPlayer.h"

class GstreamPlayer : public MediaPlayer
{
public:
	void play();
	void pause();
	void load(string url);
};



#endif

#ifndef GSTREAMPLAYER_H__
#define GSTREAMPLAYER_H__
#include "MediaPlayer.h"

class GstreamPlayer : public MediaPlayer
{
public:
	GstreamPlayer();
	~GstreamPlayer();
	static MediaPlayer* factory();
	static void Register();
};



#endif

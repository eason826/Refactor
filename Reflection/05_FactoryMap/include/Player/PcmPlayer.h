#ifndef PCMPLAYER_H_
#define PCMPLAYER_H_
#include "MediaPlayer.h"

class PcmPlayer : public MediaPlayer
{
public:
	PcmPlayer();
	~PcmPlayer();
	static MediaPlayer* factory();
	static void Register();

};

#endif

#ifndef PCMPLAYER_H_
#define PCMPLAYER_H_
#include "MediaPlayer.h"

class PcmPlayer : public MediaPlayer
{
public:
	void play();
	void pause();
	void load(string url);
};

#endif

#ifndef PCMPLAYER_H_H_
#define PCMPLAYER_H_H_
#include "MediaPlayer.h"

class PcmPlayer:public MediaPlayer
{
public:
	PcmPlayer();
	~PcmPlayer();
	virtual void Play();
protected:
private:
};

#endif

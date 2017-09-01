#ifndef PCM_PLAYER_H_H
#define PCM_PLAYER_H_H
#include "MediaPlayer.h"

class PcmPlayer:public MediaPlayer
{
public:
	virtual void play();
};
#endif

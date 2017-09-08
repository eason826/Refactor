#ifndef NEWPLAYER_H_H_
#define NEWPLAYER_H_H_
#include "MediaPlayer.h"
#include "AwesomePlayer.h"

class NewPlayer:public MediaPlayer,private AwesomePlayer
{
public:
	NewPlayer();
	~NewPlayer();
	void Play();
};

#endif

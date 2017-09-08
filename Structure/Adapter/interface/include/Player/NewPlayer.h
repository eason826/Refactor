#ifndef NEWPLAYER_H_H_
#define NEWPLAYER_H_H_
#include "MediaPlayer.h"
#include "AwesomePlayer.h"

class NewPlayer:public MediaPlayer
{
public:
	NewPlayer(AwesomePlayer*);
	~NewPlayer();
	void Play();
private:
	AwesomePlayer *awe_player;
};

#endif

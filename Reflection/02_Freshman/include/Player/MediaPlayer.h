#ifndef MEDIAPLAYER_H_H
#define MEDIAPLAYER_H_H
#include <string>
#include <stdio.h>

using namespace std;

enum PlayerType
{
	GSTREAM_PLAYER = 1,
	PCM_PLAYER,
	NEW_PLAYER
};

class MediaPlayer
{
public:
	virtual void play()=0;
};

#endif

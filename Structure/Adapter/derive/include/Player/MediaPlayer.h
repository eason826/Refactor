#ifndef MEDIAPLAYER_H_H
#define MEDIAPLAYER_H_H
#include <iostream>
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
	virtual void Play()=0;
};

#endif

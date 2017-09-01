#ifndef MEDIAPLAYER_H_H
#define MEDIAPLAYER_H_H
#include <string>
#include <stdio.h>

enum PlayerType
{
	GSTREAM_PLAYER = 1,
	PCM_PLAYER,
	NEW_PLAYER
};

void Gstream_Play();
void Pcm_Play();

#endif

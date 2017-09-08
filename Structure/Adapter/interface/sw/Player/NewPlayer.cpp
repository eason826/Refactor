#include "NewPlayer.h"

NewPlayer::NewPlayer(AwesomePlayer *p)
{
	awe_player = p;
}

NewPlayer::~NewPlayer()
{

}

void NewPlayer::Play()
{
	awe_player->AwePlay();
}


#include "PcmPlayer.h"

PcmPlayer::PcmPlayer()
{
	printf("------------%s construct----------\n",__func__);
}

PcmPlayer::~PcmPlayer()
{
	printf("------------%s destruct----------\n",__func__);
}

MediaPlayer* PcmPlayer::factory()
{
	return new PcmPlayer();
}

void PcmPlayer::Register()
{
	RegisterPlayer("Pcm", factory);
}




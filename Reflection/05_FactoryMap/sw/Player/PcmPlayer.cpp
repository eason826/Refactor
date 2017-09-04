#include "PcmPlayer.h"

PcmPlayer::PcmPlayer()
{
	printf("------------%s construct----------\n",__func__);
}

PcmPlayer::~PcmPlayer()
{
	printf("------------%s destruct----------\n",__func__);
}

REGISTER(PcmPlayer);



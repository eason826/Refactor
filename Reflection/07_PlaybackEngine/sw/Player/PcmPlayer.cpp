#include "PcmPlayer.h"

void PcmPlayer::play()
{
	printf("------------PcmPlayer::%s----------\n",__func__);
}

void PcmPlayer::load(string url)
{
	cout<<"PcmPlayer::"<<__func__<<" url:"<<url<<endl;
}

void PcmPlayer::pause()
{
	cout<<"PcmPlayer::"<<__func__<<" called!"<<endl;
}

REGISTER(PcmPlayer);

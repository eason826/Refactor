#include "GstreamPlayer.h"

void GstreamPlayer::play()
{
	printf("------------GstreamPlayer::%s----------\n",__func__);
}

void GstreamPlayer::load(string url)
{
	cout<<"GstreamPlayer::"<<__func__<<" url:"<<url<<endl;
}

void GstreamPlayer::pause()
{
	cout<<"GstreamPlayer::"<<__func__<<" called!"<<endl;
}

REGISTER(GstreamPlayer);

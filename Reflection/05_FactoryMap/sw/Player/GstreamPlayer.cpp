#include "GstreamPlayer.h"

GstreamPlayer::GstreamPlayer()
{
	printf("------------%s Construct----------\n",__func__);
}

GstreamPlayer::~GstreamPlayer()
{
	printf("------------%s Destruct----------\n",__func__);
}

REGISTER(GstreamPlayer);

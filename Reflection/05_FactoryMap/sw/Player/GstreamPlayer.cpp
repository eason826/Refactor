#include "GstreamPlayer.h"

GstreamPlayer::GstreamPlayer()
{
	printf("------------%s Construct----------\n",__func__);
}

GstreamPlayer::~GstreamPlayer()
{
	printf("------------%s Destruct----------\n",__func__);
}

MediaPlayer* GstreamPlayer::factory()
{
	return new GstreamPlayer();
}

void GstreamPlayer::Register()
{
	RegisterPlayer("Gstream", factory);
}

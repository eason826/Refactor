#include "PlayerMgr.h"

MediaPlayer* PlayerMgr::GetPlayerInstance(PlayerType type)
{
	static MediaPlayer* player;
	switch(type)
	{
		case GSTREAM_PLAYER:
		player = new GstreamPlayer();
		break;
		case PCM_PLAYER:
		player = new PcmPlayer();
		break;
		default:
		player = NULL;
		break;
	}
	return player;
}

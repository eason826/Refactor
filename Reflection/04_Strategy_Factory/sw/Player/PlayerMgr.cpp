#include "PlayerMgr.h"

PlayerMgr::PlayerMgr(PlayerType type)
{
	switch(type)
	{
		case GSTREAM_PLAYER:
		{
			MediaPlayer *gst_player = new GstreamPlayer();
			m_player = gst_player;
			break;
		}
		case PCM_PLAYER:
		{
			MediaPlayer *pcm_player = new PcmPlayer();
			m_player = pcm_player;
			break;
		}
		default:
		{
			m_player = NULL;
			break;
		}
	}
	
}

void PlayerMgr::play()
{
	if(m_player)
		m_player->play();
}

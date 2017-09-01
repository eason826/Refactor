#include "GstreamPlayer.h"
#include "PcmPlayer.h"

MediaPlayer* GetPlayerInstance(PlayerType type)
{
	MediaPlayer* player;
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

int main()
{
	MediaPlayer* pPlayer = GetPlayerInstance(GSTREAM_PLAYER);
	if(pPlayer != NULL)
		pPlayer->play();
	else
		printf("cant find this Player!\n");
	return 0;
}

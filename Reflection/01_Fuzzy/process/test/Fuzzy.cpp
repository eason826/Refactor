#include "MediaPlayer.h"

void Start_Play(PlayerType type)
{
	switch(type)
	{
		case GSTREAM_PLAYER:
		Gstream_Play();
		break;
		case PCM_PLAYER:
		Pcm_Play();
		break;
		default:
		break;
	}
}

int main()
{
	Start_Play(GSTREAM_PLAYER);
	return 0;
}

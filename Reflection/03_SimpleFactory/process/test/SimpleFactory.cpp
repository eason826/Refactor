#include "PlayerMgr.h"

int main()
{
	MediaPlayer *pPlayer = PlayerMgr::GetPlayerInstance(GSTREAM_PLAYER);
	if(pPlayer != NULL)
		pPlayer->play();
	else
		printf("cant find this Player!\n");
	return 0;
}

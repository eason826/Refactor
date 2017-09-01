#include "PlayerMgr.h"

int main()
{
	PlayerMgr *playMgr = new PlayerMgr(GSTREAM_PLAYER);
	if(playMgr != NULL)
		playMgr->play();
	else
		printf("cant find this Player!\n");
	return 0;
}

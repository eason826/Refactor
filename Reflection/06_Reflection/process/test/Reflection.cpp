#include "PlayerMgr.h"

int main(int argc,char *argv[])
{
	MediaPlayer *sInstance=PlayerMgr::GetPlayerInstance("param.ini");
	if(sInstance)
		sInstance->play();
	else
		printf("can't find player!\n");
	return 0;
}

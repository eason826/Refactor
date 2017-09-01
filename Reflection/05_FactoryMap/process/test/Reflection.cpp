#include "PlayerMgr.h"

int main(int argc,char *argv[])
{
	PlayerMgr::RegisterPlayers();
	string type = PlayerMgr::GetPlayerType((char*)"param.ini");
	MediaPlayer *sInstance=PlayerMgr::GetPlayerInstance(type.c_str());
	return 0;
}

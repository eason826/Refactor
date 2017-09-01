#include "PlayerMgr.h"

void PlayerMgr::RegisterPlayers()
{
	PcmPlayer::Register();
	GstreamPlayer::Register();
}

MediaPlayer* PlayerMgr::GetPlayerInstance(const char* name)
{
	return MediaPlayer::CreatePlayer(name);
}

string PlayerMgr::GetPlayerType(char *name)
{	
	return ini_parser::parse(name);
}

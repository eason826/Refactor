#ifndef PLAYER_MANAGER_H_H
#define PLAYER_MANAGER_H_H
#include "GstreamPlayer.h"
#include "PcmPlayer.h"
#include "ini_parser.h"

class PlayerMgr
{
	public:
	static void RegisterPlayers();
	static MediaPlayer* GetPlayerInstance(const char* name);
	static string GetPlayerType(char *name);
};
#endif

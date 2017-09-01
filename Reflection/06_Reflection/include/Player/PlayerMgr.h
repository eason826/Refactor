#ifndef PLAYER_MANAGER_H_H
#define PLAYER_MANAGER_H_H
#include "ini_parser.h"
#include "MediaPlayer.h"

class PlayerMgr
{
public:
	static MediaPlayer* GetPlayerInstance(const char* name);
};
#endif

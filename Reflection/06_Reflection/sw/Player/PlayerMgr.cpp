#include "PlayerMgr.h"

MediaPlayer* PlayerMgr::GetPlayerInstance(const char* name)
{
	string type = ini_parser::parse(name);
	return (MediaPlayer*)ClassFactory::getInstance().getClassByName(type);
}

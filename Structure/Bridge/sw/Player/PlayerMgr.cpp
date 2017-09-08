#include "PlayerMgr.h"

Manager::Manager()
{

}

Manager::~Manager()
{

}

PlayerMgr::PlayerMgr(MediaPlayer* p)
{
	m_player = p;
}

PlayerMgr::~PlayerMgr()
{
}

void PlayerMgr::Play()
{
	m_player->Play();
}

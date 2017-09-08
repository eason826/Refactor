#include "PlayerMgr.h"

Manager::Manager()
{

}

Manager::~Manager()
{

}

PlayerMgr::PlayerMgr(MediaPlayer* p1,BrowserHandle *p2)
{
	m_player = p1;
	m_browser = p2;
}

PlayerMgr::~PlayerMgr()
{
}

void PlayerMgr::Play()
{
	m_browser->GetItem();
	m_player->Play();
}

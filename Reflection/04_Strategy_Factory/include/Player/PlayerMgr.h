#ifndef PLAYERMGR_H_H
#define PLAYERMGR_H_H
#include "MediaPlayer.h"
#include "GstreamPlayer.h"
#include "PcmPlayer.h"

class PlayerMgr
{
public:
	PlayerMgr(PlayerType type);
	void play();
private:
	MediaPlayer *m_player;
};
#endif

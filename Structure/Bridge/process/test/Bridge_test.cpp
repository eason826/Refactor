#include "GstreamPlayer.h"
#include "PcmPlayer.h"
#include "PlayerMgr.h"

int main(int argc,char* argv[])
{
	{
		MediaPlayer* player = new GstreamPlayer();
		Manager* mgr = new PlayerMgr(player);
		mgr->Play();
		delete mgr;
		delete player;
	}
	{
		MediaPlayer* player = new PcmPlayer();
		Manager* mgr = new PlayerMgr(player);
		mgr->Play();
		delete mgr;
		delete player;
	}
	return 0;
}

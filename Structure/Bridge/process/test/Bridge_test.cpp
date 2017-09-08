#include "PlayerMgr.h"
#include "GstreamPlayer.h"
#include "PcmPlayer.h"
#include "iAP1BrowserHandle.h"
#include "iAP2BrowserHandle.h"

int main(int argc,char* argv[])
{
	{
		MediaPlayer* player = new GstreamPlayer();
		BrowserHandle *handle = new iAP1BrowserHandle();
		Manager* mgr = new PlayerMgr(player,handle);
		mgr->Play();
		delete mgr;
		delete player;
		delete handle;
	}
	{
		MediaPlayer* player = new PcmPlayer();
		BrowserHandle *handle = new iAP2BrowserHandle();
		Manager* mgr = new PlayerMgr(player,handle);
		mgr->Play();
		delete mgr;
		delete player;
		delete handle;
	}
	return 0;
}

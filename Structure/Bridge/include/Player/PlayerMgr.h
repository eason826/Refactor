#ifndef PLAYERMGR_H_H_
#define PLAYERMGR_H_H_
#include "MediaPlayer.h"

class MediaPlayer;

class Manager
{
public:
	virtual ~Manager();
	virtual void Play() = 0;
protected:
	Manager();
};

class PlayerMgr:public Manager
{
public:
	PlayerMgr(MediaPlayer*);
	~PlayerMgr();
	void Play();
private:
	MediaPlayer* m_player;
};

#endif

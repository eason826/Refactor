#ifndef MEDIAPLAYER_H_H_
#define MEDIAPLAYER_H_H_
#include <iostream>
using namespace std;

class MediaPlayer
{
public:
	virtual ~MediaPlayer();
	virtual void Play() = 0;
protected:
	MediaPlayer();
};

#endif

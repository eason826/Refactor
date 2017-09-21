#ifndef	__PLAYBACKENGINE_H__
#define	__PLAYBACKENGINE_H__

#include "ScriptEngine.h"

class PlaybackEngine
{
public:
	PlaybackEngine();
	~PlaybackEngine();
	const char* callFunction(string functionName, int argc, vector<string> argv);
private:
};


#endif

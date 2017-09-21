#include "PlaybackEngine.h"

PlaybackEngine::PlaybackEngine()
{
}

PlaybackEngine::~PlaybackEngine()
{
}

const char* PlaybackEngine::callFunction(string functionName, int argc, vector<string> argv)
{
    	return ScriptEngine::getInstance().callFunction(functionName, argc, argv);
}

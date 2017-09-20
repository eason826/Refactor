#include "ScriptEngine.h"

DECLARE_FUNC(play)
DECLARE_FUNC(pause)
const char* load(int argc, vector<string> argv, void* creator)
{
	MediaPlayer *player = (MediaPlayer*)ClassFactory::getInstance().getClassByName(argv[0]);
	if(player)
		player->load(argv[1]);
	else
		cout<<argv[0]<<" Not found!"<<endl;
	return 0;
}
static SS_ENTRY function_Table[]=
{
	{(char*)"Load", load},
	{(char*)"Play", play},
	{(char*)"Pause",pause},
	{NULL,NULL}
};
REGISTER_TBL(function_Table);

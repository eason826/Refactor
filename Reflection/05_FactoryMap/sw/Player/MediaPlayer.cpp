#include "MediaPlayer.h"

/*PlayerFactory MediaPlayer::factories[MaxFactories] = {0};*/

MediaPlayer::MediaPlayer()
{
	printf("------------%s construct----------\n",__func__);
}

MediaPlayer::~MediaPlayer()
{
	printf("------------%s destruct----------\n",__func__);
}
	
PlayerFactory* MediaPlayer::GetFactories()
{
	static PlayerFactory factories[MaxFactories];
	return factories;
}
void MediaPlayer::RegisterPlayer(const char* PlayerType,Factory factory)
{
	PlayerFactory* pFactories = GetFactories();
	for (int i = 0; i < MaxFactories; ++i)
	{
		if (pFactories[i].PlayerType == 0)
		{
			pFactories[i].PlayerType = PlayerType;
			pFactories[i].factory = factory;
			break;
		}
	}
}
MediaPlayer* MediaPlayer::CreatePlayer(const char* PlayerType)
{
	MediaPlayer* pPlayer= 0;
	int index;
	PlayerFactory* pFactories = GetFactories();
	for (index = 0; index < MaxFactories; ++index)
	{
		if (pFactories[index].PlayerType != 0 && strcmp(pFactories[index].PlayerType, PlayerType) == 0)
		{
			printf("%s of type %s\n", __func__,pFactories[index].PlayerType);
			pPlayer = pFactories[index].factory();
			break;
		}
	}
	if(index!=MaxFactories)
		return pPlayer;
	else
	{
		printf("%s of type %s Fail!May not Registerd\n", __func__,PlayerType);
		return NULL;
	}
} 

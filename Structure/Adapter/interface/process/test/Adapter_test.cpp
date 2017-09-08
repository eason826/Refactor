#include "NewPlayer.h"

int main(int argc,char* argv[])
{
	AwesomePlayer *awe = new AwesomePlayer;
	MediaPlayer* player = new NewPlayer(awe);
	player->Play();
	return 0;
}

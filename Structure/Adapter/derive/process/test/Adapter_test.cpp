#include "NewPlayer.h"

int main(int argc,char* argv[])
{
	MediaPlayer* player = new NewPlayer();
	player->Play();
	return 0;
}

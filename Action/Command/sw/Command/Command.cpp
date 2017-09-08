#include "Command.h"

Command::Command()
{

}
Command::~Command()
{
}
void Command::Excute()
{
}

PlayerCommand::PlayerCommand(Receiver* rev)
{
	_rev = rev;
}
PlayerCommand::~PlayerCommand()
{
	if (_rev != 0)
		delete _rev;
}
void PlayerCommand::Excute()
{
	_rev->Action();
}

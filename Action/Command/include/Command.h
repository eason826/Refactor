#ifndef _COMMAND_H_
#define _COMMAND_H_
#include "Receiver.h"

class Command
{
public:
	virtual ~Command();
	virtual void Excute() = 0;
protected:
	Command();
private:
};

class PlayerCommand:public Command
{
public:
	PlayerCommand(Receiver* rev);
	~PlayerCommand();
	void Excute();
private:
	Receiver* _rev;
};

#endif //~_COMMAND_H_

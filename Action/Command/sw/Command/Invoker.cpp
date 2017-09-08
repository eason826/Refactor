#include "Invoker.h"

Invoker::Invoker(Command* cmd)
{
	_cmd = cmd;
}
Invoker::~Invoker()
{
	if (_cmd != 0)
		delete _cmd;
}
void Invoker::Invoke()
{
	cout<<"Invoker Invoke......."<<endl;
	_cmd->Excute();
}

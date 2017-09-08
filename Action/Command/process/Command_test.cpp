#include "Invoker.h"

int main(int argc,char* argv[])
{
	Receiver* rev = new Receiver();
	Command* cmd = new PlayerCommand(rev);
	Invoker* inv = new Invoker(cmd);
	inv->Invoke();
	return 0;
}

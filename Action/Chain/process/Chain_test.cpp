#include "Chain.h"

int main(int argc,char* argv[])
{
	ProcMan* manager = new Manager("manager");
	ProcMan* chief = new Chief("cheif");
	ProcMan* director = new Director("director");
	manager->SetSuccessor(chief);
	chief->SetSuccessor(director);
	manager->Process();
	return 0;
}

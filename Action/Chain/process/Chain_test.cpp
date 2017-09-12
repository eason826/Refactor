#include "Chain.h"

int main(int argc,char* argv[])
{
	ProcMan* director = new Director("director",NULL);
	ProcMan* chief = new Chief("chief",director);
	ProcMan* manager = new Manager("manager",chief);
	manager->Process();
	return 0;
}

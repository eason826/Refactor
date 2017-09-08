#include "Blog.h"
#include "Observer.h"

int main(int argc,char* argv[])
{
	BlogCSDN* sub = new BlogCSDN();
	Observer* o1 = new ObserverA(sub);
	Observer* o2 = new ObserverB(sub);
	sub->SetState("2017-09-08 Updated");
	sub->Notify();
	return 0;
}

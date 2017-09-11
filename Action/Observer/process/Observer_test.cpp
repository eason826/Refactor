#include "Blog.h"
#include "Observer.h"

int main(int argc,char* argv[])
{
	BlogCSDN* sub = new BlogCSDN("2017.09.11 Updated");
	Observer* o1 = new NBAObserver("Eason",sub);
	Observer* o2 = new NBAObserver("Jialei",sub);
	Observer* o3 = new StockObserver("William",sub);
	sub->Notify();
	return 0;
}

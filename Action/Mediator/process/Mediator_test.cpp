#include "Mediator.h"

int main()
{	
	Mediator *mediator = new HouseMediator();
	Person *renter = new Renter(mediator);
	Person *landlord = new Landlord(mediator);

	mediator->Add(renter);
	mediator->Add(landlord);

	renter->SendMsg("I want house 700RMB/month\n");
	landlord->SendMsg("I have house,1000RMB/month\n");

	delete renter; delete landlord; delete mediator;
	return 0;
}

#include "Mediator.h"

int main()
{	
	Mediator *mediator = new HouseMediator();
	Person *renter = new Renter();
	Person *landlord = new Landlord();

	renter->SetMediator(mediator);
	landlord->SetMediator(mediator);

	mediator->Add(renter);
	mediator->Add(landlord);

	renter->SendMessage("I want house 700RMB/month\n");
	landlord->SendMessage("I have house,1000RMB/month\n");

	delete renter; delete landlord; delete mediator;
	return 0;
}

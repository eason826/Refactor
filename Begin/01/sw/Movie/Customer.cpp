#include "Customer.h"

Customer::Customer(string name)
{
	_name = name;
}

void Customer::addRental(Rental arg)
{
	_rentals.push_back(arg);
}

string Customer::getName()
{
	return _name;
}

vector<Rental> Customer::getRentals()
{
	return _rentals;
}

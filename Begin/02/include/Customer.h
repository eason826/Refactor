#ifndef CUSTOMER_H_H
#define CUSTOMER_H_H
#include "Rental.h"
#include <vector>

class Customer 
{
public:
	Customer(string name);
	void addRental(Rental arg);
	string getName();
	vector<Rental> getRentals();
private:
	string _name;
	vector<Rental> _rentals;
};

#endif

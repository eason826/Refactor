#include "Customer.h"

static Movie movie1("Animals",CHILDRENS);
static Movie movie2("Fighting",NEW_RELEASE);
static Movie movie3("InitialD",REGULAR);

static Rental rental1(movie1,10);
static Rental rental2(movie2,5);
static Rental rental3(movie3,3);

static Customer customer("Eason");

void getDetail()
{
	double totalAmount = 0;
        int frequentRenterPoints = 0;
	vector<Rental> rentals = customer.getRentals();
	vector<Rental>::iterator iter;
	for(iter=rentals.begin();iter!=rentals.end();iter++)
	{
		double thisAmount = iter->getCharge();
	
		frequentRenterPoints += iter->getFrequentRenterPoints();
		 
            	//show figures for this rental
		cout<<iter->getMovie().getTitle()<<":"<<thisAmount<<endl;
            	totalAmount += thisAmount;
			
	}
	//add footer lines
	cout<<"Total Amount:"<<totalAmount<<endl;
	cout<<"points earned:"<<frequentRenterPoints<<endl;	 
}

void rentMovies()
{
	customer.addRental(rental1);
	customer.addRental(rental2);
	customer.addRental(rental3);
}

int main()
{
	rentMovies();
	getDetail();
	return 0;
}


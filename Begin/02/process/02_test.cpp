#include "Customer.h"

static Movie movie1("Animals",CHILDRENS);
static Movie movie2("Fighting",NEW_RELEASE);
static Movie movie3("InitialD",REGULAR);

static Rental rental1(movie1,10);
static Rental rental2(movie2,5);
static Rental rental3(movie3,3);

static Customer customer("Eason");


double amountFor(Rental aRental) 
{
	double result = 0;
	switch (aRental.getMovie().getPriceCode()) 
	{
          	case REGULAR:
		{
              		result += 2;
              		if (aRental.getDaysRented() > 2)
                  		result += (aRental.getDaysRented() - 2) * 1.5;
              		break;
		}
          	case NEW_RELEASE:
		{
              		result += aRental.getDaysRented() * 3;
              		break;
		}
          	case CHILDRENS:
		{
              		result += 1.5;
              		if (aRental.getDaysRented() > 3)
                  		result += (aRental.getDaysRented() - 3) * 1.5;
              		break;
		}
      	}
      	return result;
}


void getDetail()
{
	double totalAmount = 0;
        int frequentRenterPoints = 0;
	vector<Rental> rentals = customer.getRentals();
	vector<Rental>::iterator iter;
	for(iter=rentals.begin();iter!=rentals.end();iter++)
	{
		double thisAmount = amountFor(*iter);;
			 
		frequentRenterPoints ++;
            	/*add bonus for a two day new release rental*/
			
            	if ((iter->getMovie().getPriceCode() == NEW_RELEASE) && iter->getDaysRented() > 1) 
			frequentRenterPoints ++;

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


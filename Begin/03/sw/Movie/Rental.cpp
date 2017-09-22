#include "Rental.h"

Rental::Rental(Movie movie,int daysRented)
{
	_movie = movie;
	_daysRented = daysRented;
}

int Rental::getDaysRented()
{
	return _daysRented;
}

int Rental::getFrequentRenterPoints()
{
	if ((getMovie().getPriceCode() == NEW_RELEASE) && getDaysRented() > 1)
		return 2;
      	else
		return 1;

}

double Rental::getCharge()
{
	double result = 0;
	switch (getMovie().getPriceCode()) 
	{
          	case REGULAR:
		{
              		result += 2;
              		if (getDaysRented() > 2)
                  		result += (getDaysRented() - 2) * 1.5;
              		break;
		}
          	case NEW_RELEASE:
		{
              		result += getDaysRented() * 3;
              		break;
		}
          	case CHILDRENS:
		{
              		result += 1.5;
              		if (getDaysRented() > 3)
                  		result += (getDaysRented() - 3) * 1.5;
              		break;
		}
      	}
      	return result;
}

Movie Rental::getMovie()
{
	return _movie;
}

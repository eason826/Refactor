#include "Movie.h"

Movie::Movie()
{

}

Movie::Movie(string title,PriceCode_T priceCode)
{
	_title = title;
	_priceCode = priceCode;
}

PriceCode_T Movie::getPriceCode()
{
	return _priceCode;
}

int Movie::getFrequentRenterPoints(int daysRented)
{
	if ((getPriceCode() == NEW_RELEASE) && daysRented > 1)
		return 2;
      	else
		return 1;

}

double Movie::getCharge(int daysRented)
{
	double result = 0;
	switch (getPriceCode()) 
	{
          	case REGULAR:
		{
              		result += 2;
              		if (daysRented > 2)
                  		result += (daysRented - 2) * 1.5;
              		break;
		}
          	case NEW_RELEASE:
		{
              		result += daysRented * 3;
              		break;
		}
          	case CHILDRENS:
		{
              		result += 1.5;
              		if (daysRented > 3)
                  		result += (daysRented - 3) * 1.5;
              		break;
		}
      	}
      	return result;
}

string Movie::getTitle()
{
	return _title;
}

void Movie::setPriceCode(PriceCode_T arg)
{
	_priceCode = arg;
}

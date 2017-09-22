#include "Movie.h"

Movie::Movie()
{

}

Movie::Movie(string title,PriceCode_T priceCode)
{
	_title = title;
	setPriceCode(priceCode);
}

PriceCode_T Movie::getPriceCode()
{
	return _price->getPriceCode();
}

int Movie::getFrequentRenterPoints(int daysRented)
{
	return _price->getFrequentRenterPoints(daysRented);
}

double Movie::getCharge(int daysRented)
{
      	return _price->getCharge(daysRented);
}

string Movie::getTitle()
{
	return _title;
}

void Movie::setPriceCode(PriceCode_T arg)
{
	switch (arg) 
	{
       		case REGULAR:
		{
          		_price = new RegularPrice();
          		break;
		}
          	case CHILDRENS:
		{
          		_price = new ChildrensPrice();
          		break;
		}
          	case NEW_RELEASE:
		{
          		_price = new NewReleasePrice();
          		break;
		}
		default:
		{
			_price = NULL;
			break;
		}
	}
	
}

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

string Movie::getTitle()
{
	return _title;
}

void Movie::setPriceCode(PriceCode_T arg)
{
	_priceCode = arg;
}

#include "Price.h"

PriceCode_T ChildrensPrice::getPriceCode()
{
	return CHILDRENS;
}

double ChildrensPrice::getCharge(int daysRented)
{
	double result = 1.5;
        if (daysRented > 3)
             result += (daysRented - 3) * 1.5;
        return result;
}

int ChildrensPrice::getFrequentRenterPoints(int daysRented)
{
	return 1;
}

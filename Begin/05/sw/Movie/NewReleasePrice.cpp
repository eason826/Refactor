#include "Price.h"

PriceCode_T NewReleasePrice::getPriceCode()
{
	return NEW_RELEASE;
}

double NewReleasePrice::getCharge(int daysRented)
{
	return daysRented * 3;
}

int NewReleasePrice::getFrequentRenterPoints(int daysRented)
{
	return (daysRented > 1) ? 2: 1;
}

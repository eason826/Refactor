#ifndef MOVIE_H_H
#define MOVIE_H_H
#include "Price.h"

class Price;
class Movie
{
public:
	Movie(string title,PriceCode_T priceCode);
	Movie();
	PriceCode_T getPriceCode();
	double getCharge(int daysRented);
	int getFrequentRenterPoints(int daysRented);
	string getTitle();
	void setPriceCode(PriceCode_T arg);
private:
	string _title;
	Price *_price;
};
#endif

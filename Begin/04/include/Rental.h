#ifndef RENTAL_H_H
#define RENTAL_H_H

#include "Movie.h"

class Rental 
{
public:
	Rental(Movie movie,int daysRented);
	int getDaysRented();
	int getFrequentRenterPoints();
	double getCharge();
	Movie getMovie();
private:
	Movie _movie;
	int _daysRented;
};

#endif

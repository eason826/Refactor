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
	return _movie.getFrequentRenterPoints(_daysRented);
}

double Rental::getCharge()
{
	return _movie.getCharge(_daysRented);
}

Movie Rental::getMovie()
{
	return _movie;
}

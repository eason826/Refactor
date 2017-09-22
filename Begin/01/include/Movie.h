#ifndef MOVIE_H_H
#define MOVIE_H_H
#include <iostream>
#include <string>
using namespace std;

typedef enum
{
	REGULAR,
	NEW_RELEASE,
	CHILDRENS
}PriceCode_T;

class Movie
{
public:
	Movie(string title,PriceCode_T priceCode);
	Movie();
	PriceCode_T getPriceCode();
	string getTitle();
	void setPriceCode(PriceCode_T arg);
private:
	string _title;
	PriceCode_T _priceCode; 
};
#endif

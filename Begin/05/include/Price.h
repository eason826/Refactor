#ifndef PRICE_H_H
#define PRICE_H_H
#include <iostream>
#include <string>
using namespace std;

typedef enum
{
	REGULAR,
	NEW_RELEASE,
	CHILDRENS
}PriceCode_T;

class Price
{
public:
	virtual PriceCode_T getPriceCode()=0;
	virtual double getCharge(int)=0;
	virtual int getFrequentRenterPoints(int)=0;
};

class ChildrensPrice:public Price
{
public:
	PriceCode_T getPriceCode();
	double getCharge(int);
	int getFrequentRenterPoints(int);
};

class NewReleasePrice:public Price
{
public:
	PriceCode_T getPriceCode();
	double getCharge(int);
	int getFrequentRenterPoints(int);
};

class RegularPrice:public Price
{
public:
	PriceCode_T getPriceCode();
	double getCharge(int);
	int getFrequentRenterPoints(int);
};

#endif

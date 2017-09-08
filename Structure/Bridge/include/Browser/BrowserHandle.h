#ifndef BROWSERHANDLE_H_H
#define BROWSERHANDLE_H_H
#include <iostream>
using namespace std;

class BrowserHandle
{
public:
	virtual ~BrowserHandle();
	virtual void GetItem() = 0;
protected:
	BrowserHandle();
};

#endif

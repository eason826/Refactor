#ifndef IAP1BROWSERHANDLE_H_H
#define IAP1BROWSERHANDLE_H_H
#include "BrowserHandle.h"

class iAP1BrowserHandle:public BrowserHandle
{
public:
	iAP1BrowserHandle();
	~iAP1BrowserHandle();
	virtual void GetItem();
};

#endif

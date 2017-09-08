#ifndef IAP2BROWSERHANDLE_H_H
#define IAP2BROWSERHANDLE_H_H
#include "BrowserHandle.h"

class iAP2BrowserHandle:public BrowserHandle
{
public:
	iAP2BrowserHandle();
	~iAP2BrowserHandle();
	virtual void GetItem();
};

#endif

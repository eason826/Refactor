#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include "Blog.h"
#include <string>
#include <iostream>
#include <list>

using namespace std;
typedef string State;

class Observer
{
public:
	virtual ~Observer(){}
	virtual void Update(Blog* sub) = 0;
	virtual void PrintInfo() = 0;
protected:
	Observer(){_st = '\0';}
	string _name;
	State _st;
private:
};

#define REGISTER(classname)\
class classname:public Observer \
{\
public:\
	virtual Blog* GetBlog(){return _sub;}\
	classname(string name,Blog* sub){_sub = sub;_name = name;_sub->Attach(this);}\
	virtual ~classname(){_sub->Detach(this);if(_sub)delete _sub;}\
	void PrintInfo(){cout<<"["<<#classname<<"]"<<_name<<" get Msg:"<<_sub->GetState()<<endl;}\
	void Update(Blog* sub){_st = sub->GetState();PrintInfo();}\
private:\
	Blog* _sub;\
};

REGISTER(NBAObserver);
REGISTER(StockObserver);

#endif //~_OBSERVER_H_

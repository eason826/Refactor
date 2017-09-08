#include "Observer.h"
#include "Blog.h"
#include <iostream>
#include <string>

using namespace std;

Observer::Observer()
{
	_st = '\0';
}
Observer::~Observer()
{
}

ObserverA::ObserverA(Blog* sub)
{
	_sub = sub;
	_sub->Attach(this);
}
ObserverA::~ObserverA()
{
	_sub->Detach(this);
	if (_sub != 0)
		delete _sub;
}
Blog* ObserverA::GetBlog()
{
	return _sub;
}
void ObserverA::PrintInfo()
{
	cout<<"ObserverA Get Notify Message:"<<_sub->GetState()<<endl;
}
void ObserverA::Update(Blog* sub)
{
	_st = sub->GetState();
	PrintInfo();
}

ObserverB::ObserverB(Blog* sub)
{
	_sub = sub;
	_sub->Attach(this);
}
ObserverB::~ObserverB()
{
	_sub->Detach(this);
	if (_sub != 0)
	{
		delete _sub;
	}
}
Blog* ObserverB::GetBlog()
{
	return _sub;
}
void ObserverB::PrintInfo()
{
	cout<<"ObserverB Get Notify Message:"<<_sub->GetState()<<endl;
}
void ObserverB::Update(Blog* sub)
{
	_st = sub->GetState();
	PrintInfo();
}

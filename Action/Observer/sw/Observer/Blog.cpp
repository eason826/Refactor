#include "Blog.h"
#include "Observer.h"
#include <iostream>
#include <list>

using namespace std;
typedef string state;

Blog::Blog()
{ 
	//��ģ���ʹ��֮ǰһ��Ҫnew������
	_obvs = new list<Observer*>;
}
Blog::~Blog()
{}
void Blog::Attach(Observer* obv)
{
	_obvs->push_front(obv);
}
void Blog::Detach(Observer* obv)
{
	if (obv != NULL)
		_obvs->remove(obv);
}
void Blog::Notify()
{
	list<Observer*>::iterator it;
	it = _obvs->begin();
	for (;it != _obvs->end();it++)
	{ //����ģ���iterator���÷�
		(*it)->Update(this);
	}
}

BlogCSDN::BlogCSDN()
{
	_st = '\0';
}
BlogCSDN::~BlogCSDN()
{ }
State BlogCSDN::GetState()
{
	return _st;
}
void BlogCSDN::SetState(const State& st)
{ _st = st;
}

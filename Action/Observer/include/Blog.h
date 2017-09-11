#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <list>
#include <string>
#include <iostream>
using namespace std;

typedef string State;

class Observer;
class Blog
{
public:
	virtual ~Blog();
	virtual void Attach(Observer* obv);
	virtual void Detach(Observer* obv);
	virtual void Notify();
	virtual void SetState(const State& st) = 0;
	virtual State GetState() = 0;
protected:
	Blog();
private:
	list<Observer* >* _obvs;
};

class BlogCSDN:public Blog
{
public:
	BlogCSDN(State st);
	~BlogCSDN();
	State GetState();
	void SetState(const State& st);
protected:
private:
	State _st;
};

#endif //~_SUBJECT_H_

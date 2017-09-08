#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include "Blog.h"
#include <string>

using namespace std;
typedef string State;

class Observer
{
public:
	virtual ~Observer();
	virtual void Update(Blog* sub) = 0;
	virtual void PrintInfo() = 0;
protected:
	Observer();
	State _st;
private:
};

class ObserverA:public Observer
{
public:
	virtual Blog* GetBlog();
	ObserverA(Blog* sub);
	virtual ~ObserverA();
	void Update(Blog* sub);
	void PrintInfo();
protected:
private:
	Blog* _sub;
};

class ObserverB:public Observer
{
public:
	virtual Blog* GetBlog();
	ObserverB(Blog* sub);
	virtual ~ObserverB();
	void Update(Blog* sub);
	void PrintInfo();
protected:
private:
	Blog* _sub;
};

#endif //~_OBSERVER_H_

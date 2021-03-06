#ifndef MEDIATOR_H_H
#define MEDIATOR_H_H
#include <string>
#include <iostream>
#include <list>
using namespace std;

class Mediator;
class Person
{
protected:
	Mediator *m_mediator;
public:
	virtual void SendMsg(string message) {}
	virtual void GetMsg(string message) {}
};
class Mediator
{
public:
	virtual void Send(string message, Person *person) {}
	virtual void Add(Person *p){}
};
class HouseMediator : public Mediator
{
private:
	list<Person*>m_list;
public:
	HouseMediator(){}
	void Add(Person *p){m_list.push_back(p);}
	void Send(string message, Person *person) 
	{
		list<Person *>::iterator iter=m_list.begin();
        	for(; iter != m_list.end(); iter++)
		{
			if(*iter != person)
			(*iter)->GetMsg(message);
		}
	}
};
#define DECLARE(classname)\
class classname: public Person\
{\
public:\
	classname(Mediator *mediator){ m_mediator = mediator; }\
	void SendMsg(string message) { m_mediator->Send(message, this); }\
	void GetMsg(string message) { cout<<#classname<<" getMessage:"<<message; }\
};\

DECLARE(Renter)
DECLARE(Landlord)

#endif

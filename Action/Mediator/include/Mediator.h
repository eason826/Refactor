#ifndef MEDIATOR_H_H
#define MEDIATOR_H_H
#include <string>
#include <iostream>
using namespace std;

class Mediator;
class Person
{
protected:
	Mediator *m_mediator;
public:
	virtual void SetMediator(Mediator *mediator){}
	virtual void SendMessage(string message) {}
	virtual void GetMessage(string message) {}
};
class Mediator
{
public:
	virtual void Send(string message, Person *person) {}
	virtual void SetA(Person *A) {}
	virtual void SetB(Person *B) {}
};
class HouseMediator : public Mediator
{
private:
	Person *m_A;
	Person *m_B;
public:
	HouseMediator(): m_A(0), m_B(0) {}
	void SetA(Person *A) { m_A = A; }
	void SetB(Person *B) { m_B = B; }
	void Send(string message, Person *person) 
	{
		if(person == m_A)
			m_B->GetMessage(message);
		else
			m_A->GetMessage(message);
	}
};
#define DECLARE(classname)\
class classname: public Person\
{\
public:\
	void SetMediator(Mediator *mediator) { m_mediator = mediator; }\
	void SendMessage(string message) { m_mediator->Send(message, this); }\
	void GetMessage(string message) { cout<<#classname<<" getMessage:"<<message; }\
};\

DECLARE(Renter)
DECLARE(Landlord)

#endif

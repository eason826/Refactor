#ifndef _HANDLE_H_
#define _HANDLE_H_
#include <iostream>
#include <string>
using namespace std;

class ProcMan
{
public:
	virtual ~ProcMan(){delete _succ;_succ = NULL;}
	virtual void Process() = 0;
	void SetSuccessor(ProcMan* succ){_succ = succ;}
	ProcMan* GetSuccessor(){return _succ;}
	string GetSuccessorName(){return _name;}
protected:
	ProcMan(string name){_name = name;_succ = NULL;}
	ProcMan(ProcMan* succ){_succ = succ;}
private:
	ProcMan* _succ;
	string _name;
};

#define HANDLER(classname)\
class classname:public ProcMan\
{\
public:\
	classname(string name):ProcMan(name){}\
	classname(ProcMan* succ):ProcMan(succ){}\
	void Process()\
	{\
		ProcMan *p = this->GetSuccessor();\
		if (p != NULL)\
		{\
			cout<<#classname<<"--will be handled by:"<<p->GetSuccessorName()<<endl;\
			p->Process();\
		}\
		else\
		{\
			cout<<#classname<<":must handle by itself"<<endl;\
		}\
	}\
};\

HANDLER(Manager)
HANDLER(Chief)
HANDLER(Director)

#endif

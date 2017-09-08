#ifndef COMPONENT_H_H
#define COMPONENT_H_H
#include <list>
#include <iostream>
using namespace std;

class Company    
{  
public:  
    Company(string name) { m_name = name; }  
    virtual ~Company(){}  
    virtual void Add(Company *pCom){}  
    virtual void Show(int depth) {}  
protected:  
    string m_name;  
};  

#endif  

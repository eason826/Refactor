#ifndef CARCOMPONENT_H_H
#define CARCOMPONENT_H_H
#include "Company.h"

class CarCompany : public Company    
{  
public:  
    CarCompany(string name): Company(name) {}  
    virtual ~CarCompany() {}  
    void Add(Company *pCom);
    void Show(int depth);
private:  
    list<Company *> m_listCompany;  
};  

#endif  

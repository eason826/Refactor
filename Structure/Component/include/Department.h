#ifndef DEPARTMENT_H_H
#define DEPARTMENT_H_H
#include "Company.h"

#define DECLARE(classname)					\
class classname : public Company   				\
{  								\
public:  							\
    classname(string name):Company(name){}  			\
    virtual ~classname() {}  					\
    virtual void Show(int depth)				\
    {  								\
        for(int i = 0; i < depth; i++)  			\
            cout<<"-";  					\
        cout<<m_name<<endl;  					\
    }  								\
};  

DECLARE(FinanceDepartment)
DECLARE(HRDepartment)

#endif  

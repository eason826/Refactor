#include "CarCompany.h"

void CarCompany::Add(Company *pCom) 
{ 
	m_listCompany.push_back(pCom); 
}

void CarCompany::Show(int depth)
{
        for(int i = 0;i < depth; i++)  
            cout<<"-";  
        cout<<m_name<<endl;  
        list<Company *>::iterator iter=m_listCompany.begin();  
        for(; iter != m_listCompany.end(); iter++)
            (*iter)->Show(depth + 2);  
}

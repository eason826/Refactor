#include "CarCompany.h"
#include "Department.h"

int main(int argc,char* argv[])
{
    Company *root = new CarCompany("General");  
    Company *leaf1=new FinanceDepartment("Financial");  
    Company *leaf2=new HRDepartment("HR");  
    root->Add(leaf1);  
    root->Add(leaf2);  
  
    Company *mid1 = new CarCompany("SubA");  
    Company *leaf3=new FinanceDepartment("Financial");  
    Company *leaf4=new HRDepartment("HR");  
    mid1->Add(leaf3);  
    mid1->Add(leaf4);  
    root->Add(mid1);  

    Company *mid2=new CarCompany("SubB");  
    FinanceDepartment *leaf5=new FinanceDepartment("Financial");  
    HRDepartment *leaf6=new HRDepartment("HR");  
    mid2->Add(leaf5);  
    mid2->Add(leaf6);  
    root->Add(mid2);  
    root->Show(0);  
  
    delete leaf1; delete leaf2;  
    delete leaf3; delete leaf4;  
    delete leaf5; delete leaf6;   
    delete mid1; delete mid2;  
    delete root;  
    return 0;  
}

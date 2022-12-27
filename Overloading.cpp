#include<bits/stdc++.h>
using namespace std;

class Employee
{
    private:
    
    string employee_name;
    int employee_id;
    string employee_addr;
    
    public:
    
     Employee()
     {
         //Zero parameterized constructor
     }
    
    //constructor overloading.
     Employee(string employee_name,int employee_id)
     {
        this->employee_name=employee_name;
        this->employee_id=employee_id;
        this->employee_addr="";
     }
     
     
     void employee_details()
     {
         cout<<"Initial Employee Details:\n"<<endl;
         cout<<"Employee ID: "<<this->employee_id<<" "<<"Employee Name: "<<this->employee_name<<endl;
     }
     
     void employee_details(string address)
     {
         this->employee_addr=address;
         cout<<"\nUpdated Employee Details:\n"<<endl;
         cout<<"\nEmployee ID: "<<this->employee_id
         <<" "<<"Employee Name: "<<this->employee_name<<" Employee Address: "<<this->employee_addr<<" "<<endl;
    
     }
};

int main()
{
    string ename;
    int eid;
    cout<<"Enter Employee Name and Employee ID:\n"<<endl;
    cin>>ename>>eid;
    Employee e(ename,eid);
    e.employee_details();
    string addr;
    cout<<"Enter the address:\n";
    cin>>addr;
    e.employee_details(addr);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Base_class
{
    public:
     Base_class()
     {
        //zero parameterized constructor.

     }
     void details()
     {
         cout<<"details function implemented in Base class"<<endl;
          cout<<"Generalization Concept"<<endl;
     }
};

//Derived Class (Specialized Class) which is derived from Base class(Super class)
class Derived_class:public Base_class
{
    public:
    Derived_class()
    {
     //zero parameterized constructor.
    }
    //Overidding Concept.
    //Here we have overloaded the details function which is derived from the Base class
     void details()
     {
         cout<<"details function implemented in Deried class"<<endl;
         cout<<"Specialization Concept"<<endl;
     }
    
};


int main()
{
    //Base class reference
    Base_class bobj;
    //Derived_class reference
    Derived_class dobj;
    cout<<"********************Overidding Concept in cpp*****************"<<endl;
    cout<<"Details function of base class:\n"<<endl;
    bobj.details();
    
    cout<<endl;
      cout<<"Details function of Derived class:\n"<<endl;
    dobj.details();
    return 0;
}

#include <iostream>
using namespace std;
// Base  class
class employee
{
    float salary; // private items can never be inherited

public:
    employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    int id;
    employee() {id = 100;} // default constructor
};

// Derived Class Syntax
//  class {{derivedclass-name}} : {{visibility-mode}} base-class-name{
//      //class members/methods/etc...
//  };

// 1.Default visibility mode is private
// 2.private visibility mode: public members of the base class become private members of the derived class
// 3.public visibility mode: public members of the base class become public members of the derived class
// 4.**************private members are never inherited*********************

// visiblity mode is public or private aap apni base class ko kis tarah inherit karna chahte ho ye depend karta hai ki aapko base class ke members derived class me kaise dikhne chahiye. By default, it is private.

class programmer : private employee
{ // default visibility is pvt...
public:
    int languageCode = 9;
    programmer(int inpId)
    {
        id = inpId; // This would be error if id was private in employee class, but since it's public, we can access it here.
    }
    programmer(){}
    void getData()
    {
        cout << id << endl<<languageCode;
    }
};
int main()
{
    employee harry(1), Adi(2);
    // cout<<harry.salary<<endl<<Adi.salary;
    programmer skillF;
    skillF.getData();
    //skillF.id = 10; //this would be error if visibility mode is private, because id is inherited as private in programmer class....
    return 0;
}

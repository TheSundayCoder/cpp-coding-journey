
#include <iostream>
using namespace std;
class base
{
    protected: //private rhe but inheritable   
    int a;
    private: //cant be inherited
    int b;
};
/*
for a member :
                       public derivation   private derivation   protected derivation


1.private member          not inherited      not inherited       not inherited
2.protected member        protected           private              protected
3.public member            public             private              protected 

*/
class derived : protected base 
{
};

int main()
{
 base b;
 derived d;
//cout<<b.a; //error because a is protected and not accessible outside the class
//cout<<d.a; //error because a is protected and not accessible outside the class
//since a is protected in base class as well as in derived class....
    return 0;
}
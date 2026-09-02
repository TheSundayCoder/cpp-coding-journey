
#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base constructor called" << endl;
    }
  virtual  ~Base()
    {
        cout << "Base Destructor called" << endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived constructor called" << endl;
    }
    ~Derived()
    {
        cout << "Derived Destructor called" << endl;
    }
};
void fun(){
    // Derived d;
    Base *p = new Derived;
    delete p;
}
int main()
{
fun();
cout<<endl<<endl<<endl<<endl;

    return 0;
}
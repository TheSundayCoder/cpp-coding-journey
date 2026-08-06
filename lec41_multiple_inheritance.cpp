//(A,B,C,D,....)---->Derived class
#include <iostream>
using namespace std;

// syntax*************in multiple inheritance(more than one base class)***************
//  class Derived: visibility_mode Base1, visibility_mode Base2, visibility_mode Base3
//  {
//        class body
//  };

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class derived : public Base1, public Base2 //multiple inheritance
{
 public:
    void show()
    {
        cout << "The value of base1int is: " << base1int << endl;
        cout << "The value of base2int is: " << base2int << endl;
        cout << "The sum of base1int and base2int is: " << base1int + base2int << endl;
    }
};
/*
the inherited derived class will look something like this:
base1int->protected
base2int->protected
set_base1int()->public
set_base2int()->public
show()->public
*/
int main()
{
  derived d;
  d.set_base1int(10);
  d.set_base2int(20);
  d.show();
    return 0;
}
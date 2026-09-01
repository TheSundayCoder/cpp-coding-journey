
#include <iostream>
using namespace std;
class Base{
    public:
    
   virtual void display(){
        cout<<"Base class display function"<<endl;
    }
};
class Derived:public Base{
    public:
    void display(){
        cout<<"Derived class display function"<<endl;
    }
};
int main() {
    Derived d;
    d.display(); // Calls the display function of Derived class
    Base *p = &d;
  //  p->display(); // Calls the display function of Base class
    //making virtual display of base class
    p->display(); // Calls the display function of Derived class due to virtual function
    return 0;
}

#include <iostream>
using namespace std;
class Base{
    public:
    void display(){
        cout<<"Base class display function"<<endl;
    }
    
};
class Derived:public Base{
    public:
    void display(int a){
        cout<<"Derived class display function"<<endl;
    }
    // void display(){
    //     cout<<"Derived class display function"<<endl;
    // }
};
int main() {
    Derived d;  
     d.Base::display(); // Calls the display function of Base class
    // d.display(); // Calls the display function of Derived class
    d.display(5); // Calls the display function of Derived class with an integer argument
    return 0;
}

#include <iostream>
using namespace std;

class Base{
public:
Base(){
    cout<<"default of base "<<endl;
}
Base(int x){cout<<"param.. of base "<<x<<endl;}
};
class Derived:public Base{
    public:
    Derived(){cout<<"default of derived"<<endl;}
    Derived(int x){cout<<"param.. of derived "<<x<<endl;}
    Derived(int a , int b):Base(a){
      cout<<"param of derived class " <<a<<endl;
    }
};

int main() {
    Derived d;
    cout<<"***************"<<endl;
    Derived e(5);
    cout<<"***************"<<endl;
    Derived f(6,7);
    cout<<"***************"<<endl;
    return 0;
}
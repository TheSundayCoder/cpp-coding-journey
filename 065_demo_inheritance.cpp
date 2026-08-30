
#include <iostream>
using namespace std;
class Base{
    public:
    int a;
    void display(){
        cout<<"hello world,Base "<<a<<endl;
    }
};
class derived : public Base{};
int main() {
    derived d;
    d.a = 100;
    d.display();
    return 0;
}
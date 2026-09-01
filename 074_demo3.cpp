
#include <iostream>
using namespace std;
class BasicCar{
    public:
    void start(){
        cout<<"Basic car started"<<endl;
    }
};
class AdvanceCar:public BasicCar{
    public:
    void start(){
        cout<<"Advance car started"<<endl;
    }
    void music(){
        cout<<"Music started"<<endl;
    }
};
int main() {
    AdvanceCar a;
    a.start();
    a.music();
    BasicCar *b;
    b = &a;
    b ->start();
    //b ->music(); // This line will cause a compilation error because music() is not a member of BasicCar class.
    return 0;
}
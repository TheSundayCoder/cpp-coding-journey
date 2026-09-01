
#include <iostream>
using namespace std;
class BasicCar{
    public:
   virtual void start(){
        cout<<"Basic car started"<<endl;
    }
};  
class AdvancedCar: public BasicCar{
    public:
    void start(){
        cout<<"Advanced car started"<<endl;
    }
};
int main() {
    BasicCar *b = new AdvancedCar();
    b->start(); // Calls the start function of BasicCar class, not AdvancedCar class
 //making virtual start of BasicCar class
    return 0;
}
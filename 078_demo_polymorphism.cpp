
#include <iostream>
using namespace std;
class car{
    public:
    virtual void start()=0;
    virtual void stop()=0;
};
class Innova: public car{
    public:
    void start(){
        cout<<"Innova started"<<endl;
    }
    void stop(){
        cout<<"Innova stopped"<<endl;
    }

};
class swift: public car{
    public:
    void start(){
        cout<<"swift started"<<endl;
    }
   

};
int main() {
// swift s;
// s.start(); weeoe as swift didnt override all the pure virtual functions of car class, so we cannot create object of swift class
car *p;
p = new Innova();
p->start();
p->stop();
    return 0;
}
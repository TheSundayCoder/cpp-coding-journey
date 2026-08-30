
#include <iostream>
using namespace std;
class Parent{
    private : int a;
    protected : int b;
    public : int c;
    void funParent(){
        a = 10 ;
        b = 5 ; 
        c = 15;
    }
    void seta(int b){
        a = b;
    }
    void show(){
        cout<<a<<' '<<b<<" "<<c;
    }
};
class Child : public Parent{
    public:
    void funChild(){
        seta(10) ; //a = 10 will be error due to inaccessability
        b = 5 ; c = 15;
    }
};
class GrandChild: public Child{
    public:
    void funGrandChild(){
    seta(90); // a = 90 error due to inaccessibility;
    b = 5;
    c = 20;}
};
int main() {
    GrandChild g;
    g.funGrandChild();
 g.show();
    return 0;
}
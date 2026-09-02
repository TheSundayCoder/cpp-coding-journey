
#include <iostream>
using namespace std;
//lec 214


class yourTest; //forward declaration of class yourTest
class Test{
    private:
    int a;
    protected:
    int b;
    friend void fun(); //friend function can access private and protected members of the class .....
    //friend functions can be declared in any access specifier section of the class but they are always public in nature.
    public:
    int c;
    friend yourTest; //friend class can access private and protected members of the class .....

};
void fun(){
Test t;
t.a = 10;
t.b = 20;
t.c = 30; //accessible without friend ...as it is a public member;
cout<<t.a;
}

class yourTest{
public:
Test t;
void fun(){
    t.a = 10; //error as a is private member of class Test
    t.b = 20; //error as b is protected member of class Test
    t.c = 30; //accessible without friend ...as it is a public member;
}
};


int main() {
    fun();
    // cout<<t.a;
    return 0;
}

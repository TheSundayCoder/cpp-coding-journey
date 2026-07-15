
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
class num{
   
    public: 
     int a;
    num(){ //default constructor
        a = 0;
    }
    num(int num){
        a=num;
    }
    num(num &obj){
        a = obj.a;
        obj.a = 10001;
        cout<<"Copy constructor called"<<endl;
    }
    void display(){
        cout<<"The number is: "<<a<<endl;
    }
};
int main() {
    num a(9),b(3);
    num c(a); //copy constructor called
 c.display();
c.a = 100; //c ka value change hoga but a ka value change nhi hoga
c.display();
a.display();
    return 0;
}
//Default argument contructors
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
  class simple{
    int data1,data2,data3;
    public:
    simple(int a, int b =9 , int c =8){ //default argument constructor
        data1=a;
        data2=b;
        data3=c;
    }
    void display(){
        cout<<"THE DATA IS "<<data1<<" & "<<data2<<" & "<<data3<<endl;
    }
  };
int main() {
    simple s1(4,5,6); //parameterized constructor
    simple s2(4,5); //default argument constructor
    simple s3(4); //default argument constructor
    s1.display();
    s2.display();
    s3.display();
    simple s4(1,2,3); //parameterized constructor
    s4.display();
    return 0;
}
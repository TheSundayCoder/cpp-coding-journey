
#include <iostream>
using namespace std;
class complex{
    public:
    int real , img;
 friend complex operator+(complex,complex);
  complex(int x = 0, int y = 0){
    real = x;
    img = y;
  }
  void display(){
     cout<<"real = "<<real<<" imaginary = "<<img<<endl;
  }
};
 complex  operator+(complex c,complex d){
    complex temp;
    temp.real = d.real + c.real;
    temp.img = d.img + c.img;
    return temp;
  }

int main() {
    complex c1(2,3),c2(4,5),c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}
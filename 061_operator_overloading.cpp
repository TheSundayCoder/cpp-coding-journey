
#include <iostream>
using namespace std;
//lec 179
class complex{
    public:
    int real , img;
  complex  operator+(complex c){
    complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
  }
  complex(int x = 0, int y = 0){
    real = x;
    img = y;
  }
  void display(){
     cout<<"real = "<<real<<" imaginary = "<<img<<endl;
  }
};


int main() {
    complex c1(3,5),c2(5,6);
    complex c3 = c1 + c2;  //or c1.operator+(c2) or c2.operator+(c1);
    c3.display();
    return 0;
}

#include <iostream>
using namespace std;
class Rectangle{
    public:
    void area(){
        cout<<"Area of rectangle "<<endl;
    }
};
class Cuboid:public Rectangle{
    public:
    void volume(){
        cout<<"Volume of cuboid "<<endl;
    }
};
int main() {
    Cuboid c;
    // c.area();
    // c.volume();
    Rectangle *r;
    r = &c;
    r ->area();
    // r ->volume(); // This line will cause a compilation error because volume() is not a member of Rectangle class.

    return 0;}
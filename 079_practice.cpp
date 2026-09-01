
#include <iostream>
using namespace std;
//212
class shape{
    public:
    virtual int area()=0;
    virtual int perimeter()=0;
};
class rectangle: public shape{
    int length;
    int breadth;
    public:
    rectangle(int l=1, int b=1){
        length = l;
        breadth = b;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
class square: public shape{
    int side;
    public:
    square(int s=1){
        side = s;
    }
    int area(){
        return side*side;
    }
    int perimeter(){
        return 4*side;
    }
};
int main() {
    shape *p;
    p = new rectangle(5, 3);
    cout<<"Rectangle - Area: "<<p->area()<<" Perimeter: "<<p->perimeter()<<endl;
    p = new square(4);
    cout<<"Square - Area: "<<p->area()<<" Perimeter: "<<p->perimeter()<<endl;
    return 0;
}

#include <iostream>
using namespace std;
class Rectangle{ //188
        int length , breadth;
    public:
    Rectangle(int l =1, int b = 1){
        length = l;
        breadth = b;
    }
    int getLength(){return length;}
    int getbreadth(){return breadth;}
    void setlength(int l){length =l;}
    void setbreadth(int b){breadth = b;}
    int area(){return length * breadth;}
    int perimeter(){return 2*(length + breadth);}
    bool isSquare(){
        if(length==breadth){
            return true;
        }
        return false;
    }
    ~Rectangle(){}
};
class Cuboid:public Rectangle{
    int height;
    public:
    Cuboid( int h =0){
      
        height = h;
    }
    int getheight(){return height;}
    void setheight(int h){height =h;}
    int volume(){
        return height*getLength()*getbreadth();
    }
};
int main() {
    Cuboid c(5);
    
    cout<<"l = "<<c.getLength();
    cout<<endl<<"b = " <<c.getbreadth();
    cout<<endl<<c.getheight();
    cout<<endl<<"volume = "<<c.volume();
    c.setlength(10);
    c.setbreadth(7);
    cout<<endl<<"new volume  = "<<c.volume();
    return 0;
}
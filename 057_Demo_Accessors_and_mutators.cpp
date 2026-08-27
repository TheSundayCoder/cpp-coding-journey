
#include <iostream>
using namespace std;
class Rectangle{
  
    int length; //by default private....
    int breadth;
      public:
      void setlength(int n){
        if(n>=0){  length = n;}
        else {cout<<"length cant be negative..by default set to zero.."<<endl;
        length = 0;}
      }
       void setbreadth(int n){
        if(n>=0){        breadth = n;}
        else {cout<<"breadth cant be negative..by default set to zero.."<<endl;
        breadth = 0;}
      }
      void getdata(){
        cout<<"length = "<<length<<" breadth = "<<breadth<<endl;
      }


    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main() {
    Rectangle r;
    r.setlength(-10); //accessor
    r.setbreadth(5); //mutator
    r.getdata();
    cout<<r.area();
    return 0;
}
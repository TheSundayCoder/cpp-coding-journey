
#include <iostream>
using namespace std;
class complex{
    private:
    int real,img;
    public:
    complex(int x = 0, int y = 0){
        real = x;
        img = y;
    }
    void display(){
        cout<<real<<" + i"<<img<<endl;
    }
     friend ostream& operator<<(ostream &o, complex &x);
};
ostream & operator<<(ostream &o, complex &x){  //this is syntax
   o<<x.real<<" + i"<<x.img;
   return o; // returns cout type
}
int main(){
    complex x(10,5);
    // //cout<<x is error
    // x.display();
    cout<<x;//both cout and x are passed to that function
   // operator<<(cout,x); same thing
    return 0;
}
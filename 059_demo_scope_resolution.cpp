
#include <iostream>
using namespace std;
class rec{
    int l , b;
    public:
    rec();
    rec(int c,int d);
    rec(rec & a); //constructors
    int getlength();
    int getbreadth(); //accessors
    void setlength(int c);
    void setbreadth(int d);//mutators
    int area();
    int perimeter();//facilitators
    bool isSquare(); //inspector or  enquiry fn
    ~rec(); //destructor
    
};


int main() {
    rec r1(10,10);
    cout<<r1.area()<<endl;
    if(r1.isSquare()){
        cout<<"r1 is a square"<<endl;
    }
    return 0;
}

rec::rec(){
    l = 1; b = 1;
}
rec::rec(int c , int d){
    l = c;
    b=d;
}
rec::rec(rec & a){
    l = a.l;
    b = a.b;
}
int rec::getlength(){return l;}
int rec::getbreadth(){return b;}
void rec::setlength(int a){
    l = a;
}
void rec::setbreadth(int a){
    b = a;
}
int rec::area(){
    return l*b;
}
int rec::perimeter(){
    return 2*(l+b);
}
bool rec::isSquare(){
    if(l == b){
        return true;
    }
    else return false;
}
rec::~rec(){
    cout<<"rectangle destroyed";
}

#include <iostream>
using namespace std;
//193

class Rec{

int l , b;
    public:
int area(){return l*b;}
int perimeter(){
    return 2*(l+b);
}
void setlb(int l1,int b1){ 
     l = l1;
     b = b1;
}
};
int main() {
    Rec r1;
    // r1.l = 10;
    // r1.b = 5;  cant access
    cout<<r1.area(); //garbage
   r1.setlb(5,6);
    cout<<endl<<r1.area();
    return 0;
}
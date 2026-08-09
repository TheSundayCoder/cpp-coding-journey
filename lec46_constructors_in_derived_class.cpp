
#include <iostream>
using namespace std;
class A{
    float a , b ;
    public: 
    A(float x , float y){
        a = x ; 
        b = y ; 
    }
    void show(){
        cout << "a: " << a << " b: " << b << endl;
    }
};
int main() {
    A obj (3.1 , 4.2);
    obj.show();
    return 0;
}

#include <iostream>
using namespace std;
class Demo{
    int *k;
    public:
    Demo(){
        cout<<"Constructor called"<<endl;
        k = new int[10];
    }
    ~Demo(){
        delete []k;
        cout<<"Destructor of demo"<<endl;
    }
};

void fun(){
    Demo *p = new Demo;
    delete p;
}
int main() {
    fun();
    return 0;
}
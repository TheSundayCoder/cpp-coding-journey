
#include <iostream>
using namespace std;

int main() {
    int a = 10 ;
     int *p  = &a;
     cout<<a<<endl;
     cout<<&a<<endl;
     cout<<p<<endl;
     cout<<*p<<endl; //dereferencing a pointer

    cout<<sizeof(p);
    char c = '2';

    char * q = &c;
    cout<<endl<<sizeof(q);
        return 0;
}
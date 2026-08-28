
#include <iostream>
using namespace std;
class test{
    public:
    int a;
    int *p;
    public:
    test(int x){
        a = x;
        p = new int[a];
        for(int i = 0 ; i < a ; i++){
            p[i] = 5*i;
        }
    }
    test(test &t){
        a = t.a;
        //p = t.p  both pointer would point on same heap array
        p = new int[a];
        for(int i= 0 ; i < a ; i++){
             p[i] = t.p[i];
        }
    }
};
int main() {
    test t(5);
    test t1(5);
    for(int i = 0 ; i < 5; i++){
        cout<<t.p[i]<<"   "<<t1.p[i]<<endl; //  same elements bhi copy krlia humne
    }
    return 0;
}
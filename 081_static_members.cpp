
#include <iostream>
using namespace std;
//lec 216


class test{
    public:
    int a;
    static int count; //=0 is error;
    test(){
        a = 10;
        count ++;
    }
   static int getcount(){
   // a++;
    return count;
   }
    
};
int test::count = 0; //static member variable must be initialized outside the class definition

//count is a global variable accessible only by test class and its objects.

int main() {
    test t1,t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    cout<<test::count<<endl; //static member variable can be accessed by class name also
    t1.count = 21;
    cout<<t2.count<<endl;
    cout<<test::getcount()<<endl;
    cout<<t1.getcount()<<endl;
    return 0;
}
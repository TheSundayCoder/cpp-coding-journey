
#include <iostream>
using namespace std;
//220


class outer{
    public:
  //inner i;
     void  fun(){
        i.display();
     }
    class inner{
        public:
        void display(){
            cout<<"This is inner class"<<endl;
        }
    };
    inner i;
};
int main() {
    outer :: inner i1;  //if inner class is in public section of outer class then we can create object of inner class in main function
    return 0;
}
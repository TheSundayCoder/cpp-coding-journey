
#include <iostream>
using namespace std;

void fun() {
    static int s = 10;
     int a = 10;
    a++;
    s++;
    cout<<s<<" "<<a<<endl;}
int main(){

  fun();
  fun();
  fun();
  fun();


    return 0;
}
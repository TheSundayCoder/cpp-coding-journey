
#include <iostream>
using namespace std;
//lec 62
int main() {
//     int a = 10 , b = 5;
//     if(true){
//         int c = a+b;
//         cout<<c<<endl;
//     } //c destroyed here
//    // cout<<c; error

int a = 10 , b =5;

if(int c = a+b ; c>10){

}

//or
{
  int c = a+b;
   if(c>10){}
}  //c will be destroyed here
// cout<<c; error
    return 0;
}
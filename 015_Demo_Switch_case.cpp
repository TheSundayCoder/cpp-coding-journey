
#include <iostream>
using namespace std;

int main() {
    int x ;
    cin>>x;
    switch (x){
  case 1: cout<<"one";break;
  case 2: cout<<"two";break;
  
case 3:{ cout<<"three";break;}
 case 4: cout<<"four"; break;
    
    default:  //default can be written at first or mid also but it will necessarily require break
    cout<<"invalid number";break;}  
    return 0;
}
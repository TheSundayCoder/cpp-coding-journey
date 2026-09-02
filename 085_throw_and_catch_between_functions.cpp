
#include <iostream>
using namespace std;
int division(int x , int y){
    if(y==0){
        throw 404.12f;
    }
  
    return x/y;
}
int main() {
    // int x;
    // x = 9/0;
    // cout<<x<<endl;   errorrrrr**** div by zero
    int x , y , z;
    cin>>x>>y;
    try{
      z = division(x,y);
        cout<<z<<endl;
    }

    catch(float e){   //catch() is error something must be catched
        cout<<"Division by zero is not possible"<<endl<<"error code "<<e<<endl;
    }
    return 0;
}
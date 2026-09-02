
#include <iostream>
using namespace std;

int main() {
    // int x;
    // x = 9/0;
    // cout<<x<<endl;   errorrrrr**** div by zero
    int x , y , z;
    cin>>x>>y;
    try{
        if(y==0){
            throw 404;
        }
        z = x/y;
        cout<<z<<endl;
    }
    catch(int e){   //catch() is error
        cout<<"Division by zero is not possible"<<endl<<"error code "<<e<<endl;
    }
    return 0;
}
//function overloading --- khudse function choose krega compiler
#include<iostream>
#include<iomanip>
using namespace std;
int add( float a,float b){
    cout<<"using function with 2 arguments"<<endl;
return a+b;
}
int add(int a,int b,int c){
    cout<<"using function with 3 arguments"<<endl;
 return a+b+c;
}
int main(){
    
    // string c ;
    // cin>>c;
    // cout<<c<<endl;
    
    cout<<"addition of 3 and 4 is " <<add(3,4)<<endl;//int to float ho skta h convert
    cout<<"addition of 3 , 7and 4 is " <<add(3,4,7)<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a==c){
            cout<<"a = c  is greater than b";
        }
        else if(a >c ){
            cout<<"a is greater";
        }
        else{
            cout<<"c is greater";
        }
    }
    else{
        if(a==b){
            if(b>c){
                cout<<"a and b are equal and greater than c";
            }
            else if(b<c){
                cout<<"a and b are equal and less than c";

            }
            else{
                cout<<"a ,b , c are equal";
            }
        }
        else{
        if(b>c){
            cout<<"b is greater";
        }
        else{
            if(b==c){
                cout<<"b and c are equal and greater than a";
            }
            else{
            cout<<"c is greater";}
        }}
    }
    return 0;
}
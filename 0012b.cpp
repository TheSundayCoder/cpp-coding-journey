
#include <iostream>
using namespace std;

int main() {
    int a ,b,c;
    cin>>a>>b>>c;
    if(a==b&&a==c){
        cout<<"all equal";
    }
    else if(a==b&&a>c){
        cout<<"a = b >c";
    }
    else if(a==b && c >b){
        cout<<"a=b<c";
    }
    else if (b==c &&b >a){
        cout<<"b=c>a";
    }
    else if (b==c &&b <a){
        cout<<"b=c<a";
    }
    else if(a==c &&a > b){
        cout<<"a=c>b";
    }
    else if(a==c &&a<b){
        cout<<"a=c<b";
    }
    else if(a>b && a>c){
        if(b>c){
            cout<<"a>b>c";
        }
        else{
            cout<<"a>c>b";
        }
    }
    else if (b>a && b >c){
        if(a>c){
            cout<<"b>A>C";
        }
        else
        cout<<"b>c>a";
    }
    else if(c>b && c > a){
        if (a>b){
            cout<<"c>a>b";
        }
        else cout<<"c>b>a";
    }

    return 0;
}
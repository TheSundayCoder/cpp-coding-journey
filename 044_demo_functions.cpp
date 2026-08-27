
#include <iostream>
using namespace std;
// void display(){
//     cout<<"hello";
// }

// float add(float x , float y){
//     float z;
//     z = x+y;
//     return z;
//}


void maxof3(int x , int y , int z){
    if(x>y){
        if(x<z){
            cout<<z<< " is greatest";
            exit(0);
        }
        else if(x>z){
            cout<<x<<" is greatest";
            exit(0);

        }
        else if(x==z){
            cout<<x<<" is greatest";
        }
        }
        else if(x<y){
                   if(y<z){
            cout<<z<< " is greatest";
            exit(0);
        }
        else if(y>z){
            cout<<y<<" is greatest";
            exit(0);
        }
else if(y==z){
    cout<<y<<" is greatest";
}
            
        }
        else if(x==y){
            if(y>z){
                cout<<y
<<" is greatest";            }
else if(y<z){
    cout<<z<<" is greatest";
}
else if(y==z){
    cout<<y<<" is greatest";
}
        }

    }


int main() {
    // display();

// float x = 3.5 , y = 7.9 , z;
// z = add(x,y);
// cout<<z<<endl;
int a , b ,c;
cin>>a>>b>>c;
maxof3(a,b,c);
    return 0;

}
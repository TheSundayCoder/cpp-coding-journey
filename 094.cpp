
#include <iostream>
using namespace std;

int main() {
    int t  ; 
    cin >>t;
    long long x[10000] , y[10000] , z[10000];
    for(int i = 0 ; i < t ; i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    for(int i = 0 ; i < t ; i++){
        if(x[i]>0){
            if(y[i]>0){
                if(z[i]>0){
                    cout<<1<<endl;
                }
                else{
                    cout<<5<<endl;
                }
            }
            else{
                if(z[i]>0){
                    cout<<4<<endl;
                }
                else{
                    cout<<8<<endl;
                }
            }
        }
        else{
            if(y[i]>0){
                if(z[i]>0){
                    cout<<2<<endl;
                }
                else{
                    cout<<6<<endl;
                }
            }
            else{
                if(z[i]>0){
                    cout<<3<<endl;
                }
                else{
                    cout<<7<<endl;
                }
            }
        }
          
    }

    
    return 0;
}

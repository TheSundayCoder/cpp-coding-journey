
#include <iostream>
using namespace std;

int main() {
    int n,r;
    cin>>n;
    // for(int i = n ; i >0 ;i = i /10 )
    // {
    //     int r = i%10;
    //     cout<<r<<endl;
        
    // }
    while(n>0){
        r = n%10;
        n = n/10;
        cout<<r<<" ";
    }
    return 0;
}
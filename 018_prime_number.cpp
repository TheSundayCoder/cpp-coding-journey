
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n<=1)
    {
        cout<<n<<" is not a prime number";
        exit(0);
    }
    for(int i = 1 ; i <=n ; i++){
        if(n%i==0){
            if(i == 1 || i ==n){
                continue;
            }
            else{
                cout<<"given number is not a prime number"<<endl;
                exit(0);
            }
        }
    }
    cout<<n<<" is a prime number";
    return 0;
}
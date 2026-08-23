//81

#include <iostream>
using namespace std;

int main() {
    int n , sum = 0;
    cin>>n;
    // while(n>0){
    //     int r = n%10;
    //     sum +=r*r*r;
    //     n = n/10;
    // } //yaha pe n = 0 ho jayegaaaa;;;;

    int i = n;
    while(i>0){
       int r = i%10;
       sum += r*r*r;
       i = i/10;

    }
    if(sum == n){
        cout<<"armstrong number";
    }
    else {cout<<"not an armstrong number";}
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a[]= { 3,9,5,111,234,21,34,564,7,2,8,6},max = 0;
    for(auto x : a){
        if(x>max){
            max = x;
        }
    }
    cout<<max;
    return 0;
}
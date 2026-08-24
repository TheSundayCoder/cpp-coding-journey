
#include <iostream>
using namespace std;

int main() {
    int a[]= { 1,2,3,4,56,67,89,34,5,6,7,8,99,9};
    int key;
    cin>>key;
    for(int i = 0 ; i < 14 ; i ++){
        if(a[i] == key){
            cout<<"key found at index "<<i;
            exit(0);
        }
    }
    cout<<"no such element found";
    
    return 0;
}
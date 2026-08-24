
#include <iostream>
using namespace std;

int main() {
    int a[]= {6,8,15,17,20,22,25,28,30,35};  //array must be sorted for binary search...
    int key;
    cin>>key;
    int l = 0 , h = 9;
   while(!(l>h)){  //or  while (l<= h)
    int mid = (l + h)/2;
    if(a[mid] == key){
        cout<<"key found at index "<<mid;
        exit(0);
    }
    else if(a[mid]>key){
        h = mid - 1;
    }
    else {
        l= mid +1;
    }
   }
    cout<<"key not found";
    return 0;
}
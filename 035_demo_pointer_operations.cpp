
#include <iostream>
using namespace std;

int main() {
    int A[5] = {2,4,6,8,10};
    int *p = A; int *q = &A[4];
//     cout<<*p<<endl;
//     p++;
//     cout<<*p<<endl;
//    p--;
//     cout<<*p<<endl;

cout<<p<<endl;
cout<<p+2<<endl; 
cout<<*(p+3)<<endl;
for(int i = 0 ; i < 5 ;i++){
    cout<<*(A+i)<<endl;
}
int d = p-q; //-4; q is 4 ahead of p 
cout<<q-p<<endl<<d;

    return 0;
}
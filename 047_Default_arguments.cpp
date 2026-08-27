
#include <iostream>
using namespace std;
// int sum(int a , int b){
//     return a + b;
// }
// int sum(int a , int b , int c){
//     return a+b+c;
// }

int sum(int a , int b = 0, int c=0){ //default hamesha right se shuru kro
    return a+b+c;
}
int main() {
    cout<<sum(10)<<endl;
    cout<<sum(10,5);
    cout<<endl<<sum(12,13,14);
    return 0;
}

#include <iostream>
using namespace std;
int add(int a , int b){
    return a+b;
}
int add(int a , int b , int c){
    return a+b+c;
}

float add(int i , float j){
    return i +j;
}
float add(float i , float j){
    return i +j;
}
int main() {
    float i = 3.5f , j = 3.6f, k;
    k = add(i,j);
    cout<<k;
    cout<<add(2.4f,3.4f);
    return 0;
}
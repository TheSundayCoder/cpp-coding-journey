#include<iostream>
using namespace std;
int main(){
int A[5]={0}; //for all zero
int B[5] = {3,4};
for(int i = 0; i < 5; i++){
    cout<<A[i]<<endl;
    
}
for(int i = 0; i < 5; i++){
    cout<<B[i]<<endl;   //rest values zero
}
int d[4] = {0};
int c[5] ;
for(int i = 0; i < 5; i++){
    cout<<c[i]<<endl<<d[i]<<endl;   //garbage values
    //d ka 4 values will be what its assigned and rest will be garbage value
}
//error   int d[5] = { 1,2,3,4,5,6};
int e[]= {1,2,3,4,5,6,7,8,9,10}; //e size is 10 integer ...

for(int x:B){
    cout<<x<<endl;
} //for each loop
float v[]= {2.33f , 5.67 , 7 , 8,9,10.345};
for(auto x : v){
    cout<<x<<" ";
}
char t[] = {'a' , 66 , 'c' , 68}; //66 = B 68 = D
for(auto y : t){
cout<<y<<" ";};
    return 0;
}
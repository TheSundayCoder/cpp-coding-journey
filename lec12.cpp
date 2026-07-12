//pointers... basically datatype which hold the address of other data type...
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    int a =98;
    int* b = &a; //b is pointer

// int &y = a;  //y is reference variable...
// cout<<endl<<y;

     //& is address of a in ram storage1( & is address of operator   and  * is dereference operator ot value at operator)
    cout<<endl<<b; //address of a in ram memory
    cout<<endl<<"address of a is "<<&a; //&a = b

cout<<endl<<"address of b is "<<&b;
cout<<endl<<"the value at b is "<<*b;
  

//pointer to pointer
int** c = &b;   //c ka pointer bnnane ke liye int*** d = &c kardo....amd so on..

cout<<endl<<"address of b is" <<c;
cout<<endl<<"value at address c is "<<*c;

    return 0;
}
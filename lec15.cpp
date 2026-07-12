//function and function prototypes..
#include<iostream>
#include<iomanip>
using namespace std;
 
// int baigan(int a, int b)
// {
//    int c = a+b;
//    return c;
// }



//function prototype
void g(void); //void ke case me bas void g() is also acceptable.....kyuki void koi parameter nhi leta
int baigan(int a, int b); 
//kehta hai ki baigan na mile toh main ke aage  milegaa..
//int baigan(int , int);------->acceptable

int main() // main function.....c++ execution yaha se hota hai....compiler isko dhund ke execute krta hai6
{
    int num1,num2;
    cout<<"enter 1st number"<<endl;
    cin>>num1;
    cout<<"enter 2nd number"<<endl;
    cin>>num2;
    //num 1 and num2 are actual parameters;;;

    cout<<endl<<"the sum is : "<<baigan(num1,num2);
    g();//function calling
    return 0; //iska matlab programm successfully execute hua without any problem...
}

int baigan(int a, int b) //int baigan(int a ,b) ----->error..
{
    //a and b are taking values from actual parameters so a and b are formal parameters....

   //int c = a+b; //c is local variable
   return a+b;
}
void g(){
    cout<<endl<<"hello, good morning";

}
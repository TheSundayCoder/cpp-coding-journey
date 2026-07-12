//classes public and private access modifiers in c++
// 

#include<iostream>
#include<iomanip>
using namespace std;
//structure me kuch chize hai jiske karan hume class alag se lana pada..
//structure me hume data access kahi se bhi kr skte hai..no data heading..
//structure me function nhi daal skte
//structure se better class hai...data store krne ke liye structure use kr skte ho

 typedef class employee{
  //bas class ke andar ke functions hi access kr payenge..
  int a , b ,c;
  public: int d , e;  //class me default sab private hota hai...isliye hume public kya rkhna hai batana padta hai....
   void setdata(int a1,int b1,int c1); //declaration...prototyping
  void getdata(){ //printing
    cout<<"value of a is : "<<a<<endl;
    cout<<"value of b is : "<<b<<endl;
    cout<<"value of c is : "<<c<<endl;
    cout<<"value of d is : "<<d<<endl;
    cout<<"value of e is : "<<e<<endl;
  }
}ep;
void employee :: setdata(int a1 , int b1, int c1){
a = a1;
b = b1; c = c1;
}

int main(){
     ep harry; //or employee harry or class employee harry;
    harry.d = 64;
    harry.e = 89;
    //harry.a  = 14; this cant be done as a is private;
    harry.setdata(1,2,4);//indirect access to private modifiers
    harry.getdata();
    return 0;
}
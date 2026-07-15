//Copy Constructor....
#include <iostream>
using namespace std;
class number{
    int a;
   public:
   number(){ //default constructor
    a = 0;
   }
    number(int num){
        a=num;
    }
    void display(){
        cout<<"The number is: "<<a<<endl;
    }
    // number(number &obj){
        
    //     a = obj.a;
    //     cout<<"Copy constructor called"<<endl;
    // }



};//COPY CONSTRUCTOR DUSRE OBJECT KI COPY BANANE KE LIYE USE HOTA HAI



int main() {
    number x(100), y(3) ,z(45); //aise declare krne ke liye default constructor banana padega;
    x.display();
    y.display();
    z.display();
  //  z1 should exactly copy the value of z into it. This is where the copy constructor comes into play. If we create a new object and initialize it with an existing object, the copy constructor will be called to create a copy of that object.
  //z1 should exactly resemble z. we will use copy constructor for it
  number z1(z); //copy constructor called;
  z1.display();
  number z2 = y;  // copy constructor isme bhi hoga invoke...cuz this is also a copy initialization. It creates a new object z2 and initializes it with the value of y, which invokes the copy constructor to create a copy of y.
  z2.display();

  number y1;
  y1 = y; //issme copy constructor call nhi hoga. ye assignment operator ka kaam hai. ye y1 ke andar y ki value copy kr dega. but y1 aur y dono alag alag object hai. y1 ke andar y ki value copy ho gayi but dono alag alag object hai.



/************** Compiler ek default copy constructor provide krta hai default...
  humne apna wala copy constructor comment kiya fir bhi ho rha output  ****************/


//when no copy constructor is found , compiler  supplies its own copy constructor. This default copy constructor performs a shallow copy of the object, which means it copies the values of the member variables from one object to another. However, if we define our own copy constructor, it will override the default one provided by the compiler.








// y1.display();----->same as y



//if(x1 == x) 2 objects aise nhi compare kiye ja sakte hai. iske liye operator overloading karna padega.baad me padhenge
// if(x1.a == x.a){  error ---> a is inaccessible.
//     cout<<"Both are equal"<<endl;}
   return 0;


}
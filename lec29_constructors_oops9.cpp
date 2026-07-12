// constructors
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class complex
{
    int a, b;

public:
    // creating a constructor
    // it is used to initialize the objects of its class
    // constructor is a special member function with the same name as of the class.(same name is must!!!)
    // it is automatically invoked(call krna function ko) whenever an object is created

    void printdata()
    {
        cout << "YOUR COMPLEX IS " << a << " + i" << b << endl;
    }
    complex(void); //----->constructor declaration....automatic run hota hai function declaration ke time pe..
                   // complex();
                   // always defined in public section ;
}c1,c2,c3;
complex ::complex(/*isme abhi koi parameter nhi hai*/)
{ // default constructor...no parameters
    a = 10;
    b = 20;
    cout << "hello world" << endl;
}
complex c4;//aise bhi complex objects bante hai

int main()
{
     // create hote hi construct isko value dediya....
    c1.printdata();
    c3.printdata();
    c4.printdata();
    return 0;
}

/*characteristics of constructor******************
1.constructor jo koi parameter accept nhi krta wo default constructor
2.it should be declared in public section of class
3.it is automatically invoked(call krna function ko) whenever an object is created
4.they do not have return type..they can not return values
5.iske andar ka function like cout bhi automatic run hoga jitna object create hoga utna baar
6.it can have default arguments example : int sum(int a , int b = 10)
7.we can not refer to their address...basically constructor ka address refer nhi kr skte
  kyuki they are not normal functions....
  int hello()
  &hello----> hello function ka address.*/

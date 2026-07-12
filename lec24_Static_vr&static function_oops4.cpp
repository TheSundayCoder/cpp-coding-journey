//static variables aand static functions in oops
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// int x = 0;
class employee
{
    static int count;
    // static by default 0 se shuru (initialize) hota hai.
    // default value 0.
    int id;

    // int count =0; //ye krne se bar bar employee 1 aarha hai...update nhi ho rha..
    // because har object ka count 0 hogya and setdata time 1 hojata hai...
    // static use krne se jab jab wo chiz hoga value update hogi..
    // global variable se bhi kr skte hai count ++  ke jagha x++ krna and global var int x = 0;
public:
    void setdata()
    {
        cout << "enter the id " << endl;
        cin >> id;
        count++;
        // x++;
    }
    void getdata()
    {  
        cout << " the id of  employee "  " is " << id << endl;
    }
    static int getcount()//requires no object to get runned..only classname::function name();
{
    cout << "the value of count is " << count << endl;
  //  cout<<id; static functions only have acces to static functions or variables..
} 
};
int employee::count ;// = 1000; // static ka value change nhi kr skte isliye yaha se krna hai..... // bahar declare krna padegaa..
// control x ---> cut



int main()
{
    static int b  = 10; //yaha directly static ko 10 rkh diye..classes me not allowed...
    employee harry, rohan, lovish;
    // count is the static data member of class employee

    // harry.id =
    // harry.count = both are private...
    harry.setdata();
    harry.getdata();
    employee::getcount(); //static functions ...only  has access to other static functions or static variables
    rohan.setdata();
    
    rohan.getdata();
    employee::getcount();

    lovish.setdata();
    lovish.getdata();
    employee::getcount();
    

    
    return 0;
}

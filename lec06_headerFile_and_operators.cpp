// header files  and operators in c++

// google - cpp headerfile reference...poora list milegaa..

/*two types of headerfiles
 1.system header files - it comes with compiler
 2. user defined header files - written by programmer*/

#include "UsrHdrFileL6" //is name ka file banana padta hai cuz its user defined header file
// this will become error if this header file naam ka file apne banaya na ho...humne bhi create kia h..

#include <iostream>
using namespace std;
int main()
{
    cout << "hello" << endl; // ends line...simply acts as \n
    cout << endl
         << "kaa ree\n";
    // operators in c++

    // arithmetic operators
    int a = 12, b = 6;
    cout << "a+b = " << a + b << "\na into b = " << a * b << "\na by b = " << a / b << "\na-b = " << a - b << endl;

    a++; // a me ek badhana a 12 se 13 hogya...
    /* a%b is a by b ka remainder =1
       ++a is pehle a ka value badhao then print
       a++ is pehle a print kro then a ka value badhaoo
       a-- and --a nhi similarly aise hi hai..*/

    cout << a++ << endl; // cout a++ is pehle a print kro fir value of a badhaooo...ab a=14 hogya
    cout << a;
    cout << endl
         << ++a; // a=15 hogya a 14 se 15 hua then print hua

    // assignment operators
    int x = 9, y = 10;
    float l = 1.1;

    a++;

    // comparison operators  must be written in ()
    cout << "\na==b is : " << (a == b);
    cout << "\na!=b is : " << (a != b); // 1 means true 0 means false..
    cout << "\n a >b is " << (a > b);

    cout << "\n a <b is " << (a < b);
    cout << "\n a >=b is " << (a >= b);
    cout << "\n a <=b is " << (a <= b);
    cout << endl
         << "the final value of a is " << a;

    // logical and operator true(1) if both true
    cout << endl
         << "the value of logical and operator ((a==b)&&(a>b)) is : " << (a == b && a > b);
    // logical or operator true if any one true
    cout << endl
         << "the value of logical or operator ((a==b)||(a>b)) is : " << (a == b || a > b);
    // logical not operator ... result ko ulta krna... a=16 b=5
    cout << endl
         << "a is " << a << "b is " << b << "the value of logical not operator (!(a==b)) is : " << (!(a == b));
    return 0;
}

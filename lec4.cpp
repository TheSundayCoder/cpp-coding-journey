//local and global variable
#include<iostream>
using namespace std;
int aditya=10;  //global variable
  void sum(){
             cout<<aditya<<"\n";
  }    
int main()  /* main function bas int ke sath likha hona chahiye and sare
            function ko main ke andaar call krna padega taaki wo work karein*/
{
    sum(); //function call
    int aditya = 31; //local var having same name as global  var.
          cout<<aditya<<"\n";
          aditya = 20;  //changed global variable value inside a function
          cout<<aditya;
//use "\n" to break line.
         char c='a';
         cout<<"\nThe value of c is "<<c;
         bool m = true;
         cout<<"\nvalue of boolean m is "<<m; //true = 1, false = 0
          return 0;
}
//global and local  variable can have same name.
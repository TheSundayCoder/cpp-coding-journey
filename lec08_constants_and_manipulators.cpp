//constants manipulators and operator precendence
#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    /**************constants in c++***************/

    const int d = 45;
    //a = 4; ye krne se error dedega bcz ab constant ki value nhi bdal sktii

    /**************MANIPULATORS(endl from iostream  and setw() from iomanip ***************/

     int a = 5, b = 601, c = 1045;
    cout<<"the value of a without setw() is "<<a<<endl; 
     cout<<"the value of a without setw() is "<<b<<endl;
cout<<"the value of a without setw() is "<<c<<endl;
cout<<"the value of a with setw(4) is "<<setw(4)<<a<<endl;
cout<<"the value of b with setw(4) is "<<setw(4)<<b<<endl;
cout<<"the value of c with setw(4) is "<<setw(4)<<c<<endl;


    return 0;
}

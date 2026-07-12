// nesting of member functions in c++
#include <iostream>
#include <string> //for this lecture....
#include <iomanip>
using namespace std;


// oops classes and objects
/*c++ ---> initially called c with classes;
class ----> extension of structures(in c);
structures had limitations --> members are public
                          --> no methods
classes ===> structures + more;
classes ---> can have methods and properties
classes --> can make few members as private and few as public;
you can declare objects along with class declaration like this:

/* class employee{

}harry,rogan,lovish;*/

// harry.salary = 8 makes no sense if salary is private;

// nesting of member functions**************


class binary  
//binary is number formed with combination of 0 and 1 example: 0101,110,1011101....
{
    string s;//private
  
    void chk_bin(); //check binary chk_bin

public:
    void read(); // or void read(void);
    
    void ones_compliment(); //changes 0 to 1 and 1 to 0;
};
void binary::read(){
    cout<<"enter a binary number "<<endl;
    cin>>s;
}
void binary::chk_bin(){
    for(int i = 0; i <s.length();i++)
    {
           if(s.at(i)!='0' && s.at(i) != '1' ){
            cout<<"incorrect binary format"<<endl;
            exit(0);//instantly exits function;
           }
           
    }
    cout<<"correct binary format"<<endl;
}
void binary::ones_compliment(){
    chk_bin(); //isse agar binary nhi hua toh exit ho jayega but hua toh one compliment ho jayegaa..
        for(int i = 0; i<s.length();i++){
            if(s.at(i)=='0'){
                s.at(i)='1';
            }
            else if(s.at(i)=='1'){
                s.at(i) = '0';
            }
        }
        cout<<"swapped binary is "<<s<<endl;
}

int main(){
binary b;
//error b.s = "hello"; as s is
b.read();
b.ones_compliment();
    return 0;
}

// nesting of member functions in c++
#include <iostream>
#include <string> //for this lecture....
#include <iomanip>
using namespace std;




class binary  
//binary is number formed with combination of 0 and 1 example: 0101,110,1011101....
{
    string s;//private


public:

void read(){
    cout<<"enter a binary number "<<endl;
    cin>>s;}

void ones_compliment(){
    chk_bin(); //isse agar binary nhi hua toh exit ho jayega but hua toh one compliment ho jayegaa..
    //no prototyping required for class members
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

void chk_bin(){
    for(int i = 0; i <s.length();i++)
    {
          if(s.at(i) == '0' || s.at(i) == '1'){
            continue;
          }
          else{
            cout<<"incorrect binary format";
            exit(0);
          }
           
    }
    cout<<"correct binary format"<<endl;
}
};

int main(){
binary b;
//error b.s = "hello"; as s is private
b.read();
b.ones_compliment();
    return 0;
}

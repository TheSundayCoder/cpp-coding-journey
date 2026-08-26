#include<string>
#include <iostream>
using namespace std;

int main() {
    string str  = "Hello world";
cout<<str.length()<<endl<<str.size()<<endl;
str.resize(100);
//if str = nullptr ; str.length()or str.size() is error


cout<<str.capacity()<<endl;
cout<<str.max_size()<<endl; //this means itna uska size nhi hai but kar skta hai
cout<<str.capacity()<<endl;
    cout<<str<<endl;
    str.clear();
    cout<<str<<endl;
cout<<str.length()<<endl;

cout<<str.empty(); //true  = 1
  
    return 0;
}
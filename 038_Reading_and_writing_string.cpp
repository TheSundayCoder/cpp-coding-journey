
#include <iostream>
using namespace std;

int main() {
    char s[100];
    cout<<"Enter your name ";
    //cin>>s; only one word
    cin.getline(s,100);
    cout<<"welcome !! "<<s<<endl;
    return 0;
}
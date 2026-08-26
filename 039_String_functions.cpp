
#include <iostream>
#include<cstring>
using namespace std;

int main() {
//     char s[50] = "hello   world  ";
// cout<<strlen(s);
// char *p = new char[10];
// cin.getline(p,10);
// cout<<p;




// char s[20] = "Good ";
// char d[10] = "morning";
// cout<<strcat(s,d)<<endl; //ab s = s+d hogya
// cout<<strncat(s,d,3);   //ab s = s +mor hogya'
// cout<<endl<<s;

char a[100] = "Good";
char a2[10] = "Ag";
strcpy(a2,a);
cout<<a2<<endl;
strncpy(a,a2,1);
cout<<a;
char s[100] ="hello ";
//char b[100];
//b = "hello" ->error
    return 0;
}
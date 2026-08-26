
// #include <iostream>
// #include<cstring>
// using namespace std;

// int main() {
//     char s1[20] = "programming";
//     char s2[10] = "gram";
//     char s = 'm';
//     cout<<strstr(s1,s2)<<endl; //gramming
//    //error cout<<strstr(s1,s)<<endl; s must be an arry of characters
//    char s3[10] = "k";
//    //cout<<strstr(s1,s3); //no output
// if(strstr(s1,s3) != nullptr /*or NULL*/){
//     cout<<strstr(s1,s3)<<endl;
// }
// else{
//     cout<<"go home fella"<<endl;
// }
// cout<<(char*)nullptr;
// cout<<endl<<"hi";
//     return 0;
// }



// #include <iostream>
//  #include<cstring>
// using namespace std;

// int main() {
//     char s[100] = "pororogramming";
//     if(strchr(s,'r')!=nullptr){  //cout ko depress mt krna
//     cout<<strchr(s,'r')<<endl; //left wala r se print
//     cout<<strrchr(s,'r'); //right wala r se print
//      } return 0;
// }


#include <iostream>
#include<cstring>
using namespace std;

int main() {
    char s[100] = "cappleeee";
    char t[100] = "cam";
    cout<<strcmp(s,t); //returns 0 , +1 , -1
char a[100] = " AellO";
    char b[100] = "AellO"; //space ascii code -> 32 <65...space comes first in dictionary
    cout<<endl<<strcmp(a,b);
    return 0;
}
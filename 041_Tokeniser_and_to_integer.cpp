
// #include <iostream>
// #include<cstring>
// using namespace std;
// //lec 041
// int main() {
//      char s1[10] = "235";
//     char s2[10] = "235.4567";
//   //int c =    strtol(s1,NULL,10); typecasting hai asal me c ko long int hona chahiye
//   long int c =    strtol(s1,NULL,10);
//     cout<<c+65;//235+65 = 300;
// float d = strtof(s2,NULL);
// cout<<endl<<d;
//     return 0;
// }


#include <iostream>
#include<cstring>
using namespace std;

int main() {
    char s1[20] = "x=10;y=20;z=35";
    char *token = strtok(s1,"=;");  //or (s1,";=");
    while(token != nullptr/*or NULL*/){
   cout<<token<<endl;
   token = strtok(NULL,"=;");
    }
    return 0;
}
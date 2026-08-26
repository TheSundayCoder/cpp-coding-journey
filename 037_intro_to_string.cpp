
#include <iostream>
using namespace std;

int main() {
    char s[10] = "hello"; //null character at 5 index;
    s[5] = 'p'; //null character moves to 6 index;
    s[7] = 'o'; //this wont get printed
    cout<<s<<endl;


    char d[] = {'H','E','L','L','O','\0','A','B','C'}; //A B C wont get printed cuz of \0 before them
    cout<<d;
    char o[] = {65,66,67,68,0,69,70};
    cout<<endl<<o<<endl;
    char *P = "Heeeello"; //warning,not error
    cout<<P;
    return 0;
}
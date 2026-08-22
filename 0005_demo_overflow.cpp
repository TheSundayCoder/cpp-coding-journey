
#include <iostream>
using namespace std;

int main() {
    char x = 127;
    cout<<x<<endl;
    cout<<"a"<<x<<"b"<<endl;
    x++;
    cout<<x<<endl<<int(x)<<endl<<endl<<endl;

    char y = -128;
    cout<<y<<endl;
    --y;
    cout<<int(y);


  int m = INT_MAX; //max int value
  cout<<endl<<m<<endl;
  m++;
  cout<<m<<endl;



    return 0;

}
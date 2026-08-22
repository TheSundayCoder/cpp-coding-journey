
#include <iostream>
using namespace std;

int main() {
    int x =11 , y = 7 , z,n,k,l;
    z = x|y;
    n = x&y;
    k = x^y;
    l = ~x;
    cout<<z<<endl<<n<<endl<<k<<endl<<l<<endl;
 

     char s = 5,o2;
     o2 = s<<3; //5*2^3;
     cout<<(int)o2; 
    return 0;
}
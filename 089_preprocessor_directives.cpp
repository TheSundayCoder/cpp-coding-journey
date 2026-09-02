// #ifndef 
// #define SQR(x) ((x)*(x))

// #endif



#include <iostream>
using namespace std;
//236

#define max(x,y) ((x>y)?x:y)  // brackets are important in macros to avoid precedence issues
#define pi 3.1425
#ifndef pi
              #define pi 3
#endif
#define msg(x)  #x
int main()
{
    cout<<max(10,20)<<endl;
    cout<<pi<<endl;
    cout<<msg(hello world)<<endl;
    return 0;
}
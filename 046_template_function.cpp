
#include <iostream>
using namespace std;
template<class P>
P Max(P a , P b){
    if(a>b){
        return a;
    }
    else if(a<b){
        return b;
    }
    else return 0;
}
int main() {
    cout<<Max(2,3);
   cout<<endl<<Max('A','a');
   cout<<endl<<Max(9.34f,5.0F);  //5F will be error
   cout<<endl<<Max(9.34,5.0 /*5 nhi chalega ...dono same type ke hone chahiye*/);  //DOUBLE DATA TYPE
    return 0;
}
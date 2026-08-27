
// #include <iostream>

// using namespace std;
// int * fun (int n){
//     int *p = new int[n];
//     for(int i = 0 ; i <n ; i++){
//         p[i] = 5*i;
//     }
//     cout<<p<<endl;
//     return p; //returns address
// }
// int main() {
//      int *q = fun(50);
//      for(int i = 0  ; i < 50 ; i++){
//         cout<<q[i]<<"    ";
//      } 
//      cout<<q<<endl;
//      delete []q;
//      q = nullptr;
//       return 0;
// }


//return by reference



#include <iostream>
using namespace std;

int & fun(int & x)
     {
        return x;
     }
int main() {
    int a = 10;
    fun(a) = 25;
    cout<<a;
    return 0;
}
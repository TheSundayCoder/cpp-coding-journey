
// #include <iostream>
// using namespace std;

// int main() {
    
//     float amount,discount;
//     cout<<"enter amount "<<endl;
//     cin>>amount;
//     if(amount<100){
//         discount = 0;
//     }
//    else if(amount >= 100 && amount < 500){
//         discount = 0.1*amount;
//     }
//     else if(amount >=500){
//         discount = 0.2*amount;
//     }
//     cout<<"discount is "<<discount;
//     cout<<endl<<"net price : "<<amount-discount;
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int year;
   cin>>year;
   if(year%4==0 && year % 100 != 0 )
   {
    cout<<"leap year";
   }
   else if(year % 400 ==0){
    cout<<"leap year";
   }
   else{
    cout<<"not a leap year";
   }
    return 0;
}
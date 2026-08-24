
// #include <iostream>
// using namespace std;

// int main() {
//     int count = 1;
//     for(int i = 0; i < 4 ;i++){
//         for(int j = 0 ; j < 4 ; j++){
//             cout<<" "<<count++<<"     ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     for(int i = 0 ; i  <5; i++){
//         for(int j = 0; j <5 ; j++){
//             if(i>=j){
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     for(int i = 0 ; i  <5; i++){
//         for(int j = 0; j <5 ; j++){
//             if(i==j|| j>i){
//                 cout<<" *";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    for(int i = 0 ; i <10 ; i++){
        for(int j =0 ; j<10; j++){
            if(i+j>=10){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
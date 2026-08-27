
// #include <iostream>
// using namespace std;
// void swap(int x , int y){
//     int temp = x;
//     x=y;
//     y = temp;
// }
// int main() {
//     int x = 10 , y = 20;
//     cout<<"before swapping "<<x<<" "<<y<<endl;
//     swap(x,y);
//     cout<<x<<" "<<y; //no swap
//     return 0;
// }



//call by address

// #include <iostream>
// using namespace std;
// void swap(int *a , int *b){
//     int temp  = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
// int x = 10 , y = 20;
// swap(&x,&y);
// cout<<x<<" "<<y;    
//     return 0;
// }

//call by reference
#include <iostream>
using namespace std;
void swap(int &a , int &b){
    int temp  = a;
    a =b;
    b = temp;
}

int main() {
int x = 10 , y = 20;
swap(x,y); //swap code pasted at this place
cout<<x<<" "<<y;    
    return 0;
}

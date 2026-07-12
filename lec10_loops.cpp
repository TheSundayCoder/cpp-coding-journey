//loops in c++
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
     /*3 loops in c++
     1.for  loop
     2.while loop
     3.do while loop
     */
   
     /*for loop in c++*/
    // for(int i= 0;i<=20;i++){    //----------->  1 to 20 print
    //     cout<<setw(4)<<(2*i+1)<<endl;
    // }


        /*while loop in c++*/
    //     int i=0;
    //  while(i<=40)
    //  {
    //     cout<<endl<<i;
    //     i++;
    //  }

    /*    do while loop in c++    */
    
    int i = 0;
    do{
        cout<<endl<<i++;
    }while(i<=3);

    return 0;
}

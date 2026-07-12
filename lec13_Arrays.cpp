//ARRAYS
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // int a = 8;
    // int b = 9;
    // cout<<&a<<endl<<&b;
    // cout<<sizeof(a); //integer a 4 byte leta hai.....

    // int marks[/*4 likhna optional hai*/] = {23,24,25,26};  
    //  cout<<marks[0]<<endl; //counting 0 se shuru hoti hai 23 ---->0 me save hua hai...
    //  cout<<marks[1]<<endl;
    //  cout<<marks[2]<<endl;
    //  cout<<marks[3]<<endl;

    //  int math[4];
    //  math[0]=1;
    //  math[1]=2 ;
    // math[2]= 3;
    // math[3]=4 ;
    // cout<<math<<endl;// this is space address;
// cout<<math[0]<<endl;
// cout<<math[1]<<endl;
// math[2] = 55; //changing value of array
// cout<<math[2]<<endl;
// cout<<math[3]<<endl;

// for(int i=0;i<=3;i++){
//    cout<<math[i]<<endl;
// }



//int i=0;
// while(i<4){
//     cout<<math[i]<<endl;
//     i++;
// }

// do{
//     cout<<math[i]<<endl;
//     i++;
// }while(i<4);
  
//user input in array****************************************

// int m[4];
// for(int i =0; i<4; i++){
//     cin>>m[i];
//     cout<<endl;
// }


// for(int j=0; j<4;j++){
//     cout<<m[j]<<endl;
// }


/********************Pointers and arrays ********************/
int math[4] = {1,3,5,7};
int* p = math; //pointer and array
// cout<<endl<<"the value of math[0] is :"<<*p<<endl;
// cout<<endl<<"the value of math[1] is :"<<*(p+1)<<endl;
// cout<<endl<<"the value of math[2] is :"<<*(p+2)<<endl;
// cout<<endl<<"the value of math[3] is :"<<*(p+3)<<endl;

cout<<*(p++); //pehle p fir p increment hua by 1
cout<<endl<<*p;
cout<<endl<<*(++p);

    return 0;
}

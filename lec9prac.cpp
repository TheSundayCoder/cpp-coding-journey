#include<iostream>
using namespace std;
int main(){
       
    //  if(condition){
    //     code
    //  }
    //  else if



// int a = 0;
// if(1<2){
//     cin>>a;
// }

//  if(a>20 ){
//     cout<<"pass"<<endl;
//  }
//  else if(a==20){
//      cout<<"barely pass"<<endl;
//  }
//  else if(a==0){
//     cout<<"nil";
//  }
 
//  else{
//     cout<<"fail"<<endl;
//  }

 
/******************switch case**********************/
 cout<<"enter number from 1 to 3"<<endl;
 int a ;
 cin>>a;
 switch(a){
    case 1:
    cout<<"hi";
    break;
    case 2:
    cout<<"hello";
    break;
    case 3:
    cout<<"bye"<<endl;
    break;
    defaut:
    cout<<"pls read the instructions";
    break;//this is optional break...
}

 return 0;
}


#include<iostream>


int main(){
    using namespace std;
    cout<<"enter age\n";
    int age;
    cin>>age;

    //selection control structure *********** if else**********************

    // if((10<age) && (age<18)){
    //     cout<<"you cant come to the party";
    // }
    // else if(age==18){
    //     cout<<"kuch khana mat aake";
    // }
    // else if(age<=10){
    //     cout<<"padhai karle";
    // }
    // else{
    //     cout<<"You are invitted to the party";
    // }

//**********switch case  *************/
switch (age)
{
case 18:
    cout<<"you are 18";
    break;
    case 22:
    cout<<"you are 22";
    break;
    case 2:
    cout<<"you are 2";
    break;

default:
cout<<"no special cases";
    break;
}
    return 0;
}

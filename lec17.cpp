//inline funcrions , default arguments & constant arguments in c++
#include<iostream>
#include<iomanip>
using namespace std;

inline int product(int a, int b){ //inline ke help se ye function direct execute hoga without any conversion from actual parameter to formal parameter....
                                  //pura program waha pe uth ke aa jata hai jaha bhi call hota hai...fast execution me help krta hai..
    // static int c = 0;              //not recommended to use for points given in notebook...lec 17..recursion static variable loop switch or big functions...
    // c = c+1;
    // return (a*b)+c;
    return a*b;
}

float moneyReceived(int currentMoney , /*const*/ float factor = 1.04){ //default argument hamesha end me likhna haiiii*****************************
                                             //ye const constant argument bna degaaa..                            
            return currentMoney*factor;
}

/*****************************   constant argument ------> wo argument jo kbhi change na ho ske   *****************************/
int main(){
    // int a, b;
    // cout<<"enter a and b "<<endl;
    // cin>>a>>b;
    // cout<<endl<<"product of a and b is "<<product(a,b)<<endl;  
    // cout<<endl<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<endl<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<endl<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<endl<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<endl<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<endl<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<endl<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<endl<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<endl<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<endl<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<endl<<"product of a and b is "<<product(a,b)<<endl;

  cout<<"enter money "<<endl;
  int money;
  cin>>money;

  cout<<"if you have "<<money<<" in your account , you will receive Rs. "<<moneyReceived(money)<<" after 1 year"; //dusra value nhi diya toh default value use krliaaa function
  cout<<endl<<"for vip if you have "<<money<<" in your account , you will receive Rs. "<<moneyReceived(money,1.1)<<" after 1 year";//2 value diya toh deafult value use nhi kiyaa..

    return 0;
}
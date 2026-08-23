
#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"enter your age";
    cin>>age;
    if(age>=12 && age<= 50)  //if(age>=12 , age <=50) comma ke case me dono condition independently treat hoga age = -5 me bhi young show krega
    cout<<"young";
    else
    cout<<"not young";
    if (age <= 12 || age >=50)
    cout<<endl<<"eligible for offer";
    else cout<<endl<<"not eligible for offer";
    return 0;
}
//structure union and enum
#include<iostream>
#include<iomanip>
using namespace std;

 typedef struct employee{
    int uid; //4 bite
    char favchar; //1 bite
    float salary;  //4 bite

}ep;  //typedef helped us to use create short form for struct employee as ep....



typedef union money //union ke andar ek time pe bas ek hi chiz use kr skte h....
{
    int rice;
    char car;
    float pounds;
}m1;


int main(){
   
    struct employee harry;
    ep aditya;//typedef ke madad se hum ep set kiye struct employee ko likhne se accha...
    harry.salary = 120000000;
    aditya.salary=120000000;
    aditya.favchar = 'a';
    aditya.uid=3011;
    cout<<aditya.uid;


     union money farmer;
     m1 garry;
     garry.pounds = 1.23;
     farmer.car = 'c';
     // farmer.rice = 34; ye ni kr skte ..kuch bhi andh shand value de dega ek bar me ek hi kr skte......for union
     cout<<endl<<farmer.car;
     cout<<endl<<garry.pounds;

    /**************************************** enum *************************************************/
    enum meal{ breakfast , lunch , dinner};

    cout<<endl<<breakfast;
cout<<endl<<lunch;
    cout<<endl<<dinner; //in tino ko number mil gyaa 
meal c = breakfast;
cout<<endl<<"enum";
    cout<<endl<<(c==0);
    
    return 0;
}

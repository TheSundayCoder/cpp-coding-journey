
#include<iostream>
using namespace std;int c=45;//global variable

int main(){
   
    //scope resolution operator :: isse global c ka value likh payenge even if its changed to a+b
//     c = 30;
//  cout<< "the value of global variable c is "<<::c;//c ka global value print hoga...

//  //************float double and long double literals*************
//    float d = 34.4F; // or 34.4f f fenotes float
//    long double e = 34.4L;//or 34.4l
    
//    //by default 34.4 ko c++ double ke tarah treat krta hai... float ya long double btane ke liye f ya L lagao...small big koi bhi

//    //** sizeof()  operator

//     cout<<"the size of double 34.4  is "<<sizeof(34.4)<<endl;
//   cout<<"the size of float  34.4f is "<<sizeof(34.4f)<<endl;
// cout<<"the size of  float 34.4F  is "<<sizeof(34.4F)<<endl;
// cout<<"the size long double of 34.4l  is "<<sizeof(34.4l)<<endl;
// cout<<"the size long double of 34.4L  is "<<sizeof(34.4L)<<endl;
// cout<<"the size of float  35.678f is "<<sizeof(35.678f);
    ////34.4 by befault double treat krta h c++ so u gotta tell him by specifying f F l L ....

        /********* Reference variables  ***********/

        //adi----aditya----golu

        float x = 455;
        float &y=x;//humne y ko x ke trah save kia x ka value y ke taur pe save h..
        cout<<endl<<y;

        /********* TypeCasting ....ek variable ko dusre me change krna***********/
       
//         int p = 5;
//         float q = 45.46;
//         cout<<endl<<"the value of float p is "<<(float)p;// int float bn gya...float(p) bhi likh skte h....
// cout<<endl<<"the value of integral q is "<<(int)q<<endl; //float int bn gya... int(q) bhi likh sakte hai...
           
// int r =  int(q);// integer value of q;
// cout<<" r = "<<r<<endl;

// cout<<"the expression p + q is : "<<p+q<<endl;
// cout<<"the expression p + int(q) is : "<<p+int(q)<<endl;
// cout<<"the expression p + (int)q is : "<<p+(int)q<<endl;
// cout<<"the expression float(p) + q is : "<<float(p)+q<<endl;
    return 0;
}

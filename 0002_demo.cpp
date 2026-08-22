#include<math.h> //or #include<cmath>
#include <iostream>
using namespace std;

int main() {
//     float r,area;
//     cout<<"enter radius of circle\n";
//     cin>>r;
//     area = (22/7.0)*r*r;  //22/7.0 gives float  value of pi ...22/7 = 3 
//   //22/7.0 = 3.142...
//     cout<<"area is "<<area;
int a , b, c ;
float r1,r2;
cout<<"enter coefficients of quadratic "<<endl;
cin>>a>>b>>c;
r1 = (-b+sqrt(b*b-4*a*c))/(2*a);
r2 = (-b-sqrt(b*b-4*a*c))/(2*a);
cout<<"root are "<<r1<<" & "<<r2;
    return 0;
}
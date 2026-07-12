// friend functions in c++
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class complex
{ // complex number 1+4i , 6+8i  ---> sum  = 7 + 12i;
    int a, b;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2); //means this independent function is allowed to do anything with his private data;
    void getdata()
    {
        cout << "YOUR COMPLEX NUMBER IS " << a << " + i" << b << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{ // independent of class;
    complex o3;
    o3.setdata(o1.a + o2.a, o1.b + o2.b); // without friend declaratrion....error aaata
   // cout<<o1.a;
   //cout<<a--->error;
    return o3;
}
int main()
{
    complex c1, c2;
    c1.setdata(1, 4);
    c2.setdata(6, 8);
    c1.getdata();
    c2.getdata();
   // c1.sumcomplex(); this is error...sumcomplex is not class ka function...
    complex sum = sumcomplex(c1, c2);
    sum.getdata();

    return 0;
}

/*properties of friend functions 
1. not in the scope of class(function class ke bahar rehta h)
2.since its not in the scope of the class, it cant be called from objects of the class
3.can be invoked(used) without help of any object
4. usually contains arguments as objects;
5.can be declared inside public or private part of the class
6.it cant access the members directly by their names and need object_name.member_name to access any member*/

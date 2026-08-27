
#include <iostream>
using namespace std;

float fun(int a, float b)
{
    return a + b;
}

float mul(int a, float b)
{
    return a * b;
}

void gama()
{
    cout << "hi bro" << endl;
}

int main()
{

    void (*p)() = gama; //direct orr first declare then p = gama ; will work
    (*p)(); //to execute gama ...(*p) swont work...()are must
float (*x)(int , float) = fun;
 cout<<endl<<(*x)(3,6.6);
 x = mul;
 cout<<endl<<(*x)(3,3.3);
    return 0;
}
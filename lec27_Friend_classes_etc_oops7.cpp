// friend classes and member friend functions in c++

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// forward declaration

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealcomplex(complex a, complex b); //(complex , complex) bhi likh skte hai
    int sumImaginarycomplex(complex a , complex b);
};

class complex
{ // complex number 1+4i , 6+8i  ---> sum  = 7 + 12i;
    int a, b;
    friend int calculator::sumRealcomplex(complex, complex);
 friend int calculator:: sumImaginarycomplex(complex, complex);
 //friend class calculator ....yani calculator class ka function complex ka data use kr payegaa...
public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void getdata()
    {
        cout << "YOUR COMPLEX NUMBER IS " << a << " + i" << b << endl;
    }
};
int calculator::sumImaginarycomplex(complex a , complex b){
    return a.b + b.b;
}
int calculator::sumRealcomplex(complex a, complex b)
{
    return a.a + b.a;
}

int main()
{
    complex o1, o2;
    o1.setdata(1, 4);
    o2.setdata(5, 7);
    calculator calc;
    int result = calc.sumRealcomplex(o1, o2);
    int resultimaginary = calc.sumImaginarycomplex(o1,o2);
    cout << "the sum of real part o1 and o2 is " << result << endl;
    cout << "the sum of imaginary part o1 and o2 is " << resultimaginary << endl;

    return 0;
}

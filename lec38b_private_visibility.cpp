
#include <iostream>
using namespace std;
class base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setdata(int a = 200, int b = 300) // default arguments are used here
    {
        data1 = a;
        data2 = b;
    }
    int getdata1()
    {
        return data1;
    }
    int getdata2();
};
int base::getdata2()
{
    return data2;
}

class derived : base
{ // class is being derived privately
    int data3;

public:
    void process()
    {
        setdata();
        data3 = data2 * getdata1();
    }
    void display()
    {
        cout << "Value of data1 is: " << getdata1() << endl;
        cout << "Value of data2 is: " << getdata2() << endl;
        cout << "Value of data3 is: " << data3 << endl;
    }
};
int main()
{
    derived der;
    // der.setdata(100,200); cant be accessed now due to private inheritance
    der.process(); // we will call setdata() function inside process() function of derived class
    der.display();
    return 0;
}

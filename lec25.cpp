// // array of objects and passing objects as function arguments in c++
// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;
// class employee
// {
//     int id;

//     static int count;
//     int salary;

// public:
//     // static int salary;
//     void setid()
//     {

//         cout << "enter employee id " << endl;
//         cin >> id;
//         salary = 122000000;
//     }
//     void getid()
//     {
//         count++;
//         cout << "the id of this employee " << count << " is " << id << endl;
//          cout<<"the salary of this employee is "<<salary<<endl;
//     }
// };
// int employee::count;
// //int employee::salary;

// int main()
// {
//     // employee harry,rohan,lovish,aditya;
//     // harry.setid();
//     // harry.getid();

//     employee fb[4];
//     for (int i = 0; i < 4; i++)
//     {
//         fb[i].setid();
//         fb[i].getid();
//     }
//     //     fb[1].salary = 10000000;
//     //  cout<<fb[3].salary<<endl;----> 10000000 since salary was static.....all fb[] salary are same :3
//     return 0;
// }

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdatabysum(complex o1, complex o2) // complex o1 and complex o2 ishi class ke objects hain..
    {
        a = o1.a + o2.a; //1st obj ka a and 2nd obj ka a (real part);
    
        b = o1.b + o2.b; //1st obj ka a and 2nd obj ka b(imaginary part);
    }
    void printNumber()
    {
        cout << "your complex number is " << a << " + i" << b << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c2.setdata(3, 4);

    c1.printNumber();
    c2.printNumber();

    c3.setdatabysum(c1, c2);
    c3.printNumber();

    return 0;
}
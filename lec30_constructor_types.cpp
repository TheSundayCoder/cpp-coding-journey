// parameterized and default constructors
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

class complex
{
    int a, b;

public:
    void printdata()
    {
        cout << "YOUR COMPLEX IS " << a << " + i" << b << endl;
    }
    //     complex() //automatic invoke hogaa....
    //     { // default constructor
    //         a = 0;
    //         b = 0;
    //     }
    complex(int x, int y); // parameterized constructor

}; // for parameterized constructor ..we cant creAte objects here
complex ::complex(int x, int y)
{
    a = x; // parameterized constructor...accepts parameters
    b = y;
}

class point
{
    int x, y;
friend  double distaance(point a,point b);
public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypoint(){
        cout<<"THE POINT IS ("<<x<<", "<<y<<")"<<endl;
    }
};
double distaance(point a,point b){
    double c = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
   cout<<"THE DISTANCE BETWEEN POINTS IS "<<c<<endl;
}
int main()
{ // implicit call of constructor
    complex a(4, 6);
    a.printdata(); // garbage value without constructor..

    // explicit call of constructor
    complex c = complex(5, 7);
    c.printdata();
    //  complex b;  --->no default comnstructor available
    //  b = complex(5, 7); error


    point o(0, 0), p = point(30, 40); //implicit call of constructor
    point e = point(30,40);//explicit call of constructor
    o.displaypoint();
    p.displaypoint();
    e.displaypoint();
    distaance(o, p);//50
    distaance(p, e);//0
    return 0;
}
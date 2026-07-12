// more on c++ friend functions
// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;
// class y;
// class x
// {
//     int data;
//     friend void add(x o1, y o2); //isme y ke liye humne upar y declare kiya haii

// public:
//     void setdata(int c)
//     {
//         data = c;
//     }
// } o1;

// class y
// {
//     int data;
//     friend void add(x o1, y o2);

// public:
//     void setdata(int c)
//     {
//         data = c;
//     }
// } o2;

// void add(x o1, y o2)
// { // x ka ek object y ka ek object
//     cout << "summing data of x and y objects gives me " << o1.data + o2.data;
// }

// int main()
// {
//     o1.setdata(1);
//     o2.setdata(2);
//     add(o1,  o2); //not add(x a ,y b)its like add(int p, int q) also not void add(o1 , o2);
//     return 0;
// }

#include <iostream>
#include <iomanip> //advance example on class
#include <string>  //swapping private data between 2 classes
using namespace std;
class c2;
class c1
{
    int val;
    friend void swap(c1 &x, c2 &y);

public:
    int data(int a)
    {
        val = a;
    }
    void display()
    {
        cout << val << endl;
    }
} x;
class c2
{
    int val;
    friend void swap(c1 &, c2 &); // aisa bhi likh skte hai...

public:
    int data(int a)
    {
        val = a;
    }
    void display()
    {
        cout << val << endl;
    }
} y;

void swap(c1 &x, c2 &y) // c++ reference variable int &a = y.....a denotes value of y in memory......
{
    int tmp = x.val; // int  y = 100;
                     // int &z = y;
    x.val = y.val;   // z = 50; z denotes value of y in memory...z change means y change..
                     // cout<<y ====>50
    y.val = tmp;
}

int main()
{
    x.data(200);
    y.data(2);
    x.display();
    y.display();
    swap(x, y);
    cout << "value after exchange becomes" << endl;
    x.display();
    y.display();
    return 0;
}

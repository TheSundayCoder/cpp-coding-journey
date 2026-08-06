
// #include <iostream>
// #include <cmath>
// using namespace std;

// //if a and b both has some function having same name then ambiguity arises and we have to resolve it using scope resolution operator.
// //base class A & B - > derived class C

// class simpleCalculator
// {
// protected:
//     int a, b;

// public:
//     void setNumbers(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

// protected:
//     void performOperations()
//     {
//         cout << "Addition: " << a + b << endl;
//         cout << "Subtraction: " << a - b << endl;
//         cout << "Multiplication: " << a * b << endl;
//         if (b != 0)
//             cout << "Division: " << a / b << endl;
//         else
//             cout << "Division by zero is not allowed." << endl;
//     }
// };
// class scientificCalculator
// {
// private:
//     int a, b;

// protected:
//     void setNumbers(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

//     void performScientificOperations()
//     {
//         cout << "Power: " << pow(a, b) << endl;
//         cout << "Square Root of a: " << sqrt(a) << endl;
//         cout << "Square Root of b: " << sqrt(b) << endl;
//         cout << "Logarithm of a: " << log(a) << endl;
//         cout << "Logarithm of b: " << log(b) << endl;
//         cout << "Sine of a: " << sin(a) << endl;
//         cout << "exponential of a: " << exp(a) << endl;
//     }
// };

// class HybridCalculator : public simpleCalculator, public scientificCalculator
// {
// public:
//     void show()
//     {
//         performOperations();
//         performScientificOperations();
//     }
// };

// int main()
// {
//     HybridCalculator calc;
//     calc.simpleCalculator::setNumbers(10, 5);
//     calc.show();
//     return 0;
// }

#include <iostream>
using namespace std;

class Base1
{
public:
    void display()
    {
        cout << "Display from Base1" << endl;
    }
};
class Base2
{
public:
    void display()
    {
        cout << "Display from Base2" << endl;
    }
};
class Derived : public Base1, public Base2
{
    int a;
    public:
  void display()
  {
   // Base1::display(); // Resolving ambiguity by specifying which base class's display to call
    //Base2::display(); // Resolving ambiguity by specifying which base class's display to call
      cout << "Display from Derived" << endl;
  }
};
int main()
{
    Base1 b1;
    Base2 b2;
    //    b1.display();  // Calls Base1's display
    //    b2.display();  // Calls Base2's display
    //    Derived d;
    //    //d.display();  // derived me display hai toh wo call hoga varna ambiguity error, must specify which base class's display to call
    //    d.Base1::display();  // Calls Base1's display
    //    d.Base2::display();  // Calls Base2's display

    Derived d;
    d.display(); // Calls Derived's display, which resolves ambiguity
    return 0;
}

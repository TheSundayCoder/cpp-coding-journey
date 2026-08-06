
#include <iostream>
#include <cmath>
using namespace std;

/*
create 2 classes
1.simple calculator ->takes input of 2 number using a utility function and perform +,-,*,/ and display the results using another function and displays result using another function.
2.scientific calculator ->takes input of 2 number using a utility function and performs any four scientific operations of your choice and displays result using another function.

3.create another class hybrid calculator and inherit it using these 2 classes.
Q1>what type of inheritance are you using?  ans.Multiple Inheritance
Q2>which mode of inheritance are you using? ans.public mode of inheritance
Q3>create object of hybrid calculator and display results of simple and scientific calculator.
Q4>How is code reusability implemented?  ans. By using inheritance, we can reuse the functionality of the base classes (simpleCalculator and scientificCalculator) in the derived class (HybridCalculator). This allows us to avoid code duplication and maintain a cleaner code structure.
*/

class simpleCalculator
{
protected:
    int a, b;

public:
    void setNumbers(int x, int y)
    {
        a = x;
        b = y;
    }

protected:
    void performOperations()
    {
        cout << "Addition: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Multiplication: " << a * b << endl;
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    }
};
class scientificCalculator
{
private:
    int a, b;

    void setNumbers(int x, int y)
    {
        a = x;
        b = y;
    }

protected:
    void performScientificOperations()
    {
        cout << "Power: " << pow(a, b) << endl;
        cout << "Square Root of a: " << sqrt(a) << endl;
        cout << "Square Root of b: " << sqrt(b) << endl;
        cout << "Logarithm of a: " << log(a) << endl;
        cout << "Logarithm of b: " << log(b) << endl;
        cout << "Sine of a: " << sin(a) << endl;
        cout << "exponential of a: " << exp(a) << endl;
    }
};

class HybridCalculator : public simpleCalculator, public scientificCalculator
{
public:
    void show()
    {
        performOperations();
        performScientificOperations();
    }
};

int main()
{
    HybridCalculator calc;
    calc.simpleCalculator::setNumbers(10, 5);
    calc.show();
    return 0;
}
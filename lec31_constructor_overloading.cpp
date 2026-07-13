// constructor overloading
#include <iostream>
using namespace std;

class ransom
{
    int a, b;

public:
    ransom(int x, int y /*= 0*/)
    {
        a = x;
        b = y;
    }
    ransom()
    {
        a = 0;
        b = 0;
    }
    ransom(int c)
    {
        a = c;
        b = 0;
    }

    void display()
    {
        cout << "THE RANSOM COMPLEX IS " << a << " + i" << b << endl;
    }
};
int main()
{
    ransom a(4, 5); // parameterized constructor
    ransom b;       // default constructor
    ransom c(4);
    a.display();
    b.display(); // value doge toh parameterized hoga...nhi doge toh default constructor hoga
    c.display();
    return 0;
}

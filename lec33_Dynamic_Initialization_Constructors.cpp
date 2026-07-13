// Dynamic Initialization of objects using Constructors
#include <iostream>
using namespace std;
class BankDeposit
{
    int principal;
    int years;
    float InterestRate;
    float returnValue;

public:
    BankDeposit()
    { // default constructor...does nothing this time.
    }
    BankDeposit(int p, int y, float r) // r can be a value like 0.04
    {
        principal = p;
        years = y;
        InterestRate = r;
        returnValue = principal;
        for (int i = 0; i < y; i++)
        {
            returnValue = returnValue * (1 + InterestRate);
        }
    }
    BankDeposit(int p, int y, int r) // r can be a value like 14 for 14%
    {
        principal = p;
        years = y;
        InterestRate = float(r) / 100; // converting percentage to decimal
        returnValue = principal;
        for (int i = 0; i < y; i++)
        {
            returnValue = returnValue * (1 + InterestRate);
        }
    }
    void show()
    {
        cout << "Principal amount was " << principal << endl;
        cout << "Return value after " << years << " years is " << returnValue << endl;
    }
};
int main()
{
    BankDeposit bd1, bd2, bd3; // we can define this way by help of default constructor..
    int p, y, R;
    float r;
    cout << "enter principal , years and rate of interest in decimal" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();
    cout << "enter principal , years and rate of interest in percentage" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    bd3.show(); // random trash values will be printed as we have not initialized the object bd3 with any values.
    return 0;
}
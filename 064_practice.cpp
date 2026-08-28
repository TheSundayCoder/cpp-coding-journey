
#include <iostream>
using namespace std;
class rational
{
    int p, q;
    float rat;

public:
    friend ostream &operator<<(ostream &o, rational &r);
    rational operator+(rational r)
    {
        rational r1;
        r1.p = (p * r.q) + (r.p * q);
        r1.q = q * r.q;
        // r1.rat = r1.p/r1.q;

        return r1;
    }
    rational(int p = 0, int q = 0)
    {
        this->p = p;
        this->q = q;
    }
};
ostream &operator<<(ostream &o, rational &r)
{
    o << r.p << "/" << r.q;
    return o;
}
int main()
{
    rational r1(2, 3), r2(3, 4), r3;
    r3 = r1 + r2;
    cout << "sum of " << r1 << " and " << r2 << " is " << r3;
    return 0;
}
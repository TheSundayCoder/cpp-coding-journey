// a -> b -> c and so on ....
#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int r)
    {
        roll_no = r;
    }
    void get_roll_no()
    {
        // int x;
        // cin>>x;
        // set_roll_no(x);
        cout << "Roll No: " << roll_no << endl;
    }
}; // s;
class exam : public student // roll no protected banke milega ..we can inherit it further...
{
protected:
    float maths, physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void get_marks()
    {
        cout << "Roll No: " << roll_no << endl;
        cout << "Maths: " << maths << endl;
        cout << "Physics: " << physics << endl;
    }
};
class result : public exam
{
    float percentage ; 
    public : void display_result()
    {
        percentage = ((maths + physics) / 2);
        get_marks();
        cout << "Percentage: " << percentage << endl;
    }
};

int main()
{
    // s.get_roll_no();
     result harry;
     harry.set_roll_no(420);
        harry.set_marks(94 , 95.0);
        harry.display_result();


/*
1. if we are inheriting b from a and c from b then its called as multilevel inheritance
2.student(a) -> exam(b) -> result(c)
3.a is base class for b and b is base class for c
4.A->B->C is called inheritance path
*/

    return 0;
}
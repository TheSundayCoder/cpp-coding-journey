
#include <iostream>
using namespace std;
/*
student -> test
student -> sports
test & sports -> result
*/

class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int r)
    {
        roll_no = r;
    }
    void print_roll_no(void)
    {
        cout << "Roll No: " << roll_no << endl;
    }
};

class test : virtual public student   
{ // virtual private and virtual protected are also possible

protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Marks: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class sports :public virtual student
{
   protected:
    float score;    
    public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Sports Score: " << score << endl;
    }
};
class result : public test, public sports
{
    float total ; // = maths + physics + score ; ye error dega bcz score maths physics variable base classes se aate hain and unki value us waqt properly initialize ya resolve nhi hoti hain....
public:
   
    void print_total()
    {
        total = maths + physics + score;
        print_roll_no(); //no ambiguity bcz student class is virtually inherited
        print_marks();
        print_score();
        cout << "Total: " << total/3<<"%" << endl;
    }
};
int main()
{
 result res1;
    res1.set_roll_no(420);
    res1.set_marks(90.0, 95.0);
    res1.set_score(95.0);
   
    res1.print_total();
    return 0;
}
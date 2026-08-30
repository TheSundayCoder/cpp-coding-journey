
#include <iostream>
using namespace std;
class Fulltime{
    protected:
   int employee_id , salary;
   string name;
   public:
      Fulltime(int a =0 ,int b =0 ,string s =""){
        employee_id = a;
        salary = b;
        name = s;
      }
      void display(){
        cout<<endl<<"id : "<<employee_id<<" name : "<<name<<" salary : "<<salary<<endl;
      }
};
class Parttime:public Fulltime{
    int daily_wages;
    public:
    Parttime(int a , int b , string s):Fulltime(a,b,s){};
    void show(){
        daily_wages = salary/30;
        display();
        cout<<"daily wages :"<<daily_wages;
    }
};
int main() {
    Parttime p(123 , 3000000 , "Aditya");
    p.show();
    Fulltime a(001,4000000,"Adi");
    a.display();
    return 0;
}

#include <iostream>
using namespace std;
class student{
    int roll , marks1,marks2,marks3;
    string name;
    int percentage(){
      return  ( marks1+marks2+marks3)/3;
    }
    public:
    student(){};
    student(int r,int m1, int m2,int m3, string s){
        roll = r;
        marks1 = m1;
        marks2= m2 ;
        marks3 = m3;
        name = s;

    }
    void setdata (int r,int m1, int m2,int m3, string s){
        roll = r;
        marks1 = m1;
        marks2= m2 ;
        marks3 = m3;
        name = s;

    }
    void getdata(){
       int n = percentage();
       cout<<roll<<" "<<name<<" status ";
       if(n>=60){
        cout<<"A+";
       }
       else if(n>=33 && n <60){
        cout<<"b";
       }
       else
       {
        cout<<"c fail";
       }
    }
};
int main() {
    student s(001,97,89,91,"Aditya sinha");
    s.getdata();
    return 0;
}

// #include <iostream>
// using namespace std;
// //218

// class Innova{
//     public:
//         static int price;
//         static int getPrice(){
//             return price;
//         }

// };
// int Innova::price = 1000000;

// int main() {
//     cout<<Innova::getPrice()<<endl;
//     Innova i1,i2,i3;
//     cout<<i1.getPrice()<<endl;
//     cout<<i2.getPrice()<<endl;
//     cout<<i3.getPrice()<<endl;
//     cout<<Innova::price<<endl;
//     cout<<i1.price<<endl;
//     return 0;
// }




#include <iostream>
using namespace std;

class student{
    int roll;string name;
    static int count;
    public:
    student(string n=""){
        count++;
        roll = count;
        name = n;
    }
    static int getCount(){
        return count;
    }
    int rollNo(){
        cout<<name<<" ";
        return roll;
    }
};
int student::count = 0;

int main() {
    student s1("manish"),s2("john"),s3("jane");
    cout<<"Total Students: "<<student::getCount()<<endl;
    cout<<"Roll No of s1: "<<s1.rollNo()<<endl;
    cout<<"Roll No of s2: "<<s2.rollNo()<<endl;
    cout<<"Roll No of s3: "<<s3.rollNo()<<endl;
    return 0;
}
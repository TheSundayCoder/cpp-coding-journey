
#include <iostream>
using namespace std;

int main() {
    float salary , per_allowances , per_deduction;
    cout<<"ENTER BASIC SALARY , PERCENTAGE OF ALLOWANCES , PERCENTAGE OF DEDUCTIONS"<<endl;
    cin>>salary>>per_allowances>>per_deduction;
float netSalary = salary + salary * (per_allowances/100) - salary *(per_deduction/100); 

cout<<"Net salary = "<<netSalary;
    return 0;
}
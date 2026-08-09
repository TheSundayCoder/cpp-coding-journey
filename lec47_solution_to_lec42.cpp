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

#include <iostream>
#include <cmath>
using namespace std;
class simpleCalculator
{
    protected:
    int a , b;
    
   void setnumber(){
    
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    
   }
   protected:

   void performOperations(){
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
   }
   
};
class scientificCalculator
{
  protected:  int a ,b ;
    
  
    void performOperations(){
        cout<<"The value of a^b is "<<pow(a,b)<<endl;
        cout<<"The value of sqrt(a) is "<<sqrt(a)<<endl;
        cout<<"The value of sqrt(b) is "<<sqrt(b)<<endl;
        cout<<"The value of log(a) is "<<log(a)<<endl;
        cout<<"The value of log(b) is "<<log(b)<<endl;
    }
    public:   void setnumber(){
        cout<<"Enter the value of a and b"<<endl;
        cin>>a>>b;
    }
};
class hybridcalculator:public simpleCalculator,public scientificCalculator{
 public:  void show(){
    simpleCalculator::a = scientificCalculator::a;
    simpleCalculator::b = scientificCalculator::b;
    simpleCalculator::performOperations();
    scientificCalculator::performOperations();
   }
};
int main() {
    hybridcalculator h;
    h.scientificCalculator::setnumber();
h.show();
    return 0;
}
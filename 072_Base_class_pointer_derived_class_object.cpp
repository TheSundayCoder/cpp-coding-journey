};
class Derived:public base{
    public:
    void fun2(){
        cout<<"derived class function2"<<endl;
    }
};
int main() {
    Derived d;
        base *b;
        b = &d;
        b ->fun1();
      //  b->fun2(); // This line will cause a compilation error because fun2() is not a member of base class.
      base *v = new Derived; //OR new derived();
      v ->fun1();
      //error v->fun2(); // This line will also cause a compilation error because fun2() is not a member of base class.



      //Derived *i = new Base; // This line will cause a compilation error because you cannot assign a base class pointer to a derived class pointer without an explicit cast.

    return 0;
}

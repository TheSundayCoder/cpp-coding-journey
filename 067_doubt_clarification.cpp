
#include <iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"moye moye";
    }

};
class derived:private Base{
};
int main() {
    derived d;
    return 0;
}
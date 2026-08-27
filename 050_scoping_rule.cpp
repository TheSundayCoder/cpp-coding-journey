
#include <iostream>
using namespace std;
int x = 10;
int main() {
    cout<<x; //10
    int x = 20;
    {
        int x = 30;
        cout<<endl<<x<<endl; //30
        cout<<::x<<endl; //10...scope resolution operator
    }
    cout<<x<<endl; //20
cout<<::x; //10......scope resolution operator
    return 0;
}
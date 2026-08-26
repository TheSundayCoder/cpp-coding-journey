
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int& y = x; //or int &y = x;
cout<<x<<endl;
y++;
cout<<x<<endl;

cout<<&x<<endl<<&y;
    return 0;
}
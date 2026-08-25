
#include <iostream>
using namespace std;

int main() {
    int *o = new int[5]; //size cant be changed later
    o[0] = 12;
    o[1] = 13;

    cout<<o[1]<<endl;

delete []o;
o = nullptr;

    return 0;
}

#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {2,3,4,5,6,7};
    v.push_back(20);
    v.push_back(30);
    v.pop_back();
    for(int x :v){
        cout<<x<<" ";
    }
    cout<<endl<<"using iterator"<<endl;

    vector<int>::iterator itr;
    for(itr = v.begin(); itr !=v.end();itr++){
        cout<<*itr<<" ";
    }
    
    return 0;
}
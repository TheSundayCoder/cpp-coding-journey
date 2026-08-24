
#include <iostream>
using namespace std;

int main() {
    int A[2][3] = {1,2,3,4,5,6}; //or{{1,2,3},{4,5,6}}
    int B[2][3] = {7,8,9,10,11,12};
    int C[2][3];
    for(int i = 0; i < 2 ; i++){
        for(int j = 0 ; j < 3; j++){
            C[i][j] = A[i][j] + B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

   int D[3][3];
   for(auto &x : D){ //syntax for for each loop must be same as shown for multidimensional array;
    for(auto& y : x){
        cin>>y;
    }
    cout<<endl;
   }

     for(auto &x : D){
    for(auto& y : x){
        cout<<y<<" ";
    }
cout<<endl;}

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n]; //this isnt valid in c++ but valid in c99 standard...c++ me n ka value constant hona chahiye...but c99 me allowed hai...
     for(int i = 0 ; i < n ; i ++){
        cin>>a[i];
     }
      for(int i = 0 ; i < n ; i ++){
        cout<<a[i]<<endl;
      }
    return 0;
}

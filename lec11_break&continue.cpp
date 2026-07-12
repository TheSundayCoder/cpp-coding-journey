//break and continue

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    // for(int i = 0; i <400;i++){
        
    //     if(i%2==1){
    //         break;
    //     }
    //     cout<<i<<endl;

    // }

   
   
   //continue
    for(int i = 0; i <=100; i++){
        if(i%2==0){
            continue;  //itna part skip krdega yaani jo  even hai unko print nhi krega....
        }
        cout<<endl<<i;    }

    return 0;
}

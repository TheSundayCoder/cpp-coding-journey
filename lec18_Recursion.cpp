//recursion and recursive functions...
// #include<iostream>
// #include<iomanip>
// using namespace std;

// int sum(int n){
//     if(n==1||n==0)
//     {
//         return 1;
//     }
//     else if(n<0){
//         cout<<"invalid input ";
//         return n;
//     }
//     return n*sum(n-1)   ;
// }
// int main(){int n;
//     cin>>n;
//     cout<<sum(n);
//     return 0;
// }

#include<iostream>
#include<iomanip>
using namespace std;
 
int fabo(int a){///fibonacii series......
   if(a==2||a==1){
    return 1;
   }
   else if(a<=0){
    cout<<"invalid input ";
    return a;
   }
  return fabo(a-1)+fabo(a-2);
}
int main(){int a;
    cin>>a;
    cout<<fabo(a)<<endl;
    for(int i = 1; i<=10;i++){//fibonacii till 10 terms
        cout<<fabo(i)<<" , ";
    }
    return 0;
    
}

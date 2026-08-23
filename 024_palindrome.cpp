#include<iostream>
using namespace std;
int main()
{ int n ; cin>>n;
    int rev=0;
    int r;
    int m=n;
    
    while(n>0){
        r = n%10;
        n=n/10;
        rev = rev*10 + r;
    }
    if(rev ==m){
        cout<<"palindrome";
    }
    else
   cout<<"not a palindrome";
   return 0;
    //write a loop to find reverse of a number
    //check it is a palindrome
}
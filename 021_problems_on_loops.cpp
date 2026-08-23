/*Write a loop to display Digits of a given number in reverse

function Digits(int n)



output

cout<<digit<<" "

#include<iostream>
using namespace std;

void Digits(int n)
{
    int digit;
    while(n>0){
        int digit =  n %10;
        n = n/10;
        cout<<digit<<" ";
    }
    //display digits in reverse, seperated by space
}





2--->
Write a loop to find sum of cubes of digits of a number and check if its Armstrong number

#include<iostream>

using namespace std;

void Armstrong(int n)
{
    int sum=0,r;
    int m=n;
    
    //write a loop to find sum of cubes of digits
    //check if a number is Armstrong
    while(n>0)
{
    r = n%10;
    n = n/10;
    sum += r*r*r;
}    
     if(sum==m)
        cout<<"armstrong";
    else
        cout<<"not armstrong";
}




3---->
Write a loop for Reversing the Digits of a Number



function Reverse(int n)

output

cout<<rev



#include<iostream>
using namespace std;

void Reverse(int n)
{
    int rev=0;
    int m=n;
    int r;
    
    while(n>0){
        r = n%10;
        n = n/10;
        rev = rev*10 + r;
    }
    //write loop for finding reverse of number and print it
    cout<<rev;
}



4--->

Write a loop to reverse a number and then check if its a Palindrome

PALINDROME -- reverse of a number is equal to a number



function Palindrome(int n)



output

cout<<"palindrome";

cout<<"not a palindrome";




#include<iostream>
using namespace std;

void Palindrome(int n)
{
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
    //write a loop to find reverse of a number
    //check it is a palindrome
}
*/
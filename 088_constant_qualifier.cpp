
#include <iostream>
using namespace std;
//234


class Demo{
    public:
    int x =10 ,y;

    void fun() const{ //const member function
        //x++; //error
        //++y; //error
        cout<<x<<endl;
    }
};

void fun(const int &a , int &b){
 //   ++a; error
    ++b;
cout<<a<<" "<<b<<endl;
}

int main()
{
//     const int x = 10; //or int const x = 10;
//    // x++ or x = 30 -> error
//     cout<<x;

// int x = 10;
// const int *ptr = &x; or int const *ptr = &x; //pointer to constant integer
// x = 11; int y = 90;
// cout<<*ptr<<endl; //11
// //++(*ptr); //error
// ptr = &y; //ok
// //++(*ptr); //error
 

// int x = 10 , y = 20;
// int *const ptr = &x; //constant pointer to integer
// // ptr = &y; //error
// ++(*ptr); //ok
// cout<<*ptr<<endl; //11



// int x = 10 , y = 20;
// const int *const ptr = &x;
// //ptr = &y; //error
// //++(*ptr); //error


// Demo d;
// d.fun();

int x = 10 , y = 20;
fun(x,y); //ok
    return 0;
}
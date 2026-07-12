//call by value and call by referencee...
#include<iostream>
#include<iomanip>
using namespace std;

// void swap(int a, int b){ this is call by value......numbers ka copy leke operate krega......  ye nhi swap kregaaaaaaa
//   int c = a;
//   a = b;
//   b=c;
// }
//  int main(){
//     int a = 4,b=5;
//     swap(a,b);
//     cout<<a<<endl<<b;     ye wale a and b main ke a and b ko paste krega kyuki void me ye a and b ka copy gya hai whi baat hai mai tumhe 
                            //song bheju and tum wo song ko edit kro toh mere song pe koi asar nhi padega....
//  }


//************************call by reference(pata dediya...address)***********************************


void swappointer(int*a,int*b){  //this will swap a and b using pointer reference
   int c = *a;
   *a = *b;
   *b = c;
}
//call by reference method 2....

//int &
void swapReferenceVariable(int &a,int &b){  // c++ reference variable swap method
   int c = a;  //a point kr rha x ka value in memory...a chhedo toh memory me x ka value badal jayegaa..
   a = b;
   b = c;  
  // return a;        
}

int main(){
    int x = 4,y = 5;
cout<<" value of x is "<<x<<" value of y is "<<y;
cout<<endl<<&x;
//swappointer(&a,&b);
swapReferenceVariable(x,y);//=40;  //use any one of this..

    cout<<endl<<"after swap ,  the  value of x  is "<<x<<" value of y is "<<y;
cout<<endl<<&x; //address of a is same but value badal diya hmne void function meeee......
                /*pehle hmne a ka address and b ka address bheja void me 
                fir a ke address pe jo value tha wo c me store kia
                fir a ke address ka value b ke barabar kr dia
                b ke address ka value a ke barabar krdia through c
                matlab us address pe kya value rhega hmne wohi change krdiaa lol
                 memory computer ki toh ek hi hai har function ke liye*/

    return 0;
}

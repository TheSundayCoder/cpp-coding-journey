// c++ memory allocation & using arrays in classes
//  #include<iostream>
//  #include<iomanip>
//  #include<string>
//  using namespace std;
//  class shop{
//      int itemId[100];
//      int itemprice[100];
//      int n;
//   public:

//  void setPrice();
//  void getPrice();
// };
// void shop:: setPrice(){
//     cout<<"enter number of items "<<endl;

//     cin>>n;
//     for(int i = 0; i <n;i++){
//         cout<<"enter itemId of item "<<i+1<<endl;
//         cin>>itemId[i];

//         cout<<"enter itemprice of item "<<i+1<<endl;
//         cin>>itemprice[i];

//     }
// }
// void shop:: getPrice(){
//   for(int i = 0; i < n; i++){
//     cout<<"item id of "<<1+i<<" item is "<<itemId[i];
//     cout<<" item price of "<<1+i<<" item is "<<itemprice[i];

//   }
// }

// int main(){
//     shop dukan;
//     dukan.setPrice();
//    dukan.getPrice();
//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;
// class shop
// {
//     int itemId[100];
//     int itemPrice[100];
//     int counter;

// public:
//     void initialCounter() { counter = 0; }
//     void setdata()
//     {
//         cout << "Enter ID OF ITEM " << counter + 1 << endl;
//         cin >> itemId[counter];
//         cout << "Enter price OF ITEM " << counter + 1 << endl;
//         cin >> itemPrice[counter];
//         counter++;
//     }
//     void getdata()
//     {
//         for (int i = 0; i < counter; i++)
//         {
//             cout << " ID OF ITEM " << i + 1 << "  IS " << itemId[i] << endl;

//             cout << " price OF ITEM " << i + 1 << " IS " << itemPrice[i] << endl;
//         }
//     }
// };
// int main()
// {
//     shop dukan;
//     dukan.initialCounter();
//     int a;
//     cout << "enter number of items (must not be more than 100)" << endl;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         dukan.setdata();
//     }
//     dukan.getdata();
//     return 0;
// }


#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class shop{
   // int n = 100;
   // int itemId[n]; not valid in c++;
    int itemPrice[100];
    int itemId[100];
    int counter;
    public: void initialCounter(){counter = 0;}
    void setPrice();
    void getPrice();
};
void shop::setPrice(){
 cout<<"ENTER ID OF YOUR ITEM "<<counter + 1<<endl;
 cin>>itemId[counter];
 cout<<"ENTER price OF YOUR ITEM "<<counter + 1<<endl;
cin>>itemPrice[counter];
counter++;
    }
    void shop::getPrice(){
        for(int i = 0;i < counter;i++){
            cout<<"THE PRICE OF ITEM "<<i+1<<" WITH ID "<<itemId[i]<<" IS "<<itemPrice[i]<<endl;
        }
    }

int main(){
   shop dukaan;
   int n;
   cout<<"ENTER NUMBER OF ITEMS "<<endl;
   cin>>n;
   dukaan.initialCounter();
   for(int i = 1; i <=n; i++){
    dukaan.setPrice();
   }
   dukaan.getPrice();
    return 0;
}

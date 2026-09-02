
#include <iostream>
using namespace std;
namespace First{
void fun(){
    cout<<"FIRST"<<endl;
}}

namespace Second{
void fun(){
    cout<<"Second"<<endl;
}}

// int main() {
//     First::fun();
//     Second::fun();
//     return 0;
// }

using namespace First;
int main() {
    fun();
    Second::fun();
    return 0;
}
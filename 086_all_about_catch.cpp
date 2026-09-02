
#include <iostream>
using namespace std;

int main() {
    try{
        throw 1.5f;
        throw 34;
        throw "hello world";
        throw 'a';
        throw 40;
    }
    catch(float e){
        cout<<"float exception caught"<<endl;
    }
    catch(int e){
        cout<<"int exception caught"<<endl;
    }
    catch(const char* e){
        cout<<"string exception caught"<<endl;
    }
    catch(...){   //catch() is error something must be catched
        cout<<"default exception caught"<<endl;
    }
    return 0;
}
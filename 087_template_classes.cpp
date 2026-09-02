
#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
    T *stk;
    int top;
    int size;

public:
    Stack(int size)
    {
        this->size = size;
        stk = new T[size];
        top = -1;
    }
    void push(T x);
    T pop();
};
template<class T>
void Stack<T>::push(T x){
   if(top==size-1){
    cout<<"Stack is full"<<endl;
   }
   else{
    top++;
    stk[top]=x;
   }
}

template<class T>
T Stack<T>::pop(){
    T x;
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    else{
        x=stk[top];
        top--;
        return x;
    }
}



int main()
{
  Stack<int> s(10);
  s.push(10);
  s.push(20);
  cout<<s.pop()<<endl;
    return 0;
}
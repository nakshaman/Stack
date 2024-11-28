#include <iostream>
using namespace std;
class Stack{
    public:
    int top;
    int size;
    int *arr;
    Stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
    }
    void push(int x){
        if(size-top>1){
            arr[++top]=x;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    void empty(){
        if(top==-1){
            cout<<"Stack empty"<<endl;
        }
    }
    int topp(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }

};
int main (){
    Stack s(7);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.topp();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int top;
    int *arr;
    int size;
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
        top--;
    }
    void isempty(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Not empty"<<endl;
        }
    }
    int topp(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
};
int main (){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    cout<<s.topp()<<endl;
    return 0;
}
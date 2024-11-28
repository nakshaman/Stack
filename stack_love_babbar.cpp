#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int top;
    int size;
    int *arr;
    Stack(int size){
        this -> size=size;
        top=-1;
        arr=new int[size];
    }
    void push(int x){
        if(size-top>1){
            top++;
            arr[top]=x;
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
    int topp(){
        if(top>=0 ){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool empty(){
        if(top==-1){
            cout<<"Stack empty"<<endl;
        }
        else{
            cout<<"Stack is not empty"<<endl;
        }
    }
};
int main (){
    Stack s(5);

    s.push(4);
    s.push(7);
    s.push(11);
    s.push(4);
    s.push(7);
    s.push(11);
    // cout<<s.topp()<<endl;
    // s.pop();
    // cout<<s.topp()<<endl;
    // s.pop();
    // cout<<s.topp()<<endl;
    // s.pop();
    // cout<<s.topp()<<endl;
    // if(s.empty()){
    //     cout<<"Stack is empty mere dost"<<endl;
    // }
    // else{
    //     cout<<"Stack has something"<<endl;
    // }
    return 0;
}
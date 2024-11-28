#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int top=-1;
    // int size;
    int arr[5];
    void push(int x){
        if(top>(4)){
            cout<<"Stack is full"<<endl;
        }
        arr[++top]=x;
    }
    void pop(){
        top--;
    }
    int empty(){
        if(top==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    int topp(){
        if(empty()){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        else{
            return arr[top];
        }
    }
    int size(){
        return (top+1);
    }
};
int main (){
    Stack s;
    s.push(4);
    s.push(7);
    s.push(11);
    s.push(12);
    s.push(13);
    cout<<s.size()<<endl;
    // cout<<s.topp()<<endl;
    // s.pop();
    // cout<<s.topp()<<endl;
    return 0;
}
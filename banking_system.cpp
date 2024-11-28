/*
    Banking System
    This is project on banking system. So basically it has 3 properties
    (attributes) account holder name, account number, balance.
    Which is private so no one can access these attributes from the main
    function. So the security will be top-notch.It is a real world
    project so It has 4 methods withdraw,deposit,account slip, loan.
    it will help the user to withdraw money,deposit money and check
    the latest status of the account.
*/

#include <bits/stdc++.h>

using namespace std;
class Bank{
    private:
    string acc_no;
    float balance;
    string holder_name;

    public:
    Bank(){}
    Bank(string acc_no,float balance,string holder_name){
        this->acc_no=acc_no;
        this->balance=balance;
        this->holder_name=holder_name;
    }
    void deposit(int x){
        balance+=x;
        cout<<"Account Holder name : "<<holder_name<<endl;
        cout<<"Balance is : "<<balance<<endl;
    }
    void withdraw(int x){
        if((balance-x)>=0){
            balance-=x;
            cout<<"Account Holder name : "<<holder_name<<endl;
            cout<<"Balance is : "<<balance<<endl;
        }
        else{
            cout<<"Your balance is already "<<balance<<" you can't withdraw money"<<endl;
        }
    }
    void acc_slip(){
        cout<<"Account Holder name : "<<holder_name<<endl;
        cout<<"Balance is : "<<balance<<endl;
        cout<<"Account number is "<<acc_no<<endl;
    }
    void loan(){
        int x,months;
        cout<<"Enter the loan amount you want to take"<<endl;
        cin>>x;
        balance+=x;
        cout<<"You have been sanctioned loan amount of "<<x<<". now your account balance is "<<balance<<endl;
        cout<<"In how many months you want to repay the loan"<<endl;
        cin>>months;
        cout<<"You have to pay "<<(x/months)+4*(x/100)<<" on 30th of every month for "<<months<<endl;
    }
    
};

int main (){
    string acc_no;
    float balance;
    string holder_name;
    cout<<"Enter the account number"<<endl;
    cin>>acc_no;
    if(acc_no.length()>=10){
        cout<<"Account number should be of atleast 10 digits try again "<<endl;
    }
    cout<<"Enter the balance of your account"<<endl;
    cin>>balance;
    cin.ignore();
    cout<<"Enter the account holder name"<<endl;
    getline(cin,holder_name);
    Bank a1(acc_no,balance,holder_name);
    string username;
    cout<<"Enter your username : "<<endl;
    cin>>username;
    cout<<"Enter your password"<<endl;
    string password;
    cin>>password;
    while(true){

        while(true){
            if(username=="nakshaman" && password=="naksh"){
                break;
            }
            else{
                cout<<"Wrong password"<<endl;
                exit(0);
            }
        }
        string task;
        cout<<"withdraw or deposit or slip or loan or exit"<<endl;
        cin>>task;
        if(task=="withdraw"){
            int x;
            cout<<"Enter the amount you want to withdraw"<<endl;
            cin>>x;
            a1.withdraw(x);
        }
        else if(task=="deposit"){
            int x;
            cout<<"Enter the amount you want to deposit"<<endl;
            cin>>x;
            a1.deposit(x);
        }
        else if(task=="slip"){
            a1.acc_slip();
        }
        else if(task=="loan"){
            a1.loan();
        }
        else if(task=="exit"){
            return 0;
        }
        else{
            cout<<"Wrong input Please try again"<<endl;
        }
    }
    return 0;
}
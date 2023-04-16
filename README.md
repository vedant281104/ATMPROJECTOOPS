# ATMPROJECTOOPS
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class YourBank
{
public:
    string name;
    int accountno;
    int pin;
    string type;
    int amount;
    int total;

    void setdata()
    {
        cout << "Enter Account Holder name : ";
        cin >> name;
        getline(cin, name);
        cout << "Enter Account Number : ";
        cin >> accountno;
        cout<<"Enter your PIN : ";
        cin>>pin;
        cout << "Enter Account Type : ";
        cin >> type;
        cout << "Enter balance : Rs ";
        cin >> total;
    }
    void showdata()
    {
        cout << "Name : " << name << endl;
        cout << "Account Number : " << accountno << endl;
        cout << "Account Type : " << type << endl;
        cout << "Balance : " << total << endl;
    }
    void deposit()
    {
        cout << "Enter the amount to be Deposited : Rs ";
        cin >> amount;
    }
    void showbalance()
    {
        int balance;
        balance = total + amount;
        cout << "Total balance in your account is Rs " << balance;
    }
    void withdrawl()
    {
        int a, avai_balance;
        cout << "Enter the amount to be withdrawed : Rs ";
        cin >> a;
        avai_balance = total - a;
        cout << "The available balance in your account is : Rs " << avai_balance;
    }
};
int main()
{

    cout << "                                    Welocme to YourBank                             ";
    cout << endl;
    cout << "We respect your trust " << endl;
    cout << "Stay Involved" << endl;
    cout << endl;
    YourBank yb;
    yb.setdata();
    yb.showdata();
    yb.deposit();

    cout << "Enter 1 for checking balance  " << endl;
    cout << "Enter 2 for withdrawing amount  " << endl;
    int choice;
    cout << "Enter the Number : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        yb.showbalance();
        break;
    case 2:
        yb.withdrawl();
        break;
    }
    return 0;
}

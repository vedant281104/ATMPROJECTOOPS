#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class YourBank {
public:
    string name;
    int accountno;
    int pin;
    string type;
    int amount;
    int total;

    // Function to set account data
    void setdata() {
        cout << "Enter Account Holder name: ";
        cin.ignore(); // To ignore the newline character from previous input
        getline(cin, name); // Use getline to capture full name
        cout << "Enter Account Number: ";
        cin >> accountno;
        cout << "Enter your PIN: ";
        cin >> pin;
        cout << "Enter Account Type: ";
        cin >> type;
        cout << "Enter initial balance: Rs ";
        cin >> total;
    }

    // Function to show account data
    void showdata() {
        cout << "\nAccount Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountno << endl;
        cout << "Account Type: " << type << endl;
        cout << "Balance: Rs " << total << endl;
    }

    // Function to deposit amount
    void deposit() {
        cout << "Enter the amount to be Deposited: Rs ";
        cin >> amount;
        total += amount; // Update the total balance
        cout << "Deposited successfully! New balance: Rs " << total << endl;
    }

    // Function to show the current balance
    void showbalance() {
        cout << "Total balance in your account is: Rs " << total << endl;
    }

    // Function to withdraw amount
    void withdraw() {
        int a;
        cout << "Enter the amount to be withdrawn: Rs ";
        cin >> a;
        if (a > total) {
            cout << "Insufficient balance!" << endl;
        } else {
            total -= a; // Deduct the amount from total balance
            cout << "Withdrawn successfully! New balance: Rs " << total << endl;
        }
    }
};

int main() {
    cout << "                                    Welcome to YourBank                             ";
    cout << endl;
    cout << "We respect your trust " << endl;
    cout << "Stay Involved" << endl;
    cout << endl;

    YourBank yb;
    yb.setdata();
    yb.showdata();

    int choice;
    cout << "\nEnter 1 for checking balance" << endl;
    cout << "Enter 2 for depositing amount" << endl;
    cout << "Enter 3 for withdrawing amount" << endl;
    cout << "Enter the Number: ";
    cin >> choice;

    switch (choice) {
        case 1:
            yb.showbalance();
            break;
        case 2:
            yb.deposit();
            break;
        case 3:
            yb.withdraw();
            break;
        default:
            cout << "Invalid choice! Please select a valid option." << endl;
            break;
    }

    return 0;
}

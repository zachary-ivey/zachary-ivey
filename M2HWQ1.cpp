//CSC 134
//M2HW - SILVER
//Zachary Ivey
//10/5/2025

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double startingBalance, deposit, withdrawal, finalBalance;
    int accountNumber = 60000;
    //THis is the account number

    cout << "Enter your name: ";
    getline(cin, name);
    //Gets the clients name

    cout << "Enter starting account balance: $";
    cin >> startingBalance;

    cout << "Enter deposit amount: $";
    cin >> deposit;

    cout << "Enter withdrawal amount: $";
    cin >> withdrawal;
    //Allows the user to enter the amounts in the account

    finalBalance = startingBalance + deposit - withdrawal;
    //Calculates the account amount

     cout << "\n--- Account Summary ---" << endl;
    cout << "Name on the account: " << name << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Final account balance: $" << finalBalance << endl;
    //displays info

    return 0;
}
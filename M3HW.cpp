//CSC 134
//M3HW1 -Gold
//Zachary Ivey 
// 10/17/2025

#include <iostream>
using namespace std;

void question1();
void question2();
void question3();
void question4();

int main() {

cout << "Which question would you like to run?" << endl;
cout << "1. Question 1 - Chatbot" << endl;
cout << "2. Question 2 - Receipt Calculator" << endl;
cout << "3. Question 3 - Adventure Game" << endl;
cout << "4. Question 4 - Math Practice Game" << endl;

int choice;
cin >> choice;

if (choice == 1) {
        question1();
    }
    else if (choice == 2) {
        question2();
    }
    else if (choice == 3) {
        question3();
    }
    else if (choice == 4) {
        question4();
    }
    else if (choice == 0) {
        cout << "Bye!" << endl;
        return 0;
    }
    else {
        cout << "Not a valid choice." << endl;
    }

    return 0;
}
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
    cout << "Please pick 1, 2, 3, or 4" << endl;
}

    return 0;
}

//Chatbot program
void question1() {
    cout << "Question 1: Chatbot" << endl;

    char answer[10];
    cout << "Hello, I’m a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no: ";
    cin >> answer;

    if (answer[0] == 'y' || answer[0] == 'Y') {
        cout << "That’s great! I’m sure we’ll get along." << endl;
    } 
    else if (answer[0] == 'n' || answer[0] == 'N') {
        cout << "Well, maybe you’ll learn to like me later." << endl;
    } 
    else {
        cout << "If you’re not sure… that’s OK." << endl;
    }
}

//Receipt Calculator
void question2() {
    cout << "Question 2: The Receipt Calculator" << endl;

     double meal_price, tax, tip = 0, total;
    int order_type;  
    double TAX_RATE = 0.07;  
    double TIP_RATE = 0.15;  

    cout << "How much was your meal? $";
    cin >> meal_price;

    cout << "For Dine in type 1 or for Carry Out type 2";
    cin >> order_type;

     tax = meal_price * TAX_RATE;

    if (order_type == 1) {
        tip = meal_price * TIP_RATE;
    }

    total = meal_price + tax + tip;

    // Manual rounding function:
    auto roundToCents = [](double amount) {
        return int(amount * 100 + 0.5) / 100.0;
    };

    // Round all values
    meal_price = roundToCents(meal_price);
    tax = roundToCents(tax);
    tip = roundToCents(tip);
    total = roundToCents(total);

    cout << endl;
    cout << "Receipt:" << endl;
    cout << "-----------------" << endl;
    cout << "Meal: $" << meal_price << endl;
    cout << "Tax:  $" << tax << endl;
    cout << "Tip:  $" << tip << endl;
    cout << "-----------------" << endl;
    cout << "Total: $" << total << endl;
}
void question3() {
    cout << "Question 3 not implemented yet." << endl;
}

void question4() {
    cout << "Question 4 not implemented yet." << endl;
}

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
    cout << "Question 3: Choose your own adventure." << endl;

    char choice1[10];
    char choice2[10];

    cout << "You wake up in a dark cave. Do you leave or stay?";
    cin >> choice1;

    if (choice1[0] == 'l' || choice1[0] == 'L') {
        cout << "You step outside and see a path leading into the forest." << endl;
        cout << "Do you folow it or turn back? ";
        cin >> choice2;

        if (choice2[0] == 'f' || choice2[0] == 'F') {
            cout << "You find your way out of the forest. You win!" << endl;
        } 
        else if (choice2[0] == 't' || choice2[0] == 'T') {
            cout << "You get lost on your way back. Game over." << endl;
        } 
        else {
            cout << "You stand there confused until night falls. Game over." << endl;
        }
    } 
    else if (choice1[0] == 's' || choice1[0] == 'S') {
        cout << "You wait too long, and the cave collapses. Game over." << endl;
    } 
    else {
        cout << "You hesitate and nothing happens. Game over." << endl;
    }
}

void question4() {
    cout << "Question 4: Math Practice" << endl;

    int num1, num2, user_answer, correct_answer;

    cout << "Enter the first number (0–9): ";
    cin >> num1;
    cout << "Enter the second number (0–9): ";
    cin >> num2;

    correct_answer = num1 + num2;

    cout << "What is " << num1 << " plus " << num2 << "? ";
    cin >> user_answer;

    if (user_answer == correct_answer) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The right answer was " << correct_answer << "." << endl;
    }
}

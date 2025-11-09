// CSC 134
// M5T1 - Intro to Functions
// Zachary Ivey
// 11/8/2025

#include <iostream>
#include <string>
using namespace std;

// declare our functions
string formatAnswer(int answer);
void printAnswer(string msg);

int main() {
    int answer = 5;
    string message;

    // call the value-returning function
    message = formatAnswer(answer);

    // call the void function to display the message
    printAnswer(message);

    return 0;
}

// define functions
string formatAnswer(int answer) {
    // Make a nice looking string containing the answer
    string answerMessage;
    answerMessage = "The answer is ";
    answerMessage += to_string(answer);
    return answerMessage;
}

void printAnswer(string msg) {
    // display our message
    cout << msg << endl;
}

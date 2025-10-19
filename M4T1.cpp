//CSC 134  
//M4T1
//10/19/2025
//Zachary Ivey

#include <iostream>
using namespace std;

int main () {

    int number = 5;

    int i = 0;
    while (i < number) {
        cout << "Hello" << endl;

        i++;
    }
    cout << "That's all" << endl;

    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;

    int num = MIN_NUMBER;

    cout << "Number     Number Squared" << endl;

    while (num <= MAX_NUMBER) {
        cout << num << "\t\t" << num * num << endl;

        num++;
    }
}
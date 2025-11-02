//CSC 134 
//M4HW1 
//Zachary Ivey 
//11/2/2025 
#include <iostream> 
using namespace std; 
int main() { 
    
    int firstNum, answer;

    cout << "Enter a number from 1 to 12: ";
    cin >> firstNum;

    for (int i = 1; i <= 12; i++) {
        answer = firstNum * i;
        cout << firstNum << " times " << i << " is " << answer << endl;
    }

    return 0;
}
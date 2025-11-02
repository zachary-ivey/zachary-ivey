//CSC 134 
//M4HW1 
//Zachary Ivey 
//11/2/2025 
#include <iostream> 
using namespace std; 
int main() { 
    int firstNum, secondNum, answer;
     firstNum = 5; 
     //secondNum = 1; 
     //answer = firstNum + secondNum; 
     for (int i=1; i<= 12; i++) { 
        answer = firstNum * i; 
        cout << firstNum << " times " << i << " is " << answer << endl; 
    } 
}
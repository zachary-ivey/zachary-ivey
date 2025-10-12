//CSC-134
//M3LAB2
//Zachary Ivey
//10/10/2025
//Program will give a letter grade based on the input

#include <iostream>
using namespace std;

int main () {
    double grade;

    cout << "Enter your current grade: ";
    cin >> grade;
    //asks the user for their grade

    char lettergrade;
    
    if (grade >= 90 && grade <= 100)
        lettergrade = 'A';

    else if (grade >= 80 && grade < 90)
        lettergrade = 'B';

    else if (grade >= 70 && grade < 80)
        lettergrade = 'C';
    
    else if (grade >= 60 && grade < 70)
        lettergrade = 'D';
    
    else if (grade >= 0 && grade < 60)
        lettergrade = 'F';

    else {
        cout << "Please enter a grade";
        return 1;
    }

    cout << "Your letter grade is: " << lettergrade << endl;

    return 0;
}
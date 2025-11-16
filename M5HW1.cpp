//Zachary Ivey
//11/15/2025
//M5HW1

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Q1: Average Rainfall
void question1() {
    string m1, m2, m3;
    double r1, r2, r3;

    cout << "Enter month: ";
    cin >> m1;
    cout << "Enter rainfall for " << m1 << ": ";
    cin >> r1;

    cout << "Enter month: ";
    cin >> m2;
    cout << "Enter rainfall for " << m2 << ": ";
    cin >> r2;

    cout << "Enter month: ";
    cin >> m3;
    cout << "Enter rainfall for " << m3 << ": ";
    cin >> r3;

    double avg = (r1 + r2 + r3) / 3.0;

    cout << fixed << setprecision(2);

    cout << "Average rainfall for " << m1 << ", " << m2 << ", and "
         << m3 << " is " << avg << " inches." << endl;
}

// Q2: Block Volume
void question2() {
    double width, length, height;

    cout << "Enter width: ";
    cin >> width;
    if (width <= 0) {
        cout << "Width must be greater than zero." << endl;
        return;
    }

    cout << "Enter length: ";
    cin >> length;
    if (length <= 0) {
        cout << "Length must be greater than zero." << endl;
        return;
    }

    cout << "Enter height: ";
    cin >> height;
    if (height <= 0) {
        cout << "Height must be greater than zero." << endl;
        return;
    }

    cout << "Volume = " << width * length * height << endl;
}

// Q3: Roman Numerals
void question3() {
    int num;
    cout << "Enter a number (1–10): ";
    cin >> num;

    if (num < 1 || num > 10) {
        cout << "Must be 1–10." << endl;
        return;
    }

    cout << "Roman numeral: ";

    switch (num) {
        case 1:  cout << "I"; break;
        case 2:  cout << "II"; break;
        case 3:  cout << "III"; break;
        case 4:  cout << "IV"; break;
        case 5:  cout << "V"; break;
        case 6:  cout << "VI"; break;
        case 7:  cout << "VII"; break;
        case 8:  cout << "VIII"; break;
        case 9:  cout << "IX"; break;
        case 10: cout << "X"; break;
    }

    cout << endl;
}

// Q4: Geometry Calculator
void question4() {
    int choice;

    cout << "Geometry Calculator" << endl;
    cout << "1. Circle Area" << endl;
    cout << "2. Rectangle Area" << endl;
    cout << "3. Triangle Area" << endl;
    cout << "4. Quit" << endl;
    cout << "Choice: ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "Invalid choice." << endl;
        return;
    }

    if (choice == 4) {
        cout << "Returning..." << endl;
        return;
    }

    cout << fixed << setprecision(2);

    if (choice == 1) {
        double r;
        cout << "Radius: ";
        cin >> r;
        if (r < 0) {
            cout << "Radius must be positive." << endl;
            return;
        }
        cout << "Area = " << 3.14159 * r * r << endl;
    }

    if (choice == 2) {
        double l, w;
        cout << "Length: ";
        cin >> l;
        cout << "Width: ";
        cin >> w;

        if (l < 0 || w < 0) {
            cout << "Positive values only." << endl;
            return;
        }

        cout << "Area = " << l * w << endl;
    }

    if (choice == 3) {
        double b, h;
        cout << "Base: ";
        cin >> b;
        cout << "Height: ";
        cin >> h;

        if (b < 0 || h < 0) {
            cout << "Positive values only." << endl;
            return;
        }

        cout << "Area = " << b * h * 0.5 << endl;
    }
}

// Q5: Distance Traveled
void question5() {
    double speed;
    int hours;

    cout << "Speed (mph): ";
    cin >> speed;
    if (speed < 0) {
        cout << "Speed cannot be negative." << endl;
        return;
    }

    cout << "Hours traveled: ";
    cin >> hours;
    if (hours < 1) {
        cout << "Hours must be >= 1." << endl;
        return;
    }

    cout << "Hour\tDistance" << endl;
    cout << "----------------------" << endl;

    for (int i = 1; i <= hours; i++) {
        cout << " " << i << "\t" << speed * i << endl;
    }
}

// Main Menu
int main() {
    int choice;

    cout << fixed << setprecision(2);

    do {
        cout << "Main Menu" << endl;
        cout << "1. Question 1" << endl;
        cout << "2. Question 2" << endl;
        cout << "3. Question 3" << endl;
        cout << "4. Question 4" << endl;
        cout << "5. Question 5" << endl;
        cout << "6. Exit" << endl;
        cout << "Choose 1–6: ";
        cin >> choice;

        if (choice < 1 || choice > 6) {
            cout << "Invalid choice." << endl;
            continue;
        }

        if (choice == 1) question1();
        if (choice == 2) question2();
        if (choice == 3) question3();
        if (choice == 4) question4();
        if (choice == 5) question5();
        if (choice == 6) cout << "Goodbye!" << endl;

    } while (choice != 6);

    return 0;
}

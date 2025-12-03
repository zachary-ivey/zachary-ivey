/*
CSC 134
M6T1 - Loops and Arrays (Cars Per Day)
Zachary Ivey
12/2/2025
*/

#include <iostream>
using namespace std;

void part1();
void part2();

int main() {
    cout << "=== PART 1 ===" << endl;
    part1();

    cout << "\n=== PART 2 ===" << endl;
    part2();

    return 0;
}

void part1() {
    const int SIZE = 5;
    int day = 0;
    int cars_today = 0;
    int total = 0;
    double average = 0.0;

    cout << "Enter the number of cars each day (Mon–Fri)." << endl;

    while (day < SIZE) {
        cout << "Day " << day << ": ";
        cin >> cars_today;
        total += cars_today;
        day++;
    }

    average = (double) total / SIZE;

    cout << "Total cars: " << total << endl;
    cout << "Average per day: " << average << endl;
}

void part2() {
    const int SIZE = 5;
    string days[SIZE] = {"Mon", "Tue", "Wed", "Thu", "Fri"};
    int cars[SIZE];
    int total = 0;
    double average = 0.0;

    for (int i = 0; i < SIZE; i++) {
        cout << "Cars on " << days[i] << ": ";
        cin >> cars[i];
    }

    cout << "\nDay\tCars" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << "\t" << cars[i] << endl;
        total += cars[i];
    }

    average = (double) total / SIZE;

    cout << "\nTotal cars: " << total << endl;
    cout << "Average per day: " << average << endl;

    cout << "\nASCII BAR GRAPH\n";

    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << " | ";
        int stars = cars[i] / 10;
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }
        cout << " (" << cars[i] << ")" << endl;
    }
}

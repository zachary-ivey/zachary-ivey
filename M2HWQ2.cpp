//CSC 134
//M2HW - SILVER
//Zachary Ivey
//10/5/2025

#include <iostream>
using namespace std;

int main() {
    int pizzas, slicesPerPizza, visitors;
    int totalSlices, requiredSlices, leftover;

    // allows the user to make inputs
    cout << "How many pizzas did you order? ";
    cin >> pizzas;

    cout << "How many slices per pizza? ";
    cin >> slicesPerPizza;

    cout << "How many visitors are coming? ";
    cin >> visitors;

    // Calculations
    totalSlices = pizzas * slicesPerPizza;
    requiredSlices = visitors * 3;
    leftover = totalSlices - requiredSlices;

    // Displays the output
    cout << "Leftover slices of pizza: " << leftover << endl;

    return 0;
}

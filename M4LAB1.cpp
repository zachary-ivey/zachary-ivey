//CSC 134  
//M4LAB1
//10/25/2025
//Zachary Ivey

#include <iostream>
using namespace std;

int main() {
    int height, width;

    cout << "Enter the height: ";
    cin >> height;

    cout << "Enter the width: ";
    cin >> width;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "*" << " ";
        }

        cout << endl;
    }

    return 0;
}
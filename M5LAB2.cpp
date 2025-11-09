// M5LAB2
// Zachary Ivey
//11/8/2025
//This program calculates the area of a rectangle

// M5LAB2 - Area of a Rectangle
// Zachary Ivey
// 11/8/2025
// This program calculates the area of a rectangle using functions.
// The user will enter the length and width, and the program will
// display the length, width, and calculated area.

#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    double length, width, area;
    
    length = getLength();
    width = getWidth();
    area = getArea(length, width);
    displayData(length, width, area);
          
    return 0;
}

double getLength() {
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}

double getWidth() {
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return width;
}

double getArea(double length, double width) {
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << endl;
    cout << "Rectangle Data" << endl;
    cout << "---------------------" << endl;
    cout << "Length: " << length << endl;
    cout << "Width:  " << width << endl;
    cout << "Area:   " << area << endl;
    cout << "---------------------" << endl;
}

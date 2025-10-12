//CSC 134
//M3T1
//Zachary Ivey
//10/11/2025

#include <iostream>
using namespace std;

int main() {
    //declare the variables
    int widthOne, length0ne, widthTwo, lengthTwo;
    int area0ne, areaTwo;

    //ask for the inouts
    cout << "Please enter the width and height of the the first \n";
    cout << "rectangle, seperated by a space or newline" << endl;
    cin >> widthOne >> length0ne;

    cout << "Please enter the width and height of the the second \n";
    cout << "rectangle, seperated by a space or newline" << endl;
    cin >> widthTwo >> lengthTwo;

    //calculate the answer
    area0ne = widthOne * length0ne;
    areaTwo = widthTwo * lengthTwo;

    //display the results
    cout << "Rectangle one has the area of " << area0ne << endl;
    cout << "Rectangle two has the area of " << areaTwo << endl;

    //determine which is bigger
    if (area0ne > areaTwo) {
        cout << "Rectangle one is bigger" << endl;
    }

    else if (areaTwo > area0ne) {
        cout << "Rectangle two is bigger" << endl;
    }

    else if (area0ne = areaTwo){
        cout << "They are the same size" << endl;
    }
}
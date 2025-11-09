#include <iostream>
#include <math.h>
using namespace std;

void printResult(int number, int result) {
    cout << number << " : " << result << endl;
}

int growth(int number) {
    int result = pow((double)2, (double)number);
    return result;
}

int main() {
    int number, result;

    number = 2;

    while (number <= 10) {
        result = growth(number);
        printResult(number, result);
        number++;
    }
}
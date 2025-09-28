// CSC 134
// M2T2
// Zachary Ivey
// 9/27/2025



 #include <iostream>
 #include <iomanip>
 using namespace std;

 int main() {
    // purpose - Create a simple receipt
    //should also handle sales tax (8%)

    //declare our variables
    string item = "🍔 Burger";
    double item_price = 6.99;
    double tax_percent = 0.08; // 8% is .08 
    double tax_amount;      //Tax in $
    double total;           // Price + tax

    //Greet user and take order
    cout << "Welcome to My Resturant!" << endl;
    cout << "You ordered  one" << item << "." << endl;

    //Calculate meal price
    //Calculate the sales tax and the total price
    tax_amount = item_price * tax_percent;
    total = item_price + tax_amount;

    //Print the reciept
    cout << setprecision << fixed;
    cout << total << endl;


    return 0;
 }
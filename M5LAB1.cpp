#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Zachary Ivey
11/8/2025
*/

// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_inside_house();
void choice_run_away();

int main() {
    cout << "M5LAB1 - Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    cout << endl;
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        choice_front_door();
    } else if (choice == 2) {
        choice_back_door();
    } else if (choice == 3) {
        choice_go_home();
    } else if (choice == 4) {
        cout << "Ok, quitting game." << endl;
        return;
    } else {
        cout << "That's not a valid choice. Please try again." << endl;
        main_menu(); // re-run menu
    }
}

// Story Branches
void choice_front_door() {
    cout << endl;
    cout << "You try the front door..." << endl;
    cout << "It's locked tight. The handle rattles but won’t turn." << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;

    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        choice_back_door();
    } else if (choice == 2) {
        choice_go_home();
    } else {
        cout << "Invalid choice, returning to main menu." << endl;
        main_menu();
    }
}

void choice_back_door() {
    cout << endl;
    cout << "You sneak around the back of the house..." << endl;
    cout << "You find an old wooden door that's slightly open." << endl;
    cout << "You hear strange music coming from inside." << endl;
    cout << "Do you:" << endl;
    cout << "1. Push the door open and go inside" << endl;
    cout << "2. Run away before something bad happens" << endl;

    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        choice_inside_house();
    } else if (choice == 2) {
        choice_run_away();
    } else {
        cout << "Invalid choice, returning to main menu." << endl;
        main_menu();
    }
}

void choice_go_home() {
    cout << endl;
    cout << "You decide it’s not worth the trouble." << endl;
    cout << "You walk home safely, but you’ll always wonder what was inside..." << endl;
    cout << "The End." << endl;
}

void choice_inside_house() {
    cout << endl;
    cout << "You step inside. The floor creaks under your feet." << endl;
    cout << "Suddenly, a light flickers on, and you see a table set for dinner." << endl;
    cout << "A ghostly voice whispers: 'Welcome, we’ve been waiting for you...'" << endl;
    cout << "You faint. When you wake up, it’s morning—and the house is gone." << endl;
    cout << "The End." << endl;
}

void choice_run_away() {
    cout << endl;
    cout << "You sprint back toward the street, heart pounding." << endl;
    cout << "When you glance back, the back door slowly closes on its own." << endl;
    cout << "You never speak of this night again." << endl;
    cout << "The End." << endl;
}

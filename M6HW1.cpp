//CSC 134
//M6HW1 - Gold
//Zachary Ivey
//12/8/2025

#include <iostream>
using namespace std;

bool has_key = false; 

void main_menu();
void room_front_yard();
void room_back_yard();
void room_entry_hall();
void npc_ghost();
void pick_up_key();

void end_go_home();
void end_inside_house();
void end_run_away();

int main() {
    cout << "M6HW1 - Project Prototype" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    cout << endl;
    cout << "Main Menu" << endl;
    cout << "You're standing outside a spooky old house." << endl;
    cout << "A faint whisper says: 'Find the key... and enter...'" << endl;

    cout << "Do you:" << endl;
    cout << "1. Approach the front yard" << endl;
    cout << "2. Sneak into the back yard" << endl;
    cout << "3. Go home (Quit)" << endl;

    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) room_front_yard();
    else if (choice == 2) room_back_yard();
    else if (choice == 3) end_go_home();
    else {
        cout << "Invalid choice, try again." << endl;
        main_menu();
    }
}

void room_front_yard() {
    cout << endl;
    cout << "You walk into the front yard." << endl;
    cout << "The grass is overgrown and the front porch creaks." << endl;

    npc_ghost();

    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Go back to the main menu" << endl;

    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        if (has_key) {
            cout << "You unlock the door with the rusty key!" << endl;
            room_entry_hall();
        } else {
            cout << "The door is locked. Maybe there’s a key somewhere." << endl;
            room_front_yard();
        }
    }
    else if (choice == 2) {
        main_menu();
    }
    else {
        cout << "Invalid choice." << endl;
        room_front_yard();
    }
}

void room_back_yard() {
    cout << endl;
    cout << "You step into the back yard." << endl;
    cout << "A broken fountain sits in the corner. You hear faint music." << endl;

    if (!has_key) {
        cout << "You notice something shiny under the fountain." << endl;
        cout << "1. Pick up the shiny object" << endl;
        cout << "2. Go to the front yard" << endl;
    } else {
        cout << "The fountain is empty now. Nothing else to find." << endl;
        cout << "1. Go to the front yard" << endl;
        cout << "2. Run away from the house" << endl;
    }

    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (!has_key) {
        if (choice == 1) {
            pick_up_key();
            room_back_yard();
        }
        else if (choice == 2) {
            room_front_yard();
        }
        else {
            cout << "Invalid choice." << endl;
            room_back_yard();
        }
    } else { 
        if (choice == 1) {
            room_front_yard();
        } 
        else if (choice == 2) {
            end_run_away();
        } 
        else {
            cout << "Invalid choice." << endl;
            room_back_yard();
        }
    }
}

void room_entry_hall() {
    cout << endl;
    cout << "You enter the house." << endl;
    cout << "The hall is dimly lit and a dinner table sits in the center." << endl;
    cout << "A ghostly voice whispers: 'You completed your task... enter freely...'" << endl;

    cout << "Do you:" << endl;
    cout << "1. Explore deeper into the house" << endl;
    cout << "2. Leave while you still can" << endl;

    int choice;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        end_inside_house();
    } else if (choice == 2) {
        end_run_away();
    } else {
        cout << "Invalid choice." << endl;
        room_entry_hall();
    }
}


void npc_ghost() {
    cout << endl;
    cout << "A ghost floats near the porch." << endl;
    cout << "'Traveler,' it whispers, 'the door won’t open without the key." << endl;
    cout << "It lies hidden behind the house… find it to unlock your fate.'" << endl;
    cout << endl;
}

void pick_up_key() {
    cout << endl;
    cout << "You reach under the fountain and pull out a rusty old key!" << endl;
    has_key = true;
    cout << "** You obtained: Rusty Key **" << endl;
}


void end_go_home() {
    cout << endl;
    cout << "You head home, deciding the adventure isn't worth it." << endl;
    cout << "You never do find out what secrets the house held." << endl;
    cout << "THE END." << endl;
}

void end_inside_house() {
    cout << endl;
    cout << "You explore deeper into the house..." << endl;
    cout << "A warm light surrounds you, and the ghost whispers:" << endl;
    cout << "'Thank you for freeing us. Rest easy, traveler.'" << endl;
    cout << "When you blink, you’re back outside—and the house is gone." << endl;
    cout << "THE END." << endl;
}

void end_run_away() {
    cout << endl;
    cout << "You run as fast as you can back toward the street." << endl;
    cout << "When you look back, the house seems to watch you leave..." << endl;
    cout << "THE END." << endl;
}

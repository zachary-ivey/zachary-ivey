//CSC-134
//M3LAB1
//Zachary Ivey
//10/10/2025
//Program will great the user

#include <iostream>
#include <string>
using namespace std;

//Declare the functions
int fightMonster();
int runAway();

int main() {

  string choice;

  cout << "A wild monster appears!" << endl;
  cout << "Do you want to 'fight' or 'run'? " << endl;
  cout << "Type your choice: ";
  cin >> choice;

  int result = 0; 

  // Users input
  if (choice == "fight" || choice == "Fight") {
    result = fightMonster();
  }
  else if (choice == "run" || choice == "Run") {
    result = runAway();
  }
  else {
    cout << "That’s not a valid action!" << endl;
  }

  cout << "Game over!" << endl;
  return result; 
}

// Function Definitions

int fightMonster() {
  cout << "You chose to fight!" << endl;
  cout << "You draw your sword and charge at the monster..." << endl;
  cout << "After a fierce battle, you emerge victorious!" << endl;
  return 1; 
}
// 1 = you win

int runAway() {
  cout << "You chose to run away!" << endl;
  cout << "You sprint as fast as you can and escape safely!" << endl;
  return 0; 
}
// 0 = you got away



#include <iostream>
#include <vector>
#include <string>
#include "match.h"
#include "person.h"

using namespace std;

int main(int argc, char* argv[]){
  int option = 0;
  while(option != 5) {
    cout << "Menu" << endl << endl;
    cout << "Please choose an option:" << endl;
    cout << "1) Show current players" << endl;
    cout << "2) Add a player" << endl;
    cout << "3) Remove a player" << endl;
    cout << "4) Add a game" << endl;
    cout << "5) Exit and save" << endl << endl;
    cout << "Option: ";
    cin >> option;
    /*if(cin.fail()){
      cin.clear();
      cin.ignore(numeric_limits<streamsize>max(), '\n');
      cout << "Invalid input. Please enter a number 1-5" << endl;
    }*/
    if(option == 1){

    }
    else if(option == 2){
      string name;
      cout << "Please enter a name: ";
      cin >> name;
      //Person n(name);
      Person* n = new Person(name);
    }
    else if(option == 3){

    }
    else if(option == 4){

    }
    else if(option == 5){

    }
    else{
      cout << "Invalid input. Please enter a number 1-5" << endl;
    }
  }
  return 0;
}

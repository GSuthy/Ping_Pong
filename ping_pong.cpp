#include <iostream>
#include <vector>
#include <string>
#include "match.h"
#include "person.h"

using namespace std;

int main(int argc, char* argv[]){
  int option = 0;
  vector<Match*> games;
  while(option != 5) {
    cout << endl << "Menu" << endl << endl;
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
      Person* p = new Person(name);
    }
    else if(option == 3){

    }
    else if(option == 4){
      string date;
      string Player1;
      string Player2;
      int score1;
      int score2;

      cout << "Who is playing?" << endl;
      cout << "Player1: ";
      cin >> Player1;

      cout << "Player2: ";
      cin >> Player2;

      cout << "What day did they play:" << endl;
      cout << "Date: ";
      cin >> date;

      cout << Player1 << "'s score: ";
      cin >> score1;

      cout << Player2 << "'s score: ";
      cin >> score2;

      Match* m = new Match(date, Player1, Player2, score1, score2);
      games.push_back(m);

    }
    else if(option == 5){

    }
    else{
      cout << "Invalid input. Please enter a number 1-5" << endl;
    }
  }
  return 0;
}

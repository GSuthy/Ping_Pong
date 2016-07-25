#include <iostream>
#include <vector>
#include <string>
#include "match.h"
#include "person.h"

using namespace std;

int find(vector<Person*> people, string name){
  for(int i = 0; i < people.size(); i++){
    if(people[i]->getName() == name){
      return i;
    }
  }
  return -1;
}

int main(int argc, char* argv[]){
  int option = 0;
  vector<Match*> games;
  vector<Person*> people;
  while(option != 6) {
    cout << endl << "Menu" << endl << endl;
    cout << "Please choose an option:" << endl;
    cout << "1) Show current players" << endl;
    cout << "2) Add a player" << endl;
    cout << "3) Remove a player" << endl;
    cout << "4) Add a game" << endl;
    cout << "5) Show games played" << endl;
    cout << "6) Exit and save" << endl << endl;
    cout << "Option: ";
    cin >> option;
    if(option == 1){
      cout << endl;
      for(int i = 0; i < people.size(); i++){
        people[i]->print();
      }
    }
    else if(option == 2){
      string name;
      cout << "Please enter a name: ";
      cin >> name;
      Person* p = new Person(name);
      people.push_back(p);
    }
    else if(option == 3){
      cout << "What name would you like to remove: ";
      string name;
      cin >> name;
      int temp = find(people, name);
      if(temp == -1){
        cout << "That player does not exist" << endl;
      }
      else {
        people.erase(people.begin() + temp);
      }
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

      int temp = find(people, Player1);
      if(temp == -1){
        cout << "Player does not exist in sytem, please add them." << endl;
      }

      cout << "Player2: ";
      cin >> Player2;

      int temp2 = find(people, Player2);
      if(temp2 == -1){
        cout << "Player does not exist in sytem, please add them." << endl;
      }

      cout << "What day did they play:" << endl;
      cout << "Date: ";
      cin >> date;

      cout << Player1 << "'s score: ";
      cin >> score1;

      cout << Player2 << "'s score: ";
      cin >> score2;

      if(score1 > score2){
        people[find(people, Player1)]->incrementWin();
        people[find(people, Player2)]->incrementLoss();
      }
      else if(score1 < score2) {
        people[find(people, Player1)]->incrementLoss();
        people[find(people, Player2)]->incrementWin();
      }

      Match* m = new Match(date, Player1, Player2, score1, score2);
      games.push_back(m);

    }
    else if(option == 5){
      for(int i = 0; i < games.size(); i++){
        games[i]->print();
      }
    }
    else if(option == 6){

    }
    else{
      cout << "Invalid input. Please enter a number 1-5" << endl;
    }
  }
  return 0;
}

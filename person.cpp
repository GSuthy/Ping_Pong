#include "person.h"

Person::Person(string name){
	this->name = name;
	wins = 0;
	losses = 0;
}
Person::~Person(){

}
  int getWins(){
	  return wins;
  }

  void setWins(int winData){
	  wins = winData;
  }
  int getLosses(){
	  return losses;
  }
  void setLosses(int lossData){
	  losses = lossData;
  }
  void incrementWin(){
	  wins++;
  }
  void incrementLoss(){
	  losses++;
  }

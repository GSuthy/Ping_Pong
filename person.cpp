#include "person.h"

Person::Person(string name){
	this->name = name;
	wins = 0;
	losses = 0;
}
Person::~Person(){

}

 int Person::getWins(){
	 return wins;
 }
 void Person::setWins(int winData){
	 wins = winData;
 }
 int Person::getLosses(){
	 return losses;
 }
 void Person::setLosses(int lossData){
	 losses = lossData;
 }
 void Person::incrementWin(){
	 wins++;
 }
 void Person::incrementLoss(){
	 losses++;
 }

 void Person::print(){
   cout << name << endl;
	 cout << "    wins: " << wins << endl;
	 cout << "    losses: " << losses << endl;
 }

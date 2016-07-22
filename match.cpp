#include "match.h"

Match::Match(string date, string name1, string name2, int score1, int score2){
  this->date = date;
  player1 = name1;
  player2 = name2;
  result1 = score1;
  result2 = score2;
}

Match::~Match() {

}

void Match::setWinner(){
  if(result1 > result2){
    winner = player1;
    loser = player2;
  }
  else{
    winner = player2;
    loser = player1;
  }
}
string Match::getWinner(){
  return winner;
}

string Match::getLoser(){
  return loser;
}

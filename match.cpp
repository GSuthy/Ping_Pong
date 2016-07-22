#include "match.h"

Match::Match(string date, string name1, string name2, int score1, int score2){
  this->date = date;
  player1 = name1;
  player2 = name2;
  result1 = score1;
  result2 = score2;

  if(result1 > result2){
    winner = player1;
    winnerScore = result1;
    loser = player2;
    loserScore = result2;
  }
  else{
    winner = player2;
    winnerScore = result2;
    loser = player1;
    loserScore = result1;
  }
}

Match::~Match() {

}

string Match::getWinner(){
  return winner;
}

string Match::getLoser(){
  return loser;
}

void Match::print(){
  cout << "On " << date << ", " << winner << " beat " << loser
  << " with a score of " << winnerScore << " - " << loserScore << endl;
}

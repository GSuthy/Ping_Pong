#include "match.h"

Match::Match(string date, string name1, string name2, int score1, int score2){
  this->date = date;
  1name = name1;
  2name = name2;
  1score = score1;
  2score = score2;
}

Match::~Match() {

}

string Match::getDate(){
  return date;
}
void Match::setDate(string match_date){
 date = match_date;
}

int Match::getScores(){
  return scores;
}
void Match::setScores(int score){
  scores = score;
}

void setWinner(){
  if(1score > 2score){
    winner = 1name;
    loser = 2name;
  }
  else{
    winner = 2name;
    loser = 1name;
  }
}
void getWinner(){
  return winner;
}

getLoser(){
  return loser;
}

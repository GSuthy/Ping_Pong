#include "match.h"

Match::Match(string match_date, int score){
  date = match_date;
  scores = score;
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

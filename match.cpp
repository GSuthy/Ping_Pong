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
string Match::setDate(string match_date){
 return "hi";
}

int Match::getScores(){
  return scores;
}
int Match::setScores(int score){
  return 0;
}

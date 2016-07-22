#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "person.h"

using namespace std;

class Match {

protected:
  string date;
  string 1name;
  string 2name;
  int 1score;
  int 2score;
  string winner;
  string loser;

public:
  Match(string name1, string name2, int score1, int score2);
  virtual ~Match();

  virtual string getDate();
  virtual void setDate(string match_date);

  virtual int getScores();
  virtual void setScores(int score);

  virtual void setWinner();
  virtual void getWinner();

  virtual void getLoser();
};

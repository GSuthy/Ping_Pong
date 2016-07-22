#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

class Match {

protected:
  string date;
  int scores;

public:
  Match(string match_date, int score);
  virtual ~Match();

  virtual string getDate();
  virtual string setDate(string match_date);
  virtual int getScores();
  virtual int setScores(int score);
};

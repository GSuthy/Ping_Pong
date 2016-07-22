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
  string player1;
  string player2;
  int result1;
  int result2;
  string winner;
  string loser;

public:
  Match(string date, string name1, string name2, int score1, int score2);
  virtual ~Match();

  virtual void setWinner();
  virtual string getWinner();

  virtual string getLoser();

  virtual void print();
};

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class Person
{
  private:
  int wins;
  int losses;
  string name;

  public:
  Person(string name);
  virtual ~Person();

  int getWins();
  void setWins();
  int getLosses();
  void setLosses();
  void incrementWin(int winData);
  void incrementLoss(int lossData);


};

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class Person
{
protected:
  int wins;
  int losses;
  string name;

public:
  Person(string name);
  virtual ~Person();

  virtual int getWins();
  virtual void setWins(int winData);

  virtual int getLosses();
  virtual void setLosses(int lossData);

  virtual void incrementWin();
  virtual void incrementLoss();

  virtual void print();


};

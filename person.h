#pagma once
#include "match.h"

class Person : public match
{
  private:
  int wins;
  int losses;
  string name;

  public:
  int getWins();
  void setWins();
  int getLosses();
  void setLosses();
  void incrementWin(int winData);
  void incrementLoss(int lossData);

  Person(name);
};


Person::Person(string name){
	this->name = name;
	wins = 0;
	losses = 0;
}
  int getWins(){
	  return wins;
  }
  
  void setWins(){
	  wins++;
  }
  int getLosses(){
	  return losses;
  }
  void setLosses(){
	  losses++;
  }

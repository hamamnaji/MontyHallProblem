#pragma once
class Monty
{
private:
	int win;
	int loss;
	int totalWins;
	int totalLosses;

public:

	void setWin(int winn);
	void setLoss(int losss);
	int getWin();
	int getLoss();

	/*int getTotalWins();
	int getTotalLosses();*/
	Monty();

};


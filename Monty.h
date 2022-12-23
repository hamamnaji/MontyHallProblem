#pragma once
using namespace std;
class Monty
{
private:
	int win;
	int loss;
	int switchWin;
	int switchLoss;
	int totalWins;
	int totalLosses;

public:

	void setWin(int winn);
	void setLoss(int losss);
	void setWinSwitch(int sw);
	void setLossSwitch(int sl);
	int getWin();
	int getLoss();
	int getWinSwitch();
	int getLossSwtich();
	

	void youFoundGold();
	void youFoundNothing();
	void printTwoBoxes();
	void printThreeBoxes();

	/*int getTotalWins();
	int getTotalLosses();*/
	Monty();

};


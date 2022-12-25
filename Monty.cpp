#include "Monty.h"
#include <iostream>

void Monty::setWin(int winn)
{
	win += winn;
}

void Monty::setLoss(int losss)
{
	loss += losss;
}

void Monty::setWinSwitch(int sw)
{
	switchWin += sw;
}

void Monty::setLossSwitch(int sl)
{
	switchLoss += sl;
}

int Monty::getWin()
{
	return win;
}

int Monty::getLoss()
{
	return loss;
}

int Monty::getWinSwitch()
{
	return switchWin;
}

int Monty::getLossSwtich()
{
	return switchLoss;
}

void Monty::getResults(int tri)
{
	cout << "\n\nResults:\n";
	cout << "Tries: " << tri << endl << endl;;
	cout << "Wins while switching: " << getWinSwitch() << endl;
	cout << "Losses while switching " << getLossSwtich() << endl << endl;
	cout << "Wins without switching: " << getWin() << endl;
	cout << "Losses without switching:" << getLoss() << endl << endl;

}

void Monty::youFoundGold()
{
	cout << "----------------" << endl;
	cout << "|              |" << endl;
	cout << "|              |" << endl;
	cout << "|    Gold!     |" << endl;
	cout << "|              |" << endl;
	cout << "|              |" << endl;
	cout << "|              |" << endl;
	cout << "----------------" << endl;
}

void Monty::youFoundNothing()
{
	cout << "----------------" << endl;
	cout << "|              |" << endl;
	cout << "|              |" << endl;
	cout << "|   Nothing    |" << endl;
	cout << "|              |" << endl;
	cout << "|              |" << endl;
	cout << "|              |" << endl;
	cout << "----------------" << endl;
}

void Monty::printBoxes(int a[])
{
	for (int i = 0; i < 3; i++)
	{
		if (a[i] == 0 || a[i] == 1) {

			cout << "----------------" << endl;
			cout << "|              |" << endl;
			cout << "|              |" << endl;
			cout << "|              |" << endl;
			cout << "|              |" << endl;
			cout << "|              |" << endl;
			cout << "|              |" << endl;
			cout << "----------------" << endl;
			cout << "        " << i + 1 << "       " << endl;
		}
		else if (a[i] == 2) {
			cout << "                " << endl;
			cout << "                " << endl;
			cout << "                " << endl;
			cout << "                " << endl;
			cout << "                " << endl;
			cout << "                " << endl;
			cout << "                " << endl;
			cout << "                " << endl;


		}

	}
}


Monty::Monty()
{
	win = 0;
	loss = 0;
	totalLosses = 0;
	totalWins = 0;
	switchLoss = 0;
	switchWin = 0;
}


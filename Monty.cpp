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
	/*for (int i = 0; i < 3; i++)
	{
		if (a[i] == 2) {
			cout << "                " << endl;
			cout << "                " << endl;
			cout << "                " << endl;
			cout << "                " << endl;
			cout << "                " << endl;
			cout << "                " << endl;
			cout << "                " << endl;
			cout << "                " << endl;


		}
		else {

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

	}*/




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

//void Monty::printTwoBoxes()
//{
//	cout << "----------------         ---------------- " << endl;
//	cout << "|              |         |              | " << endl;
//	cout << "|              |         |              | " << endl;
//	cout << "|              |         |              | " << endl;
//	cout << "|              |         |              | " << endl;
//	cout << "|              |         |              | " << endl;
//	cout << "|              |         |              | " << endl;
//	cout << "----------------         ---------------- " << endl;
//}
//
//void Monty::printThreeBoxes()
//{
//	cout << "----------------         ----------------         ---------------- " << endl;
//	cout << "|              |         |              |         |              | " << endl;
//	cout << "|              |         |              |         |              | " << endl;
//	cout << "|              |         |              |         |              | " << endl;
//	cout << "|              |         |              |         |              | " << endl;
//	cout << "|              |         |              |         |              | " << endl;
//	cout << "|              |         |              |         |              | " << endl;
//	cout << "----------------         ----------------         ---------------- " << endl;
//	cout << "       1                         2                        3        " << endl << endl;;
//}

Monty::Monty()
{
	win = 0;
	loss = 0;
	totalLosses = 0;
	totalWins = 0;
	switchLoss = 0;
	switchWin = 0;
}






//int Monty::getTotalWins()
//{
//	totalWins
//	return totalWins;
//}
//
//int Monty::getTotalLosses()
//{
//	return totalLosses;
//}
#include "Monty.h"

void Monty::setWin(int winn)
{
	win += winn;
}

void Monty::setLoss(int losss)
{
	loss += losss;
}

int Monty::getWin()
{
	return win;
}

int Monty::getLoss()
{
	return loss;
}

Monty::Monty()
{
	win = 0;
	loss = 0;
	totalLosses = 0;
	totalWins = 0;
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
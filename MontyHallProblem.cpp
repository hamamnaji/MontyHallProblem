#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Monty.h"

using namespace std;


int main()
{
	Monty Prob;
	int done;
	int exit = 0;
	int boxChoice;
	int boxes[3]{};
	int random;
	int stayOrSwitch;
	int tryAgain;
	int tries = 0;
	int removeBox;

	cout << "Hello, welcome to the Monty Hall Problem program!" << endl;
	cout << "The only inputs you will need for this program are 1, 2 or 3 for the selections." << endl << endl;

	cout << "To start, let me explain the problem. You have a choice between 3 boxes to choose from. Only one of the boxes\n"
		<< "has a gold bar in it and the other two have nothing. First, you must select one box you would like to choose. After your selection,\n"
		 <<"one box that has nothing will be removed then you will be asked whether you want to switch your choice to the other box you did not select\n"
		<< "or stay with your original selection. After this, the box's content will be revealed.\n " << endl;
	cout << "Please enter the number 1 after reading to begin: ";

	cin >> done;
	cout << "\n\n\n";
	if (done == 1) {
		while (exit == 0) {

			srand(time(NULL));
			random = rand() % 3;
			removeBox = rand();
			boxes[0] = 0;
			boxes[1] = 0;
			boxes[2] = 0;
			boxes[random] = 1;
			Prob.printBoxes(boxes);
			cout << "Please select a box to choose (1, 2, 3): ";
			cin >> boxChoice;

			//remove random box
			if (removeBox % rand() == 1) {
				for (int i = 0; i < 3; i++)
				{
					if (i != boxChoice - 1 && boxes[i] == 0) {

						boxes[i] = 2;

						break;
					}

				}

			}
			else {

				for (int i = 2; i >= 0; i--)
				{
					if (i != boxChoice - 1 && boxes[i] == 0) {
						boxes[i] = 2;


						break;
					}

				}


			}
			
			 
			Prob.printBoxes(boxes);
			cout << "One box that had nothing has been removed.\n Would you like to stay(1) with the same box or switch(2): " << endl;
			cin >> stayOrSwitch;

			//Switches box if user selects 2
			if (stayOrSwitch == 2) {
				for (int i = 0; i < 3; i++)
				{
					if (boxes[i] != 2 && i != boxChoice - 1) {
						boxChoice = i + 1;
						break;
					}
				}
			}

			//Checks if you have gold or not and saves result
			if (boxes[boxChoice - 1] == 1) {
				Prob.youFoundGold();
				cout << "\n\nYou got the box with gold!" << endl;
				if (stayOrSwitch == 2) {
					Prob.setWinSwitch(1);
				}
				else {
					Prob.setWin(1);
				}
			}
			else {
				Prob.youFoundNothing();
				cout << "\n\nYou got the box with nothing inside." << endl;
				if (stayOrSwitch == 2) {
					Prob.setLossSwitch(1);
				}
				else {
					Prob.setLoss(1);
				}
			}

			cout << "Would you like to try again? (1 = yes), (2 = no)" << endl;
			cin >> tryAgain;
			if (tryAgain == 2) {
				exit = 1;
			}
			tries++;
		}
	}

	//Gets results after exit
	Prob.getResults(tries);
}


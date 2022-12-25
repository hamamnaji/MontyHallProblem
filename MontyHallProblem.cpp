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
	int randomizer[2]{ 0, 0 };
	int rondom = 0;
	cout << "Hello, welcome to the Money Hall Problem program!" << endl;
	cout << "The only inputs you will need for this program are 1, 2 or 3 for the selections." << endl << endl;

	cout << "To start, let me explain the problem. In the start, you have a choice between 3 boxes to choose from. Only one of the boxes\n"
		<< "has a gold bar in it and the other two have nothing. At first you must select one box you would like to choose. After your selection,\n"
		 <<"one box that has nothing will be removed then you will be asked whether you want to switch you choice to the other box you did not select\n"
		<< "or stay with your original selection. After this the boxes's contents will be revealed.\n " << endl;
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
			cout << "TEST@: " << boxes[0] << endl;
			cout << "TEST@: " << boxes[1] << endl;
			cout << "TEST@: " << boxes[2] << endl;

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
			
		
			cout << "TEST@: " << boxes[0] << endl;
			cout << "TEST@: " << boxes[1] << endl;
			cout << "TEST@: " << boxes[2] << endl;

			Prob.printBoxes(boxes);
			cout << "One box that had nothing has been removed.\n Would you like to stay(1) with the same box or switch(2): " << endl;
			cin >> stayOrSwitch;

			if (stayOrSwitch == 2) {
				for (int i = 0; i < 3; i++)
				{
					if (boxes[i] != 2 && i != boxChoice - 1) {
						boxChoice = i + 1;
					}
				}
			}

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


	cout << "\n\nResults:\n";
	cout << "Tries: " << tries << endl << endl;;
	cout << "Wins while switching: " << Prob.getWinSwitch() << endl;
	cout << "Losses while switching " << Prob.getLossSwtich() << endl << endl;
	cout << "Wins without switching: " << Prob.getWin() << endl;
	cout << "Losses without switching:" << Prob.getLoss() << endl << endl;

	//I keep on getting gold when choosing box 3 and staying. (check the random function thats being used) --  fixed
	// fix the issue where when it shows the 2 boxes, the one that gets removed has a space to show it has been removed -- fixed
	
	//new issues:
	// Boxes keep disappering when trying again. Sometimes it prints one box, sometimes two(should always print 2 when one box is removed)

}


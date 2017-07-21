#include <iostream>
#include <cstdlib>
#include <list>
#include <iterator>
#include <ctime>
#include <vector>
#include <algorithm>

/*
Name: Melissa Bakke
Date: 05/15/17
Description: This program allows the user to select the type of Missouri Lottery ticket they want 
	and receive valid random numbers to choose for the ticket.
*/

using namespace std;

int randNumGenerator(int min, int max);
// Function that returns a random number between the variables passed to it.

void getMOLottery();
// Function that randomly selects valid numbers for the Missouri Lottery

void getMegaMillions();
// Function that randomly selects valid numbers for the Mega Millions Lottery

void getPowerball();
// Function that randomly selects valid numbers for the Powerball Lottery

void getShowMeCash();
// Function that randomly selects valid numbers for the Show Me Cash Lottery

void getLuckyForLife();
// Function that randomly selects valid numbers for the Lucky For Life Lottery

void getPick3();
// Function that randomly selects valid numbers for the Pick 3 Lottery

void getPick4();
// Function that randomly selects valid numbers for the Pick 4 Lottery

int main(int argc, char** argv) {
	// Declare variables
	int choice = 0;	
	srand (time(NULL));
	
	while (choice != 8)
	{
		//main menu
		cout << "\n\t MISSOURI LOTTERY NUMBER GENERATOR\n";
		cout << "\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
		cout << "Choose which type of lottery ticket: \n\n";
		cout << "1.\tMissouri Lottery\n";
		cout << "2.\tMega Millions\n";
		cout << "3.\tPowerball\n";
		cout << "4.\tShow Me Cash\n";
		cout << "5.\tLucky For Life\n";
		cout << "6.\tPick 3\n";
		cout << "7.\tPick 4\n";
		cout << "8.\tExit\n";
		cin >> choice;
		
		// Process choice
		switch (choice) {
			case 1:
				getMOLottery();
				break;
			case 2:
				getMegaMillions();
				break;
			case 3:
				getPowerball();
				break;
			case 4: 
				getShowMeCash();
				break;
			case 5: 
				getLuckyForLife();
				break;
			case 6:
				getPick3();
				break;
			case 7:
				getPick4();
				break;
			case 8:
				cout << endl << "Goodbye and Good Luck!!" << endl;
				break;
			default:
				cout << choice << " is not a valid choice." << endl;
		} // end switch
	} // end while
	
	return 0;
}

void getMOLottery() {
	// Create new array to hold lotto numbers
	int Numbers[6];
	
	// Add numbers to array
	for (int i = 0; i < 6; i++) {
		int newNum = randNumGenerator(1, 44);
		bool repeating = true;
		// If newNum is a duplicate, replace it with a new random number
		while (repeating) {
			for (int j = 0; j < 6; j++) {
				if (newNum == Numbers[j]) {
					// New number
					newNum = randNumGenerator(1, 44);
					// Continue through while loop
					repeating = true;
					// break out of for loop
					break;
				}
				else {
					repeating = false;
				}
			}
			
		}
		// Add number to array
		Numbers[i] = newNum;
	}
	
	// Convert array to vector to be able to sort
	vector <int> MOLotto(Numbers, Numbers+6);
	// Sort vector
	sort (MOLotto.begin(), MOLotto.end());
	
	cout << endl << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Here are your Missouri Lottery numbers!" << endl;
	
	// Print out sorted vector 
	for (vector <int>::iterator it = MOLotto.begin(); it != MOLotto.end(); it++) {
		cout << *it << " ";
	}
	
	cout << endl << "------------------------------------------------------";
	cout << endl << endl << endl;
}

void getMegaMillions() {
	// Create new array to hold lotto numbers
	int Numbers[5];
	
	// Add numbers to array
	for (int i = 0; i < 5; i++) {
		int newNum = randNumGenerator(1, 75);
		bool repeating = true;
		// If newNum is a duplicate, replace it with a new random number
		while (repeating) {
			for (int j = 0; j < 5; j++) {
				if (newNum == Numbers[j]) {
					// New number
					newNum = randNumGenerator(1, 75);
					// Continue through while loop
					repeating = true;
					// break out of for loop
					break;
				}
				else {
					repeating = false;
				}
			}
			
		}
		// Add number to array
		Numbers[i] = newNum;
	}
	
	// Convert array to vector to be able to sort
	vector <int> MOLotto(Numbers, Numbers+5);
	// Sort vector
	sort (MOLotto.begin(), MOLotto.end());
	
	cout << endl << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Here are your Mega Millions numbers!" << endl;
	
	// Print out sorted vector 
	for (vector <int>::iterator it = MOLotto.begin(); it != MOLotto.end(); it++) {
		cout << *it << " ";
	}
	
	// Print out random Mega Ball number
	cout << " MB: " << randNumGenerator(1, 15);
	
	cout << endl << "------------------------------------------------------";
	cout << endl << endl << endl;
}

void getPowerball() {
	// Create new array to hold lotto numbers
	int Numbers[5];
	
	// Add numbers to array
	for (int i = 0; i < 5; i++) {
		int newNum = randNumGenerator(1, 69);
		bool repeating = true;
		// If newNum is a duplicate, replace it with a new random number
		while (repeating) {
			for (int j = 0; j < 5; j++) {
				if (newNum == Numbers[j]) {
					// New number
					newNum = randNumGenerator(1, 69);
					// Continue through while loop
					repeating = true;
					// break out of for loop
					break;
				}
				else {
					repeating = false;
				}
			}
			
		}
		// Add number to array
		Numbers[i] = newNum;
	}
	
	// Convert array to vector to be able to sort
	vector <int> MOLotto(Numbers, Numbers+5);
	// Sort vector
	sort (MOLotto.begin(), MOLotto.end());
	
	cout << endl << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Here are your Powerball numbers!" << endl;
	
	// Print out sorted vector 
	for (vector <int>::iterator it = MOLotto.begin(); it != MOLotto.end(); it++) {
		cout << *it << " ";
	}
	
	// Print out random Powerball number
	cout << " PB: " << randNumGenerator(1, 26);
	
	cout << endl << "------------------------------------------------------";
	cout << endl << endl << endl;
}

void getShowMeCash() {
	// Create new array to hold lotto numbers
	int Numbers[5];
	
	// Add numbers to array
	for (int i = 0; i < 5; i++) {
		int newNum = randNumGenerator(1, 39);
		bool repeating = true;
		// If newNum is a duplicate, replace it with a new random number
		while (repeating) {
			for (int j = 0; j < 5; j++) {
				if (newNum == Numbers[j]) {
					// New number
					newNum = randNumGenerator(1, 39);
					// Continue through while loop
					repeating = true;
					// break out of for loop
					break;
				}
				else {
					repeating = false;
				}
			}
			
		}
		// Add number to array
		Numbers[i] = newNum;
	}
	
	// Convert array to vector to be able to sort
	vector <int> MOLotto(Numbers, Numbers+5);
	// Sort vector
	sort (MOLotto.begin(), MOLotto.end());
	
	cout << endl << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Here are your Show Me Cash numbers!" << endl;
	
	// Print out sorted vector 
	for (vector <int>::iterator it = MOLotto.begin(); it != MOLotto.end(); it++) {
		cout << *it << " ";
	}
	
	cout << endl << "------------------------------------------------------";
	cout << endl << endl << endl;
}

void getLuckyForLife() {
	// Create new array to hold lotto numbers
	int Numbers[5];
	
	// Add numbers to array
	for (int i = 0; i < 5; i++) {
		int newNum = randNumGenerator(1, 48);
		bool repeating = true;
		// If newNum is a duplicate, replace it with a new random number
		while (repeating) {
			for (int j = 0; j < 5; j++) {
				if (newNum == Numbers[j]) {
					// New number
					newNum = randNumGenerator(1, 48);
					// Continue through while loop
					repeating = true;
					// break out of for loop
					break;
				}
				else {
					repeating = false;
				}
			}
			
		}
		// Add number to array
		Numbers[i] = newNum;
	}
	
	// Convert array to vector to be able to sort
	vector <int> MOLotto(Numbers, Numbers+5);
	// Sort vector
	sort (MOLotto.begin(), MOLotto.end());
	
	cout << endl << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Here are your Lucky For Life numbers!" << endl;
	
	// Print out sorted vector 
	for (vector <int>::iterator it = MOLotto.begin(); it != MOLotto.end(); it++) {
		cout << *it << " ";
	}
	
	// Print out random Lucky Ball number
	cout << " LB: " << randNumGenerator(1, 18);
	
	cout << endl << "------------------------------------------------------";
	cout << endl << endl << endl;
}

void getPick3() {
	// Create new array to hold lotto numbers
	int Numbers[3];
	
	// Add numbers to array
	for (int i = 0; i < 3; i++) {
		int newNum = randNumGenerator(1, 9);
		// Add number to array
		Numbers[i] = newNum;
	}
	
	cout << endl << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Here are your Pick 3 numbers!" << endl;
	
	// Print out sorted vector 
	for (int i = 0; i < 3; i++) {
		cout << Numbers[i] << " ";
	}
	
	cout << endl << "------------------------------------------------------";
	cout << endl << endl << endl;
}

void getPick4() {
	// Create new array to hold lotto numbers
	int Numbers[4];
	
	// Add numbers to array
	for (int i = 0; i < 4; i++) {
		int newNum = randNumGenerator(1, 9);
		// Add number to array
		Numbers[i] = newNum;
	}
	
	cout << endl << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Here are your Pick 4 numbers!" << endl;
	
	// Print out sorted vector 
	for (int i = 0; i < 4; i++) {
		cout << Numbers[i] << " ";
	}
	
	cout << endl << "------------------------------------------------------";
	cout << endl << endl << endl;
}

int randNumGenerator(int min, int max) {
	int randNum = rand()%(max-min + 1) + min;
	return randNum;
}


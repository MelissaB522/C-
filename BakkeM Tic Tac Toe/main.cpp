#include <iostream>
#include <ctime>
#include <cstdlib>

/*
Name: Melissa Bakke
Date: 03/03/2017
Filename: BakkeM Tic Tac Toe
Description: This program plays a game of tic tac toe vs the computer
*/

using namespace std;

const int SQUARES = 9;

void displayBoard(char gameBoard[]);
// This function displays the game board which it is receiving as a character array.

void playerTurn(char gameBoard[]);
// Prompt user for location and place an X on the board in that location.

void cpuTurn(char gameBoard[]);
// This function plays an O for the cpu in any random spot.

bool isWinner(char gameBoard[]);
// This function returns true if there is a winner and false if there is not.

int main(int argc, char** argv) {
	// Array for the game board
	char gameBoard[SQUARES] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	
	displayBoard(gameBoard);
	
	do {
		playerTurn(gameBoard);
		displayBoard(gameBoard);
		if(isWinner(gameBoard)){
			break;
		}
		cpuTurn(gameBoard);
		displayBoard(gameBoard);
	} while(isWinner(gameBoard) == false);
	 
	return 0;
}

void displayBoard(char gameBoard[]){
	// Display board loop
	for(int row = 0; row < SQUARES; row++){
		cout << gameBoard[row] << " ";
		
		// Put an endline every 3 squares
		if((row + 1) % 3 == 0){
			cout << endl;
		}
	}
	
	cout << endl;
} // end displayBoard

void playerTurn(char gameBoard[]){
	// board location number
	int nBoardSpot;	
	
	// Loops while board location is already used or if input in incorrect
	do{
		// Prompt user
		cout << "Your turn... Pick a number to place your 'X': ";
		cin >> nBoardSpot;
	}while(gameBoard[nBoardSpot - 1] == 'X' || gameBoard[nBoardSpot - 1] == 'O' || nBoardSpot > 9 || nBoardSpot < 1);
	
	gameBoard[nBoardSpot - 1] = 'X';
} // end playerTurn

void cpuTurn(char gameBoard[]){
	//  Pick random number
	srand(time(0));
	int nChoice;
	
	do{
		nChoice = rand() % 9;
	}while(gameBoard[nChoice] == 'X' || gameBoard[nChoice] == 'O');
	
	gameBoard[nChoice] = 'O';
} // end cpuTurn

bool isWinner(char gameBoard[]){
	// Test for user winning horizontally
	if(gameBoard[0] == gameBoard[1] && gameBoard[0] == gameBoard[2] && gameBoard[0] == 'X' || gameBoard[3] == gameBoard[4] && gameBoard[3] == gameBoard[5] && gameBoard[3] == 'X' || gameBoard[6] == gameBoard[7] && gameBoard[6] == gameBoard[8] && gameBoard[6] == 'X'){
		cout << "\nYon Won! Winner, Winner, Chicken Dinner!" << endl;
		return true;
	}
	// Test for cpu winning horizontally
	if(gameBoard[0] == gameBoard[1] && gameBoard[0] == gameBoard[2] && gameBoard[0] == 'O' || gameBoard[3] == gameBoard[4] && gameBoard[3] == gameBoard[5] && gameBoard[3] == 'O' || gameBoard[6] == gameBoard[7] && gameBoard[6] == gameBoard[8] && gameBoard[6] == 'O'){
		cout << "\nCPU won..." << endl;
		return true;
	}
	// Test for user winning vertically
	else if (gameBoard[0] == gameBoard[3] && gameBoard[0] == gameBoard[6] && gameBoard[0] == 'X' || gameBoard[1] == gameBoard[4] && gameBoard[1] == gameBoard[7] && gameBoard[1] == 'X' || gameBoard[2] == gameBoard[5] && gameBoard[2] == gameBoard[8] && gameBoard[2] == 'X') {
		cout << "\nYon won! Winner, Winner, Chicken Dinner!" << endl;
		return true;
	}
	// Test for cpu winning vertically
	else if (gameBoard[0] == gameBoard[3] && gameBoard[0] == gameBoard[6] && gameBoard[0] == 'O' || gameBoard[1] == gameBoard[4] && gameBoard[1] == gameBoard[7] && gameBoard[1] == 'O' || gameBoard[2] == gameBoard[5] && gameBoard[2] == gameBoard[8] && gameBoard[2] == 'O') {
		cout << "\nCPU won..." << endl;
		return true;
	}
	// Test for user winning diagonally
	else if (gameBoard[0] == gameBoard[4] && gameBoard[0] == gameBoard[8] && gameBoard[0] == 'X' || gameBoard[2] == gameBoard[4] && gameBoard[2] == gameBoard[6] && gameBoard[2] == 'X'){
		cout << "\nYon Won! Winner, Winner, Chicken Dinner!" << endl;
		return true;
	}
	// Test for cpu winning diagonally
	else if (gameBoard[0] == gameBoard[4] && gameBoard[0] == gameBoard[8] && gameBoard[0] == 'O' || gameBoard[2] == gameBoard[4] && gameBoard[2] == gameBoard[6] && gameBoard[2] == 'O'){
		cout << "\nCPU won..." << endl;
		return true;
	}
	else{
		// Check for cat game
		for(int n = 0; n < SQUARES; n++){
			if(gameBoard[n] != 'X' && gameBoard[n] != 'O'){
				return false;
			} 
		}		
		cout << "Cat Game!";
		return true;
	}
} // end isWinner

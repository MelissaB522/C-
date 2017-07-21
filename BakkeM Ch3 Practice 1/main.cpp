#include <iostream>
using namespace std;

/*
Name: Melissa Bakke
Date: 02/05/2017
Filename: BakkeM Ch3 Practice 1
Description: Write a program to score the paper-rock-scissor game. Each of two users
types in either P, R, or S. The program then announces the winner as well
as the basis for determining the winner: Paper covers rock, Rock breaks
scissors, Scissors cut paper, or Nobody wins. Be sure to allow the users
to use lowercase as well as uppercase letters. Your program should include
a loop that lets the user play again until the user says she or he is done.
*/

int main(int argc, char** argv) {
	// Declare variables
	char player1, player2, ans;
	
	// Game loop
	do {
		// Players 1 choose how to play
		bool validated = false; // bool for validation
		while (!validated)
		{
			cout << "Player one - enter R for rock, P for paper, S for scissors.";
			cin >> player1;
			player1 = toupper(player1); // convert player choice to upper case letter
			// loop again if invalid, else leave loop
			if (player1 != 'R' && player1 != 'P' && player1 != 'S'){
				cout << "You made an invalid selection. Try again." << endl;
			}
			else {
				validated = true;
			}
		} // end while loop
		cout << "Player one chose : " << player1 << endl << endl;
		
		// Players 2 choose how to play
		validated = false;
		while (!validated)
		{	
			cout << "Player two - enter R for rock, P for paper, S for scissors.";
			cin >> player2;
			player2 = toupper(player2); // convert player choice to upper case letter
			// loop again if invalid, else leave loop
			if (player2 != 'R' && player2 != 'P' && player2 != 'S'){
				cout << "You made an invalid selection. Try again." << endl;
			}
			else {
				validated = true;
			}
		}
		cout << "Player two chose : " << player2 << endl << endl;
		
		// Determine winner
		if (player1 == player2){
			cout << "It's a draw." << endl;
		}
		else {
			if ((player1 == 'R' && player2 == 'S') || (player1 == 'S' && player2 == 'P') || (player1 == 'P' && player2 == 'R'))  {
				cout << "Player 1 has won!" << endl;
			}
			else {
				cout << "Player 2 has won!" << endl;
			}
		}
		
		// Prompt user to play again
		cout <<  endl << "Do you want to play again? Y for yes, any other key for no." << endl;
		cin >> ans;
		cout << endl;
	
	} while (ans == 'y' || ans == 'Y');
	
	cout << "Thanks for playing!" << endl;
	
	return 0;
}

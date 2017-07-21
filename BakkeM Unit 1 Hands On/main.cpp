#include <iostream>
#include <ctime>
#include <cstdlib>

/*
Name: Melissa Bakke
Date: 03/16/2017
Filename: BakkeM Unit 1 Hands On
Description: This program prompts user for the number of rows and columns and prints a random
	0 or 1 in a matrix of the size entered by user 
*/

using namespace std;

void printMatrix(int n, int m);
//This function prints a matrix n by m 

int main(int argc, char** argv) {
	// Declare variables
	int n = 0;
	int m = 0;
	char again;
	
	do{
		// Prompt user
		cout << "Enter the number of rows: " << endl;
		cin >> n;
		cout << "Enter the number of columns: " << endl;
		cin >> m;
		cout << endl;
		
		// Call function
		printMatrix(n, m);
		
		// Print another matrix?
		cout << "\nDo you want to print another matrix? Y for yes, any other key to quit." << endl;
		cin >> again;
	} while (again == 'Y' || again == 'y');
	
	return 0;
}

// Define function
void printMatrix(int n, int m){
	// Pick a random number between 0 and 1
	srand(time(0));
	int output;
	
	// Nested for loops print out matrix with random numbers
	for (int row = 0; row < n; row++){
		for (int col = 0; col < m; col++){
			output = rand() % 2;
			cout << output;
		}
		cout << endl;
	}
		
}

#include <iostream>

/* 
Name: Melissa Bakke
Date: 05/10/17
Description: This program compares recursive vs iterative algorithms which compute the nth element of the fibonacci sequence.
 */
 
 using namespace std;
 
int FibonacciWithRecursion(int nth);
// This recursive returns the nth element in the fibonacci number sequence.

int FibonacciWithIteration(int nth);
// This iterative returns the nth element in the fibonacci number sequence.

int main(int argc, char** argv) {
	string strChoice;
	int nth;
	
	// Menu
	do {
		cout << "----------------------Fibonacci----------------------" << endl;
		cout << "1. \tCalculate nth element using recursion" << endl
			<< "2. \tCalculate nth element using iteration" << endl
			<< "3. \tExit" << endl
			<< "Enter Choice: ";
		cin >> strChoice;
		cout << "What nth element would you like to find? ";
		cin >> nth;
		
		if(strChoice == "1") {
			cout << "The " << nth << "th element is " << FibonacciWithRecursion(nth) << endl;
		}
		else if (strChoice == "2") {
			cout << "The " << nth << " element is " << FibonacciWithIteration(nth) << endl;
		}		
		
	} while(strChoice != "3");
	
	return 0;
}

int FibonacciWithRecursion(int nth) {
	if (nth <= 2) {
		return nth;
	}
	else {
		return FibonacciWithRecursion(nth - 1) + FibonacciWithRecursion(nth - 2);
	}
}

int FibonacciWithIteration(int nth) {
	int nthValue = 0;
	int nthMinusTwo = 1;
	int nthMinusOne = 1;
	
	// Base
	if (nth < 2) {
		return 1;
	}
	
	// Loop to find nth element
	for (int i = 2; i <= nth; i++) {
		nthValue = nthMinusTwo + nthMinusOne;
		nthMinusTwo = nthMinusOne;
		nthMinusOne = nthValue;
	}
	
	return nthValue;
}

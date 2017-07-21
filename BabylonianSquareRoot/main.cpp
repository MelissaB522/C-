#include <iostream>

/*
Name: Melissa Bakke
Date: 01/27/2017
Project: Babylonian Square Root
Description: This program will calculate the square root of a number using the Babylonian Algorithm 
*/
using namespace std;

int main(int argc, char** argv) {
	//declare variables
	double n, r, prevGuess, guess;
	
	//prompt user for number
	cout << "Please enter a number to find the square root: ";
	cin >> n;
	
	//assign initial guess
	guess = n / 2;
	
	do {
		r = n / guess;	
		prevGuess = guess;
		guess = (guess + r) / 2;
	} while (prevGuess - guess > 0.01 * prevGuess);
	
	//display result
	cout << "An approximation of the square root of " << n << " is " << guess;
	
	return 0;
}

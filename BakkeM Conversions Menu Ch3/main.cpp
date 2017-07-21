#include <iostream>
using namespace std;

/* 
Name: Melissa Bakke
Date: 02/04/2017
Filename: BakkeM Conversions Menu Ch 3
Description: This is a menu driven program which will give the user
	the choice between performing a F to C , C to F, or MPH to M/S */

int main(int argc, char** argv) {
	// Choice variable
	int nChoice;
	double degreesF, degreesC, mph;
	
	do {
		// Display menu
		cout << "Main Menu" << endl;
		cout << "---------------------" << endl;
		cout << "1.  Convert F to C." << endl;
		cout << "2.  Convert C to F." << endl;
		cout << "3.  Convert MPH to M/S." << endl;
		cout << "4.  Exit.\n" << endl;
		cout << "Choice: ";
		cin >> nChoice;
		
		// Multibranch decision structure switch statement
		switch (nChoice){
			case 1: 
				cout << "Enter a temp in F: ";
				cin >> degreesF;
				cout << (5.0/9.0) * (degreesF - 32) << " Degrees C." << endl;
				break;
			case 2:
				cout << "Enter a temp in C: ";
				cin >> degreesC;
				cout <<  degreesC * 1.8 + 32 << " Degrees F." << endl;
				break;
			case 3:
				cout << "Enter a speed in MPH: ";
				cin >> mph;
				cout << mph * 0.447 << " M/S." << endl;
				break;
			case 4:
				cout << "Goodbye." << endl;
				break;
			default:
				cout << "Incorrect choice. " << endl;
		} // end switch
		
		cout << endl;
		
	} while (nChoice != 4);
	
	return 0;
}

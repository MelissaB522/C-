#include <iostream>

/* 
Name: Melissa Bakke
Date: 02/12/2017
Filename:Bakke M Ch4-Practice1 Miles Per Gallon
Description: This program outputs the number of miles per gallon based on user inputs of
	liters of gasoline consumed and number of miles traveled.
*/

using namespace std;
const double litersPerGallon = 0.264179;

double calcMPG(double litersConsumed, double milesTraveled);

int main(int argc, char** argv) {
	// Declare variables
	double litersConsumed, milesTraveled;
	char ans;
	
	do {
		// Prompt user for inputs
		cout << "Enter the number of liters of gasoline consumed by your car: ";
		cin >> litersConsumed;
		cout << "Enter the number of miles traveled by the car: ";
		cin >> milesTraveled;
		
		// Call calcMPG function to calculate miles per gallon
		cout << calcMPG(litersConsumed, milesTraveled) << " miles per gallon. " << endl;
		//cout << "You got " << milesTraveled/(litersConsumed*literPerGallon) << " miles per gallon." << endl;
		
		// Prompt user to run again
		cout << "Do you want to run another calculation? Y for Yes, any other key to quit. ";
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');	
	
	return 0;
}

double calcMPG(double liters, double miles) {
	return miles/(liters*litersPerGallon);
}

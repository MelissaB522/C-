#include <iostream>
#include <cmath>

/* 
Name: Melissa Bakke
Date: 02/11/2017
Filename: BakkeM WindChill Ch5
Description: This program calculates wind chill given wind speed and temperature.
 */
 
 using namespace std;
 
 // Function declaration to get wind speed and temp from user by reference(&).
 void getData(double& windSpeed, double& tempC);
 
 // Function declaration to get wind speed and temp and returns the wind chill index
 double calcWindChill(double& windSpeed, double&tempC);

int main(int argc, char** argv) {
	// Declare variables
	double windSpeed, degreesC;
	
	// Call getData function
	getData(windSpeed, degreesC);
	
	// Call calcWind and display results
	cout << "The wind chill index is " << calcWindChill(windSpeed, degreesC) << endl;
	
	return 0;
}

void getData(double& windSpeed, double& degreesC) {
	// validate user input
	do {
		// Prompt user
		cout << "Enter a temperature in Celsius under 10 degrees: " ;
		cin >> degreesC;
	} while (degreesC > 10);
	
	cout << "Enter a wind speed in m/sec: ";
	cin >> windSpeed;
}

double calcWindChill(double& windSpeed, double& degreesC) {
	return 13.12+0.6215*degreesC-11.37*pow(windSpeed,0.16)+0.3965*degreesC*pow(windSpeed,0.016);
}

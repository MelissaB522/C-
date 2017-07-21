#include <iostream>
using namespace std;

/*
Name: Melissa Bakke
Date: 02/04/2017
Filename: BakkeM Archimedes Ch3-6
Description: This program will computer the bouyant force of a sphere
	with user defined radius in feet and weight in pounds.
*/

int main(int argc, char** argv) {
	// Declare variables
	double Fb, V, y = 62.4, sphere_lbs, r;
	char ans;
	
	// loop
	do{
		// Prompt user
		cout << "Enter the weight of the sphere in lbs: ";
		cin >> sphere_lbs;
		
		cout << "Enter the radius of the sphere in feet: ";
		cin >> r;
		
		// Calculate
		V = (4.0/3.0) * (3.14)*r*r*r;
		Fb = V * y;
		
		// Dual branch decision structure
		if(Fb >= sphere_lbs){
			cout << "The sphere will float." << endl;
		} 
		else {
			cout << "The sphere will sink." << endl;
		}
		
		// Prompt user for re-iteration
		cout << "Calculate bouyant force for a new sphere? Y for yes, N for no.";
		cin >> ans;
				
	}while(ans == 'y' || ans == 'Y');
	
	return 0;
}

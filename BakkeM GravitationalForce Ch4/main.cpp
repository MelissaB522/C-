#include <iostream>
#include <cmath>
/*
Name: Melissa Bakke
Date: 02/11/2017
Filename: BakkeM GravitationalForce Ch4
Description: This program computes the Gravitational Force given the
	mass of two objects and the distance between them */

using namespace std;

// Universal Gravitational Constant as a global constant
const double G = 6.673e-8;

// This function receives the mass in gramms of two bodies and
// the distance between them and returns gravitational force between them.
double gravitationalForce(double mass1, double mass2, double distance);

int main(int argc, char** argv) {
	// declare variables
	double mass1, mass2, distance;
	char ans;

	do {
		// User prompts
		cout << "Enter the mass of the first object in grams: ";
		cin >> mass1;
		cout << "Enter the mass of the second object in grams: ";
		cin >> mass2;
		cout << "Enter the distance between the two objects in centimeters: ";
		cin >> distance;

		// Function call and output
		cout << "The force of attraction between object 1 and \nobject 2 at a distance of "
			<< distance << " centimeters is: \n" << gravitationalForce(mass1, mass2, distance) << " dynes." << endl;

		cout << endl << "Calculate force between two new bodies? Type Y for Yes, any other key to quit.";
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');
	return 0;
} // End main

// Function definition
double gravitationalForce(double m1, double m2, double distance) {
	return G * m1 * m2/pow(distance,2);
}

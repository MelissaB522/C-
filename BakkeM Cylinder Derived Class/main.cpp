/*
Name: Melissa Bakke
Date: 4/30/2017
Description: This program demonstrates the Cylinder derived class
*/

#include <iostream>
#include "Cylinder.h"

using namespace std;

int main(int argc, char** argv) {
	// Variables
	double r, h;
	
	// Prompt user for radius
	cout << "Enter the radius of the base of the cylinder: ";
	cin >> r;
	
	// Prompt user for height
	cout << "Enter the height of the cylinder: ";
	cin >> h;
	
	// Instance of a cylinder
	Cylinder cyl(h, r);
	
	// Display surface area and volume
	cout << "\nThe cylinder has a surface area of: " << cyl.getSurfaceArea() << endl;
	cout << "The cylinder has a volume of: " << cyl.getVolume() << endl;
	
	return 0;
}

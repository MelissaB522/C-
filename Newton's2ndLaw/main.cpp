#include <iostream>

/* 
Name: Melissa Bakke
Date: 01/27/2017
Project: Newton's 2nd Law Ch 2
Description: This program will calculate the force-weight in Newtons of a body with 
	a given madd in kg using acceletation due to gravity on Earth as 9.8 m/s^2. F = ma
 */
using namespace std;

int main(int argc, char** argv) 
{
	//declare variables
	double mass, a = 9.8;
	
	//prompt user for mass
	cout << "Enter the mass of a body in kg: ";
	cin >> mass;
	
	//calculate results and display
	cout << "\nThe force-weight in Newtons of a body with mass of " << mass << "kg is " 
		 << mass * a << "N.\n";
	
	return 0;
}

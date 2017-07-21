/*
Name: Melissa Bakke
Date: 4/25/2017
Description: This program demonstrates class structure and implementation of that class.
*/

#include <iostream>
#include <vector>
#include "NinjaTurtle.h"

using namespace std;

int main(int argc, char** argv) {
	vector<NinjaTurtle> myTurtles;
	string strInfo, strContinue;
	int nAge;
	
	// Instance of a Ninja Turtle
	NinjaTurtle don("Donatello", "Purple", "Bo", 15);
	
	myTurtles.push_back(don);
	
	do{
		// new turtle instance
		NinjaTurtle nextTurtle;
		
		cout << "Enter the Turtle's Name: ";
		getline(cin, strInfo);
		nextTurtle.setName(strInfo);
		
		cout << "Enter the Turtle's Color: ";
		getline(cin, strInfo);
		nextTurtle.setColor(strInfo);
		
		cout << "Enter the Turtle's Wacky Weapon: ";
		getline(cin, strInfo);
		nextTurtle.setWeapon(strInfo);
		
		do{
			cout << "Enter the Turtle's Age (teenage): ";
			cin >> nAge;
			getchar(); //absorb <enter>
		} while (!nextTurtle.setAge(nAge));
		
		
		myTurtles.push_back(nextTurtle);
		
		cout << "Do you want to create another turtle? Y for yes. ";
		getline(cin, strContinue);
		
	} while(strContinue == "Y" || strContinue == "y");
	
	for(int n = 0; n < myTurtles.size(); n++){
		cout << myTurtles.at(n).toString() << endl;
	}	
	
	return 0;
}

#include <iostream>
#include <fstream>

#include "DataAccessor.h"

/* 
Name: Melissa Bakke
Date: 04/19/2017
Filename: BakkeM Unit 2 Hands On
Description: This program will store a person's name and age to a file and allow user to view the data in the file.
*/

using namespace std;

void addData();
// This function will prompt user for name and age and add it to the file.

void viewData();
// This function will display the names and ages from the file.

int main(int argc, char** argv) {
	// Variables
	string strChoice = "";
	
	// Menu loop
	while(strChoice != "3"){
		// Main menu
		cout << "\n\tMain Menu\n\n";
		cout << "1.\tAdd data to file\n";
		cout << "2.\tView data in file\n";
		cout << "3.\tExit\n\n";
		cout << "Enter a choice: ";		
		getline(cin, strChoice);

		// Process choice
		if(strChoice == "1"){
			addData();
		}
		else if(strChoice == "2"){
			viewData();
		}
		else if(strChoice == "3"){
			cout << "Goodbye." << endl;
		}
		else {				
			cout << strChoice << " is an invalid choice.\n";
		} 
		
	} // End while loop
	return 0;
}

void addData() {
	string strName, strAge, strData, strFileName;
	vector<string> vData(1);
	
	strFileName = "unit2.txt";
	
	// Add name
	cout << "Enter a name to add to the file\n";
	getline(cin, strName);
	// Add age
	cout << "Enter an age to add to the file\n";
	getline(cin, strAge);
	// Add entries to one string object	
	strData = strName + ", " + strAge;
	
	// Storage loop
	while(true){
		vData.push_back(strData);
		
		// Reprompt user
		cout << "Enter another name or 'Q' to quit.\n";
		getline(cin, strName);
		// If user enters "Q" break out of the while loop
		if (strName == "q" || strName == "Q") {
			break;
		}
		cout << "Enter another age to add to the file\n";
		getline(cin, strAge);	
		strData = strName + ", " + strAge;
	}
	
	// Send vector to saveData
	saveData(vData, strFileName, true);
}

void viewData() {
	// Declare variables
	vector<string> vData;
	string strFileName = "unit2.txt";
	string strData;
	string str1 = ",";
	int commaPos;
	vData = getData(strFileName);
	
	// Loop through vector
	for(int n = 1; n < vData.size(); n++){
		// Add each line to string
		strData = vData.at(n);
		// Locate position of comma
		commaPos = strData.find(str1);
		// Print out name, text between beginning of string and comma position
		cout << "Name: " << strData.substr(0, commaPos) << endl;
		// Print out age, text between comma position plus 2 (to account for comma and space) and length of string minus comma position
		cout << "Age: " << strData.substr(commaPos + 2, strData.length() - commaPos) << endl << endl;
	}
}

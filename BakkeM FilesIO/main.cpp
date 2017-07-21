#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "DataAccessor.h"

/* 
Name: Melissa Bakke
Date:  02/24/2017
Filename: BakkeM FilesIO
Description: This menu-driven program will allow the user to save names in a file and then read contents of that file.
*/

using namespace std;

void addNames();
// This function prompts user for names and stores them into a file with the name and extension user specifies

void viewNames();
// This function will display the names from a file with the name and extension user specifies

void sortNames();
// This function sorts all of the names in the file alphabetically and stores the sorted text back into file

int main(int argc, char** argv) {
	// Variables
	int nChoice = 0;
	
	// Menu loop
	while(nChoice != 4){
		// Main menu
		cout << "\n\tMain Menu\n\n";
		cout << "1.\tAdd Names to File\n";
		cout << "2.\tView Names in File\n";
		cout << "3.\tSort Names in File\n";
		cout << "4.\tExit\n";		
		cin >> nChoice;
		getchar(); // Absorbs carriage return
				
		// Process choice
		switch(nChoice){
			case 1:
				addNames();
				break;
			case 2:
				viewNames();
				break;
			case 3:
				sortNames();
				break;
			case 4:
				cout << "Goodbye." << endl;
				break;
			default:
				cout << nChoice << " is an invalid choice.\n";
		} // End switch
	} // End while loop
	
	return 0;
} // End main

void addNames(){
	
	string strName, strFileName;
	vector<string> vNames(1);
	
	// Prompt user for name of file
	cout << "Enter the file name with the extension: ";
	getline(cin, strFileName);
	
	// Add names
	cout << "Enter a name to add to the file\n";
	getline(cin, strName);
	
	// Storage loop
	while(strName != "Q" && strName != "q"){
		vNames.push_back(strName);
		
		// Reprompt user
		cout << "Enter another name or 'Q' to quit.\n";
		getline(cin, strName);
	}
	
	// Send vector to saveData
	saveData(vNames, strFileName, true);
		
} // End addNames

void viewNames(){	
	// Vector to hold returned vector getData
	vector<string> vNames;
	string strFileName;
	
	// Prompt user for file name
	cout << "Enter the file name with extension: ";
	getline(cin,strFileName);
	
	vNames = getData(strFileName);
	
	// Dump vector into file
	for(int n =  0; n < vNames.size(); n++){
		// Display name
		cout << vNames.at(n) << endl;	
	}
}

void sortNames(){
	// Declare variable/object definitions
	vector<string> vNames;
	string strFileName, strChoice;
	
	// Prompt user for file name
	cout << "Enter the file name with extension to sort: ";
	cin >> strFileName;
	
	vNames = getData(strFileName);
	
	// Sort text
	sort(vNames.begin(), vNames.end());
	
	// Display sorted vector
	for(int n = 0; n < vNames.size(); n++){
		cout << vNames.at(n) << endl;
	}
	
	// Prompt user to overwrite file
	cout << endl << "Would you like to overwrite the file with the sorted names? \nY for yes, N for no.";
	cin >> strChoice;
	
	if(strChoice == "Y" || strChoice == "y"){
		saveData(vNames, strFileName, false);
	}
}

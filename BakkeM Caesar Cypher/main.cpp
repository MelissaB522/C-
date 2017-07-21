#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
/* 
Name: Melissa Bakke
Date:  04/06/2017
Filename: BakkeM Caesar Cypher
Description: This program allows the user to encrypt and decrypt messages using the Caesar Cypher
*/

using namespace std;

void encode();
// Encodes a string message from the user and outputs the encoded message.

void decode();
// Prompts the user for an encoded message and displays all possible (25) decoded plain text

int main(int argc, char** argv) {
	string strChoice;
	
	do {
		cout << "----------------Caesar Cypher----------------\n\n"
			 << "1. \tEncode\n"
			 << "2. \tDecode\n"
			 << "Select a menu option: ";
		
		// Read user choice
		getline(cin, strChoice);
		
		if (strChoice == "1") {
			encode();
		}
		else if (strChoice == "2") {
			decode();
		}
		else {
			cout << "Invalid choice. Choose 1 or 2: ";
		}
		
	} while (strChoice != "1" || strChoice != "2");
	return 0;
}

void encode() {
	// Variables
	string strMessage;
	srand(time(0));
	int randNum = rand()%25+1;
	char c;
	
	// Prompt user for message to encode
	cout << "Type the message you wish to encode: ";
	getline(cin, strMessage);
	
	for(int n = 0; n < strMessage.length(); n++) {
		// Weed out spaces
		if(isalpha(strMessage.at(n))) {
			c = toupper(strMessage.at(n));
			c = (((c-65)+randNum)%26)+65;
		}
		else {
			c = strMessage.at(n);
		}
		
		 cout << c;
	} // End for
	
	cout << endl << endl;
} // End encode 

void decode() {
	string strMessage;
	char c;
	
	//Prompt user for message to decode
	cout << "Type the message you wish to decode: ";
	getline(cin, strMessage);
	
	for (int i = 0; i < 26; i++) {
		for(int n = 0; n < strMessage.length(); n++) {
		// Weed out spaces
		if(isalpha(strMessage.at(n))) {
			c = toupper(strMessage.at(n));
			c = (((c-65)+i)%26)+65;
		}
		else {
			c = strMessage.at(n);
		}
		
		cout << c;
	
		}// End inner for loops
		cout << endl;
	} // End outer for loop
	
	cout << endl;
} // End decode

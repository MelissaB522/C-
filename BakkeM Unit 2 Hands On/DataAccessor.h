/*
This Header file contains two functions, getData and saveData, which access a file 
and retrieve contents or place additional text into the file respectively
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void saveData(vector<string> vData, string strFileName, bool isAppendMode) {
	// Object instance
	ofstream fileOut;
	
	// Open the file in specified mode
	if(isAppendMode){
		fileOut.open(strFileName.c_str(), ios::app);
	}
	else {
		fileOut.open(strFileName.c_str());
	}
	
	// Dump vector into file
	for(int n =  0; n < vData.size(); n++){
		if(vData.at(n) != ""){
			// Output name to file
			fileOut << vData.at(n) << endl;
		}
	}	
	
	// Close file
	fileOut.close();
} // End saveData

vector<string> getData(string strFileName){
	// Object instance
	string strNames;
	ifstream fileIn;
	vector<string> vData(1);
	
	// Open file
	fileIn.open(strFileName.c_str());
	
	// Read line from file
	getline(fileIn,strNames);
	
	// Get data while looping through file
	while(!fileIn.eof()){		
		vData.push_back(strNames);
		getline(fileIn,strNames);
	}
	
	// Close file
	fileIn.close();
	
	return vData;
} // End getData

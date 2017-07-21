#include <iostream>
#include <string>
/* 
Name: Melissa Bakke
Date: 05/05/17
Description: 13-6 PE Linked lists. This program determines where to stand in a line of suitors that are elimincated based on the number of letters in the princess' name. 
It works by creating a circular linked list and simulating the elimination process. */

using namespace std;

struct SuitorNode {
	int position;
	SuitorNode *next;
	
};

typedef SuitorNode* SNPtr;

int main(int argc, char** argv) {
	string strPrincessName;
	int nSuitors;
	
	// Prompt user for Princess' name and # of suitors
	cout << "What is the first name of the lovely princess?";
	cin >> strPrincessName;
	
	cout << "Enter the number of suitors: ";
	cin >> nSuitors;
	
	// Pointer definitions
	SNPtr current;
	SNPtr tail;
	SNPtr prev;
	
	// Create first node
	current = new SuitorNode;
	current->position = 1;
	current->next = current;
	tail = current;
	
	// Create rest of nodes
	for(int n = 1; n < nSuitors; n++) {
		SNPtr temp = new SuitorNode;
		temp->position = n+1;
		temp->next = tail->next;
		tail->next = temp;
		tail = temp;
	}
	
	// Process suitors
	while(current->next != current) {
		// Count down the line in the linked list based on length of princess's name
		for (int n = 1; n < strPrincessName.length(); n++) {
			prev = current;
			current = current->next;
		}
		
		// Eliminate node that current points to
		prev->next = current->next;
		delete(current);
		current = prev->next;
	}
	
	cout << "To win the hand of the princess, you should stand in position "
		<< current->position << endl;
	
	return 0;
}

#include<iostream>
#include<cstdlib>
#include<string>
#include "Student.h"

/* 
Name: Melissa Bakke
Date: 05/15/17
Description: This program allows a student's scores to be entered and outputs the student's record, 
including all individual grades, the average number grade for the class, and the letter grade for the class.
*/

using namespace std;

int main(int argc, char** argv) {
	// Variables
	string name;
	double q1;
	double q2;
	double midterm;
	double final;
	double avg;
	char letter;
	
	// Prompt user for information
	cout << "Enter student's name: " << endl;
	getline(cin, name);
	cout << "Enter the first quiz score (0-10): " << endl;
	cin >> q1;
	cout << "Enter the second quiz score (0-10): " << endl;
	cin >> q2;
	cout << "Enter the midterm exam score (0-100): " << endl;
	cin >> midterm;
	cout << "Enter the final exam score (0-100): " << endl;
	cin >> final;
	
	// Instance of a student
	Student newStudent(name, q1, q2, midterm, final);
	
	// Display student grades
	cout << "\n" + name + "'s grades" << endl;
	cout << "--------------------------" << endl;
	cout << "Quiz 1: " << q1 << endl;
	cout << "Quiz 2: " << q2 << endl;
	cout << "Midterm Exam: " << midterm << endl;
	cout << "Final Exam: " << final << endl;
	cout << "Average grade: " << newStudent.ClassAvg() << "%" << endl;
	cout << "Letter grade: " << newStudent.LetterGrade() << endl;
	
	return 0;
}

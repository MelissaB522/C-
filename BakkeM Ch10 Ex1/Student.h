/*
Student class - This class describes a student, storing the grades from a course and contains functions to calculate average and letter grades.
*/

#include <iostream>

using namespace std;

class Student {
	public:
		string studentName;
		double quiz1;
		double quiz2;
		double midtermExam;
		double finalExam;
		double averageGrade;
		char letterGrade;
		double quizAvg;
		
		// Default constructor
		Student(){}
		
		Student(string name, double q1, double q2, double midterm, double final) {
			studentName = name;
			quiz1 = q1;
			quiz2 = q2;
			midtermExam = midterm;
			finalExam = final;
		}
		
		// getters and setters
		string getName() {
			return studentName;
		}
		void setName(string name) {
			studentName = name;
		}		
		double getQ1() {
			return quiz1;
		}		
		void setQ1(double q1) {
			quiz1 = q1;
		}		
		double getQ2() {
			return quiz2;
		}		
		void setQ2(double q2) {
			quiz2 = q2;
		}		
		double getMidterm() {
			return midtermExam;
		}		
		void setMidterm(double midterm) {
			midtermExam = midterm;
		}		
		double getFinal() {
			return finalExam;
		}		
		void setFinal(double final) {
			finalExam = final;
		}
				
		// Function to calculate quiz average
		void QuizAvg(){
			quizAvg = ((quiz1 + quiz2) / 2) * 0.25;
		}
		
		// Function to calculate class avarage
		double ClassAvg(){
			// Multiple scores times percentage they are worth
			double midAvg = midtermExam * 0.25;
			double finalAvg = finalExam * 0.50;
			quizAvg = QuizAvg();
			// Add average grades together to get total average
			averageGrade = (quizAvg + midAvg + finalAvg);
			return averageGrade;
		}
		
		// Function to get letter grade
		char LetterGrade(){
			if (averageGrade >= 90) {
				letterGrade = 'A';
			}
			else if (averageGrade >= 80) {
				letterGrade = 'B';
			}
			else if (averageGrade >= 70) {
				letterGrade = 'C';
			}
			else if (averageGrade >= 60) {
				letterGrade = 'D';
			}
			else {
				letterGrade = 'F';
			}
			return letterGrade;
		}
};

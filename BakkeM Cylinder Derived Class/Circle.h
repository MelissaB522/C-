/*
Circle class - This class describes a circle, storing the radius as a private data member and contains functions to calculate the circumference and area.
*/

#include <iostream>

using namespace std;

//Circle Class definition
class Circle{
	private:
		const double PI = 3.14159;
		double radius = 0;
		
	public:
		// Default constructor
		Circle(){}
		
		Circle(double r){
			radius = r;
		}
		
		// Accessors and Mutators
		double getRadius(){
			return radius;
		}
		
		void setRadius(double r){
			radius = r;
		}
		
		// Member functions
		double getCircumference(){
			return 2 * radius * PI;
		}
		
		double getArea(){
			return PI * radius * radius;
		}
}; // end of Circle class

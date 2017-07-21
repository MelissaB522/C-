/*
Cylinder Derived Class - this class describes a cylinder, deriving it from a circle. It contains functions that calculat the surface area and volume of the cylinder.
*/

#include <iostream>
#include "Circle.h"

using namespace std;

class Cylinder:public Circle{
	private:
		double height; // height or length of cylinder
		
	public:
		// Constructor (invokes circle constructor)
		Cylinder(double h, double r):Circle(r){
			height = h;
		}
		
		// Accessors and Mutators
		double getHeight(){
			return height;
		}
		
		void setHeight(double h){
			height = h;
		}
		
		// Member functions
		double getSurfaceArea(){
			return (getArea() * 2) + (getCircumference() * height);
		}
		
		double getVolume(){
			return (getArea() * height);
		}
		
};

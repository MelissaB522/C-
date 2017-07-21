#include <iostream>

using namespace std;

class NinjaTurtle{
	private:
		string name;
		string color;
		string weapon;
		int age;
		
		public:
			// Default constructor
			NinjaTurtle(){}
			
			NinjaTurtle(string strName, string strColor, string strWeapon, int nAge) {
				name = strName;
				color = strColor;
				weapon = strWeapon;
				age = nAge;
				
			}
			
			string getName(){
				return name;
			}
			
			void setName(string strName){
				name = strName;
			}
			
			string getColor(){
				return color;
			}
			
			void setColor(string strColor){
				color = strColor;
			}
			
			string getWeapon(){
				return weapon;
			}
			
			void setWeapon(string strWeapon){
				weapon = strWeapon;
			}
			
			int getAge(){
				return age;
			}
			
			// Sets Ninja Turtle Age if value is teenage years, returns false if age wasn't set, true if it was
			bool setAge(int nAge){
				// Validate age
				if (nAge > 19 || nAge < 13){
					return false;
				}
				else{
					age = nAge;
					return true;
				}
			}
			
			string toString(){
				return name + " wears " + color + " and fights with " + weapon; 
			}
};

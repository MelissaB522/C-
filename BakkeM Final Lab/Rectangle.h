//This file defines the Rectangle and Block classes as well as handling DB functions 
//getBlock and saveBlock

#include <iostream>
#include <string>
#include <fstream>


using namespace std;


//Rectangle Class Declaration
class Rectangle
{
private:
	long width;
	long length;

public:
	Rectangle(){}
	
       //constructor sets width and length
	Rectangle(long w, long l)
		{ width = w; length = l; calcArea(); }

     //accessor functions for width and length
	long getWidth() 
		{ return width; }

	long getLength() 
		{ return length; }

    //returns the rectangle's area
	long calcArea() 
		{ 
          long temp = length * width;
          return temp;
        }
};

//<-------- Create block class
class Block : public Rectangle
{
	private:
		long height;
		
	public:
		// Block constructor
		Block():Rectangle(){}
		
		Block(long h, long l, long w): Rectangle(w, l) 
		{
			height = h;		
		}
		
		double getSurfArea() 
		{
			return (2 * height * getLength()) + (2 * getLength() * getWidth()) + (2 * getWidth() * height);
		}
		
		double getVolume() 
		{
			return height * getLength() * getWidth();
		}
};



void saveBlock(string ID, long width, long  length, long  height)
{
    ofstream fileOut;
     
    //open file
    fileOut.open("Blocks.txt", ios::app);
     
    //<-------------------------code to place comma delimited block in text file
    fileOut << ID << "," << width << "," << length << "," << height << endl;
    
    fileOut.close();
     
}//end saveBlock



void getBlock(string blockID)
{
   ifstream fileIn;
   string record;

   fileIn.open("Blocks.txt"); 
  
   //if file doesn't open
   if (fileIn.fail())
   {
       cout << "Problem Opening File.";
   }
   else
   {
       while(!fileIn.eof())
        {              
            //<-----------------------------place code to search through file for block 
            //place code to search through file for a block
            getline(fileIn, record);
			int firstComma = record.find(",");
			string recordID = record.substr(0, firstComma);
			
			// See if record Id matches
			if (recordID == blockID) {
				int secondComma = record.find(",", firstComma + 1);
				int thirdComma = record.find(",", secondComma + 1);
				string width = record.substr(firstComma + 1, secondComma - firstComma - 1);
				string length = record.substr(secondComma + 1, thirdComma - secondComma - 1);
				string height = record.substr(thirdComma + 1);
				
				// Display tank
				cout << recordID << " was found on record" << endl;
				cout << "\tWidth: " << width << endl;
				cout << "\tLength: " << length << endl;
				cout << "\tHeight: " << height << endl;
				
				fileIn.close();
				return;
			}
                               
                                                       
        }//end while
        
        cout << "Block not on record";
        return;
     
  
    }//end else
    
   
}//end getBlock


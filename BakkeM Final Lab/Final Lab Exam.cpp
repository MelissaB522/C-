/*
Name: Melissa Bakke
Date: 5-18-13
File:  Final Lab Exam.cpp
Description:  This program will calculate the surface area and volume of a regular
block which.  It uses a rectangle class for the base of the block and then derives
the block class from the rectangle class.
*/

#include <iostream>
#include <string>
#include "Rectangle.h"
using namespace std;

void makeBlock();
//creates new block

 
int main()
{
    
     //menu variables
    int choice = 0;
    string blockID;
    
	while (choice !=3)
	{
		//main menu
		cout << "\n\tMain Menu\n\n";
		cout << "1.\tCreate New Block\n";
		cout << "2.\tRetrieve Saved Block\n";
		cout << "3.\tExit\n";
		cin >> choice;
		
		
		//process choice
		switch (choice)
		{
			case 1:
			     makeBlock();
			     break;
			case 2:
			     cout<< "Enter block ID with no spaces: ";
			     cin >> blockID;
			     getBlock(blockID);
			     break;
			case 3:
			     break;
			default:
			cout << choice << "is not a valid choice.\n";
		}//end switch
	
	}//end while
    
    
}//end Main  

void makeBlock()
{     
    string saveYN;
    string blockID;
    long length, width, height, SurfArea, Volume;
    
    
    //user input for block length
    do
    {
        cout << "Enter the length of the base as a positive rational number in meters: ";
        cin >> length;
        
           
    }while(length < 0);
    
    
    //Rectangle base width
    do
    { 
        cout << "Enter the width of the base: ";
        cin >> width;
           
    }while(width < 0);
   
    //<----------------------place code here that prompts user for height.
    //Rectangle height
    do
    { 
        cout << "Enter the height of the rectangle: ";
        cin >> height;
           
    }while(height < 0);
    
    //instances of the Rectangle class
    Rectangle rec(width, length);
    
    //<----------------------------------instance of block class code here
    Block newBlock(height, length, width);
    
    //<----------------------------------------calculations here
    SurfArea = newBlock.getSurfArea();
    Volume = newBlock.getVolume();
    
    //calculate
    cout << "The surface area of the block is: " << SurfArea << endl;//<-----display surface area here
    cout << "The block has a volume of: " << Volume << endl; //<-----------dispay volume here
    
    cout << "Save this block (y/n)? ";
    cin >> saveYN;
    
    if( saveYN == "y" || saveYN == "Y")
    {
       cout << "block ID with no spaces: ";
       cin >> blockID;
       saveBlock(blockID, width, length, height); 
    }
}



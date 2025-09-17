// Justine C. Escueta
// COE251
// Prof: Engr. Marlon Bagara

// practice i/o file

// Libraries
#include <iostream>
#include <conio.h>
#include <math.h>
#include <fstream>
#include <time.h>

// namespace
using namespace std;

// Main Function
int main()
{
	// Declaration of Variables
	string data, program, section;
	int age, ageinm;
	
	// Open a file in write mode 
	ofstream copy;
	copy.open("receipt", ios::app); // Opening a file and creating a namefile
	
			// Current date and time
			time_t now = time(0);
			
			// convert now to string form
			char* dt = ctime(&now);
	
	// For time		
	copy<<"\nThe local time and date is: "<<dt<<endl;
	cout<<"\nThe local time and date is: "<<dt<<endl;
	
	// Input and reciept for name
	cout<<"Enter your name: "; getline(cin, data);
	copy<<"Enter your name: ";
	copy<<data<<endl;
	
	// Input and reciept for program
	cout<<"Enter your program: "; getline(cin, program); 
	copy<<"Enter you program: ";
	copy<<program<<endl;
	
	// Input and reciept for section
	cout<<"Enter your section: "; getline(cin, section); 
	copy<<"Enter your section: ";
	copy<<section<<endl;
	
	// Input and reciept for age
	cout<<"Enter your age: "; cin>>age;
	copy<<"Enter your age: ";
	copy<<age<<endl;
	
	// Variable Initialization for age in months
	ageinm = age * 12;
	
	// Output for Age in Months
	cout<<"\nYour age in Months is: "<<ageinm<<endl;
	copy<<"Your age in Months is: ";
	copy<<ageinm<<endl;

	// Display a line
	copy<<"______________________________";

	// Close the opened file 
	copy.close();
	
	getch ();
	
}
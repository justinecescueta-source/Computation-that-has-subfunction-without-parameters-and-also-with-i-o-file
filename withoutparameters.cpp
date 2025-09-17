// Justine C. Escueta
// COE 251
// Prof: Engr. Marlon Bagara

// Without Parameters

// Libraries
#include <iostream>
#include <conio.h>
#include <iomanip> // This library is for fixed, this is for decimal places, and setprecision for how many decimal places
#include <math.h>
#include <time.h>
#include <fstream>
#include <string.h>
#include <windows.h>
#include <process.h>

// Namespace
using namespace std;

// gotoxy
void gotoxy (int,int);
void clrscr();

void gotoxy(int x,int y)

{
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;

	dwCursorPosition.X=x;
	dwCursorPosition.Y=y;
	hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);

}

void clrscr()

{

	system("cls");

}

// Declaration, I declare it here so I can use it in main function and subfunction such as; sub, add, mult, and div
ofstream receipt;

// Subfunction prototype
float add();
void sub();
float mult();
void div();

// Main function
int main(){
	
		// Opening a file and creating a namefile
		receipt.open("copy", ios::app); 
	
			// Current date and time
			time_t now = time(0);
			
			// Convert now to string form
			char* dt = ctime(&now);
				
	// Print and receipt for time and date
	receipt<<"\nThe local time and date is: "<<dt<<endl;
	cout<<"\nThe local time and date is: "<<dt<<endl;	
	  
	// Calling the Subfunction
	add(); // Calls the add function
	sub(); // Calls the sub function
	mult(); // Calls the mult function
	div(); // Calls the div function
	
	// Display a line
	receipt<<"================================";

	// Close the opened file 
	receipt.close();
	
	getch();
	
} // End of the Main function

float add() // Subfunction
{
	// Declaration of Variable
	float a1, a2, a3, sum;
	
	// Header for addition
	gotoxy(18, 4); cout<<"A D D I T I O N";
	receipt<<"A D D I T I O N"<<endl;
	
	// Input for the 1st number
	gotoxy(5, 5); cout<<"Input the 1st number here: "; cin>>a1;
	// Receipt for the 1st number
	receipt<<"Input the 1st number here: ";
	receipt<<fixed<<setprecision(2)<<a1<<endl; // I accidentally discovered that by putting fixed setprecision in receipt also affect other subfunction variable's receipt except to those variable receipt that has their own fixed setprecision included
	// Input for the 2nd number
	gotoxy(5, 6); cout<<"Input the 2nd number here: "; cin>>a2;
	// Receipt for the 2nd number
	receipt<<"Input the 2nd number here: ";
	receipt<<a2<<endl;
	// Input for the 3rd number
	gotoxy(5, 7); cout<<"Input the 3rd number here: "; cin>>a3;
	// Receipt for the 3rd number
	receipt<<"Input the 3rd number here: ";
	receipt<<a3<<endl;
	
	// Variable Initialization
	sum = a1 + a2 + a3;
	
	// Output for the sum
	gotoxy(5, 9); cout<<"Sum = "<<fixed<<setprecision(2)<<sum;
	
	// Receipt for the sum
	receipt<<"Sum = ";
	receipt<<sum<<endl; 
	
	// Return the sum value to the add subfunction
	return sum;
	
} // End of the Subfunction

void sub() // Subfunction
{

	// Declaration of Variables
	float s1, s2, s3, diff;
	
	// Header for subtraction
	gotoxy(15, 11); cout<<"S U B T R A C T I O N";
	receipt<<"S U B T R A C T I O N"<<endl;
	
	// Input for the 1st number
	gotoxy(5, 12); cout<<"Input the 1st number here: "; cin>>s1;
	// Receipt for the 1st number
	receipt<<"Input the 1st number here: ";
	receipt<<s1<<endl;
	// Input for the 2nd number
	gotoxy(5,13); cout<<"Input the 2nd number here: "; cin>>s2;
	// Receipt for the 2nd number
	receipt<<"Input the 2nd number here: ";
	receipt<<s2<<endl;
	// Input for the 3rd number
	gotoxy(5,14); cout<<"Input the 3rd number here: "; cin>>s3;
	// Receipt for the 3rd number
	receipt<<"Input the 3rd number here: ";
	receipt<<s3<<endl;
	
	// Variable initialization for the diff of 1st and 2nd number
	diff = s1 - s2;
	
	// Output for the difference 
	gotoxy(5, 16); cout<<"Difference = "<<fixed<<setprecision(2)<<diff;
	
	// Receipt for the difference 
	receipt<<"Difference = ";
	receipt<<diff<<endl;
	
} // End of the Subfunction	

float mult() // Subfunction
{
	
	// Declaration of Variables
	float x1, x2, x3, product;
	
	// Header and receipt for multiplication
	gotoxy(13, 18); cout<<"M U L T I P L I C A T I O N";
	receipt<<"M U L T I P L I C A T I O N"<<endl;
	
	// Input for the 1st number
	gotoxy(5,19); cout<<"Input the 1st number here: "; cin>>x1;
	// Receipt for the 1st number
	receipt<<"Input the 1st number here: ";
	receipt<<x1<<endl;
	// Input for the 2nd number
	gotoxy(5,20); cout<<"Input the 2nd number here: "; cin>>x2;
	// Receipt for the 2nd number
	receipt<<"Input the 2nd number here: ";
	receipt<<x2<<endl;
	// Input for the 3rd number
	gotoxy(5,21); cout<<"Input the 3rd number here: "; cin>>x3;
	// Receipt for the 3rd number
	receipt<<"Input the 3rd number here: ";
	receipt<<x3<<endl;
	
	// Variable initialization
	product = x1 * x2 * x3;
	
	// Output for the product 
	gotoxy(5, 23);cout<<"Product = "<<fixed<<setprecision(2)<<product;
	
	// Receipt for the product
	receipt<<"Product = ";
	receipt<<product<<endl;
	
	// Return the value of the product to the subfunction mult
	return product;
	
} // End of Subfunction

void div() // Subfunction
{
	
	// Declaration of Variables
	float d1, d2, d3, quotient;
	
	// Header for division
	gotoxy(18,25); cout<<"D I V I S I O N";
	receipt<<"D I V I S I O N"<<endl;

	// Input for the 1st number
	gotoxy(5,26); cout<<"Input the 1st number here: ";cin>>d1;
	// Receipt for the 1st number
	receipt<<"Input the 1st number here: ";
	receipt<<d1<<endl;
	// Input for the 2nd number
	gotoxy(5,27); cout<<"Input the 2nd number here: ";cin>>d2;
	// Receipt for the 2nd number
	receipt<<"Input the 2nd number here: ";
	receipt<<d2<<endl;
	// Input for the 3rd number
	gotoxy(5,28); cout<<"Input the 3rd number here: ";cin>>d3;
	// Receipt for the 3rd number
	receipt<<"Input the 3rd number here: ";
	receipt<<d3<<endl;
	
	// Variable initialization for quotient of 2nd and 3rd number
	quotient = d2 / d3;
	
	// Output for the quotient 
	gotoxy(5, 30); cout<<"Quotient = "<<fixed<<setprecision(3)<<quotient; // 3 decimals places for more precise value
	
	// Receipt for the quotient 
	receipt<<"Quotient = ";
	receipt<<fixed<<setprecision(3)<<quotient<<endl; // 3 decimals places for more precise value
		
} // End of the Subfunction

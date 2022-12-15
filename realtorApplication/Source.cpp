/*
Title: Chapter Ten Realtor Program
Created by William Schaeffer
CPS 362
P. 736, Challenge 3, houseType Classes
1.21.2022
*/

//This program will demonstrate the houseType Class provided by exercise 11 and 12, p. 729/30

#include <iostream>
#include <iomanip>
#include <string>
#include "HouseType.hpp"									//C++ naming convention for header files is .hpp, .h is for C

using std::cout;										//using specific calls because 'using namespace std' bugs out <string> 
using std::endl;
using std::cin;

//Function Prototypes

void welcomeUser();										//Function to welcome user
char inputValidation(char&);									//Function for input validation

int main()

{
	char runAgain = 'Y';									//Variable to run program again, default to yes to start

	std::string houseStyle = "";								//Variable declaration for user input
	int houseBedrooms, houseBathrooms, carsGarage, houseYear, sqFootage;
	double housePrice, taxPercent, houseTax;


	welcomeUser();										//Call introduction

	while (toupper(runAgain) == 'Y')							//While 'Y', run program, else quits

	{
		//Get the user input for the house details

		cout << "Please enter the style of the house: ";
		cin >> houseStyle;
		cout << endl;
		
		cout << "Please enter the number of bedrooms: ";
		cin >> houseBedrooms;
		cout << endl;

		cout << "Please enter the number of bathrooms: ";
		cin >> houseBathrooms;
		cout << endl;

		cout << "Please enter the number of cars that can fit into the garage: ";
		cin >> carsGarage;
		cout << endl;

		cout << "Please enter the year that the house was built in: ";
		cin >> houseYear;
		cout << endl;

		cout << "Please enter the finished square footage of the house: ";
		cin >> sqFootage;
		cout << endl;

		cout << "Please enter the price of the house: ";
		cin >> housePrice;
		cout << endl;

		cout << "Please enter the tax percentage to the nearest hundreth where the house is located: ";
		cin >> taxPercent;
		cout << endl;

		houseTax = housePrice * taxPercent;						//calculate house tax based on price of house and tax percentage

		//Assign user input to houseOne object of the HouseType Class

		HouseType houseOne = HouseType(houseStyle, houseBedrooms, houseBathrooms, carsGarage, houseYear, sqFootage, housePrice, houseTax);

		//Invoke default constructor to initialize at zero

		HouseType houseTwo = HouseType();

		cout << "\tHere are the details of the house you entered:\n\n";

		houseOne.print();								//Call HouseType print function for user created house

		cout << "\n\tHere are the details of the house with the default constructor:\n\n";

		houseTwo.print();								//Call HouseType print function for user created house
		
		cout << "\n\nWould you like to run program again? Please enter 'Y' or 'N':\n\n";

		cin >> runAgain;

		cout << endl;
		
		runAgain = inputValidation(runAgain);						//User Validation of 'Y' or 'N'


	}

	std::cout << "\nThank you for using the Program.";

	return 0;

}

//Function Definitions

//Introduce User to Program

void welcomeUser()
{
	std::cout << "\tWelcome to the Realtor program.\n\n"
		<< "This program will demonstrate how classes work by utilizing the HouseType Class.\n"
		<< "This program will take input from the user for all of the pertinent details of a house.\n"
		<< "Those details include style of house, number of bedrooms, number of bathrooms, number of\n"
		<< "cars for the garage, year house was built, the finished square footage, price, and tax.\n\n";
}

//User input validation for selections, must be 'Y' or 'N'	

char inputValidation(char& input)
{
	while (toupper(input) != 'Y' && toupper(input) != 'N')					//convert y or n to Y or N, do not accept any other input
	{
		std::cout << std::endl << "Please enter 'Y' or 'N':\n\n";
		std::cin >> input;
		std::cin.ignore();
	}

	return input;

}

/*
Title: Chapter Ten Realtor Program
Created by William Schaeffer
CPS 362
P. 736, Challenge 3, houseType Classes
1.21.2022
*/

//This program will demonstrate the HouseType Class provided by exercise 11 and 12, p. 729/30


#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

//Class Declaration

    //The House Type Class holds general information regarding Houses

class HouseType                                 //This class does not have overloaded Constructors
{
public:
    //Default Constructor
        //Initialize style, numOfBedrooms, numOfBathrooms, numOfCarsGarage, yearBuilt, finishedSquareFootage, price, and tax
    HouseType()
    {
        style = "";
        numOfBedrooms = 0;
        numOfBathrooms = 0;
        numOfCarsGarage = 0;
        yearBuilt = 0;
        finishedSquareFootage = 0;
        price = 0.0;
        tax = 0.0;
    }
       
    //Constructor
        //Assign values to style, numOfBedrooms, numOfBathrooms, numOfCarsGarage, yearBuilt, 
        //finishedSquareFootage, price, and tax as arguments
        //Copy values to the appropriate member variables
    HouseType(std::string desc, int numBedrooms, int numBathrooms, int numCarsGarage, int year, int finiSquareFootage, double pr, double tx)
    {
        style = desc;
        numOfBedrooms = numBedrooms;
        numOfBathrooms = numBathrooms;
        numOfCarsGarage = numCarsGarage;
        yearBuilt = year;
        finishedSquareFootage = finiSquareFootage;
        price = pr;
        tax = tx;
    }

    //Accessor Functions
    std::string getStyle() const
    {
        return style;
    }

    int getNumOfBedrooms() const
    {
        return numOfBedrooms;
    }

    int getNumOfBathrooms() const
    {
        return numOfBathrooms;
    }

    int getNumOfCarsGarage() const
    {
        return numOfCarsGarage;
    }

    int getYearBuilt() const
    {
        return yearBuilt;
    }

    int getFinishedSquareFootage() const
    {
        return finishedSquareFootage;
    }

    double getPrice() const
    {
        return price;
    }

    double getTax() const
    {
        return tax;
    }

    //Mutator Functions
    void set(std::string, int, int, int, int, int, double, double)
    {

    }

    void setStyle(std::string st)
    {
        style = st;
    }

    void setNumOfBedrooms(int bed)
    {
        numOfBedrooms = bed;
    }

    void setNumOfBathrooms(int bath)
    {
        numOfBathrooms = bath;
    }
    
    void setNumOfCarsGarage(int cg)
    {
        numOfCarsGarage = cg;
    }

    void setYearBuilt(int yb)
    {
        yearBuilt = yb;
    }

    void setFinishedSquareFootage(int sqf)
    {
        finishedSquareFootage = sqf;
    }

    void setPrice(double p)
    {
        price = p;
    }

    void setTax(double t)
    {
        tax = t;
    }

    void print() const;                         //print function that displays all house details

private:

    std::string style;                          //member variable for type of house
    //member variables to hold number of bedrooms, bathrooms, and cars in garage as well as year house was built and square footage
    int numOfBedrooms, numOfBathrooms, numOfCarsGarage, yearBuilt, finishedSquareFootage;
    double price, tax;                          //member variables to hold the price and tax value of the house

};

//Class Function Definitions

void HouseType::print() const                   //print function that displays all house details
{
    cout << "House Style: " << getStyle() << endl
        << "Number of Bedrooms: " << getNumOfBedrooms() << endl
        << "Number of Bathrooms: " << getNumOfBathrooms() << endl
        << "Number of Cars in Garage: " << getNumOfCarsGarage() << endl
        << "House was built in: " << getYearBuilt() << endl
        << "Finished Square Footage: " << getFinishedSquareFootage() << " sq. feet\n"
        << fixed << setprecision(2)
        << "Price: $"<< getPrice() << endl
        << "Tax: $" << getTax() << endl
        << "Total Price: $" << (getPrice() + getTax()) << endl;
}

//Struct Declaration

//Function Prototypes


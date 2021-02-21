	/**************************************************
* 
*      program name:       Resort01
*      Author:             Nicholas Stepka
*      remarks:            Program to use the std 
*                          manipulators
***************************************************/

/******************************************
*     library includes 
******************************************/
#include <iostream>               	 // needed for I/O
#include <iomanip>
#include <string> 					// for string class 
/******************************************
*     pre-processor
******************************************/
#define    costGarden       350.00
#define    costOcean    	450.00
#define    tax            	  0.10

using namespace std;

/****************************************
*     non-member function prototypes
****************************************/

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    string resortName;          //hold the resort name
    string resortDate;          //hold report date

    int    numGarden      = 0;	//number of garden view suits rented
    int    numOcean       = 0;  //number of ocean view suits rented
	int    numRented      = 0;	//total units rented
    
    float  oCostWeekly    = 0;  //cost of all garden units for a week
    float  oCostTax       = 0;  //cost weekly tax
    float  oCostTotal     = 0;  //total weekly cost
    
    float  gCostWeekly    = 0;  //cost of all ocean units for a week
    float  gCostTax       = 0;  //cost weekly tax
    float  gCostTotal     = 0;  //total weekly cost

    float  tCostWeekly    = 0;  //cost of all units for a week
    float  tCostTax       = 0;  //cost weekly tax
    float  tCostTotal     = 0;  //total weekly cost
    
    int w = 0;
        
    /****************************************
    *         initialize variables
    ****************************************/
    resortName = "Oyster Bay Beach Resort";
    resortDate = "December 17, 2020";
    numOcean   = 32;
    numGarden  = 47;
    numRented  = numGarden + numOcean;
    
    /****************************************
    *         calculate
    ****************************************/    
    oCostWeekly = numOcean    * costOcean;
    gCostWeekly = numGarden   * costGarden;
    tCostWeekly = gCostWeekly + oCostWeekly;
    
    oCostTax    = oCostWeekly * tax;
    gCostTax    = gCostWeekly * tax;
    tCostTax    = oCostTax    + gCostTax;
    
    oCostTotal  = oCostWeekly + oCostTax;
    gCostTotal  = gCostWeekly + gCostTax;       
    tCostTotal  = oCostTotal  + oCostTotal;

    /****************************************
    *         output
    ****************************************/   
    
    // display the output in tabular format
   cout << fixed << setprecision(2);
   
   cout << endl << endl << left << setw(40) << ""<< left << resortName << endl;
   
   cout << left << setw(43) << "" << left << resortDate << endl;
   
   cout << endl << fixed <<setw(20)<<"    One" << left << setw(15) << "number" << left << setw(15) <<"cost" << left << setw(15) << "weekly" << endl;
   
   cout << left << setw(20) << "Bedroom suits" << left << setw(15) << "rented" << left << setw(15) << "per unit" << left << setw(15) << "income"
   	    << left << setw(15) << "tax" << left << setw(15) << "--total--" << endl;
   
   cout << left << setw(20) << "ocean view" << left << setw(15) << numOcean << left << setw(15) << costOcean << left << setw(2) << "$" << left << setw(13) << oCostWeekly
        << left << setw(2) << "$" << left << setw(13) << oCostTax << left << setw(2) << "$" << left << setw(13) << oCostTotal << endl;

   cout << left << setw(20) << "garden view" << left << setw(15) << numGarden << left << setw(15) << costGarden << left << setw(2) << "$" << left << setw(13 )<< gCostWeekly
        << left << setw(2) << "$" << left << setw(13) << gCostTax << left << setw(2) << "$"<<left<<setw(13)<<gCostTotal<<endl;
               
   cout << left << setw(20) << "total units" << left << setw(15) << (numOcean+numGarden) << left << setw(15) << "" << left << setw(2) << "$" << left << setw(13) << tCostWeekly
        << left << setw(2) << "$" << left << setw(13) << tCostTax << left << setw(2) << "$" << left << setw(13) << tCostTotal << endl << endl;

    system("PAUSE");               // causes the program to pause
	return 0;
}  // end main













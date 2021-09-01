/**************************************************
* 
*      program name:   func assignment #3A
*      Author:         Nicholas Stepka
*      remarks:        function that ask for one int
*					   for regarding how much water they
*                      want to convert to 4 different measurements
*
***************************************************/

/******************************************
*     library includes 
******************************************/
#include <iostream>           // needed for cin and cout
#include <string>             // needed for the string class
#include <math.h>             // math functions - C
#include <cmath>         		// math functions - C and C++
#include <iomanip>			// needed for output formatting

/******************************************
*     pre-processor
******************************************/
#define PI 3.14159
using namespace std;

/****************************************
*     non-member function prototypes
****************************************/
void convertGallons(int numGal);

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{	
	int numGal;												//placeholder for gallons
	
	cout <<"How many gallons are you looking to convert? ";
	cin >> numGal;
	
	convertGallons(numGal);
	
	system("pause");
	return 0;
}
/*******************************************
*  functions code goes after main
********************************************/
void convertGallons(int numGal)
{
	cout << numGal << " gallons is:\n";
	cout << "   " << numGal * 4 <<" quarts\n";
	cout << "   " << numGal * 3.785<< " liters\n";
	cout << "   " << numGal * 16 <<" cups\n";
	cout << "   " << numGal * 128 <<" fluid ounces\n";
}









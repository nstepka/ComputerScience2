/**************************************************
* 
*      program name:   func assignment #4A
*      Author:         Nicholas Stepka
*      remarks:        function that ask for two ints 
*					   in relations to days and weeks
*                      and returns the total days.    
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
void giveDay();

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{	

	giveDay();
	
	system("pause");
	return 0;
}
/*******************************************
*  functions code goes after main
********************************************/
void giveDay()
{
	int days;												//placeholder for days			
	int weeks;												//placeholder for weeks
	int weekToNumberOfDays;									//converting weeks into number of days
	
	cout << "How many days has it been? ";
	cin >> days;
	cout << "How many weeks has it been? ";
	cin >> weeks;
	
	weekToNumberOfDays = weeks * 7;
	
	cout << days << " days\n" << weeks << " weeks\n" <<
		  "has " << days + weekToNumberOfDays << " total days\n";

}









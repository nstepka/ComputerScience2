/**************************************************
* 
*      program name:   func assignment #5
*      Author:         Nicholas Stepka
*      remarks:        The function will accept up to 2 
*					   parameters and calculate a gross pay 
*                      to 2 parameters and calculate a gross pay
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
float calcGrossPay();
float calcGrossPay(float hours);
float calcGrossPay(float hours, float rate);


/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
      float hours = 35;
      float rate = 33.50;

      cout << "call function - no parameters \n";
      cout << "gross pay is  " << calcGrossPay() << "\n\n"; 

      cout << "call function - only hours input \n";
      cout << "gross pay is  " << calcGrossPay(hours) << "\n\n"; 

      cout << "call function - hours and rate input \n";
      cout << "gross pay is  " << calcGrossPay(hours, rate) << "\n\n"; 

      system("pause");
      return 0;
}

/*******************************************
*  functions code goes after main
********************************************/
float calcGrossPay()
{
	return 8.75 * 20;
}

float calcGrossPay(float hours)
{
	return 8.75 * hours;
}

float calcGrossPay(float hours, float rate)
{
	return hours * rate;
}









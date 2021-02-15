/**************************************************
* 
*      program name:   func assignment #5
*      Author:         Nicholas Stepka
*      remarks:        This is an example of overloading functions
*					   two functions over overloaded if the functions 
*                      share a name but have a difer parameter list
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
float calcGrossPay(float salary);
float calcGrossPay(float hours, float payRate);
float calcGrossPay(float salary, float overTimeHours, float overTimeRate);
float calcGrossPay(float hours, float payRate, float overTimeHours, float overTimeRate); 


/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{	
	float salary;												//placeholder for Salary
	float hours;												//placeholder for Hours
	float payRate;												//placeholder for payRate;
	float overTimeHours;										//placeholder for Overtime Hours
	float overTimeRate; 										//placeholder for Overtime Rate
	
	cout << "What is the employees salary? ";
	cin >> salary;
	cout << "What is the amount of hours worked? ";
	cin >> hours;
	cout << "What is the pay rate of the employee? ";
	cin >> payRate;
	cout << "Number of hours worked of overtime? ";
	cin >> overTimeHours;
	cout << "What is the employees overtime rate? ";
	cin >> overTimeRate;
	
	cout << "salary            "  << setw(7) << calcGrossPay(salary) << "\n";
	cout << "hours             "  << setw(7) << calcGrossPay(hours, payRate) << "\n";
	cout << "salary + o/t      "  << setw(7) << calcGrossPay(salary, overTimeHours, overTimeRate) << "\n";
	cout << " hourly pay + o/t "  << setw(7) << calcGrossPay(hours, payRate, overTimeHours, overTimeRate) << "\n";
	
	system("pause");
	return 0;
	
}
/*******************************************
*  functions code goes after main
********************************************/
float calcGrossPay(float salary)
{
	return salary;
}

float calcGrossPay(float hours, float payRate)
{
	return hours * payRate;
}

float calcGrossPay(float salary, float overTimeHours, float overTimeRate)
{
	return salary + overTimeHours * overTimeRate;
}

float calcGrossPay(float hours, float payRate, float overTimeHours, float overTimeRate)
{
	return hours * payRate + overTimeHours * overTimeRate;
}









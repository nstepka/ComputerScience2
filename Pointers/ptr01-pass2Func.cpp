/*********************************************************
*
*      program name:       ptr01-pass2Func
*      Author:             Nicholas Stepka
*      date due:           09/07/2020
*      remarks:            takes in a second, sends it to a function
*						   function uses pointers to save the space
*						   main gives the answer.
*******************************************************/

/******************************************
*     library includes
******************************************/

#include <iostream>                // needed for I/O
#include <iomanip>                 // needed for output formatting
#include <string.h>
/**********************
    pre-processor
***********************/

#define PI 3.14159

using namespace std;

/****************************************
*          function prototypes
****************************************/

void convertTime(int seconds, int*, int*, int*);

/*****************************************
*   main() - the function that executes
*****************************************/

int main() 
{
	//declare
	int* ptrHours = new int;
	int* ptrMinutes = new int;
	int* ptrSeconds = new int;
	int inSeconds;
		
	cout << "Please enter the amount seconds: ";
	cin >> inSeconds;
		
	convertTime(inSeconds, ptrHours, ptrMinutes, ptrSeconds);
		
	cout <<  inSeconds << " seconds gives Converts to\n";
	cout << *ptrHours << " hours\n" << *ptrMinutes << " Minutes\n" << *ptrSeconds << " seconds\n";
 	
	system("pause");
    return 0;
}

// end main

void convertTime(int seconds, int *ptrHours, int *ptrMinutes, int *ptrSeconds)                                                // function that converts seconds to days, hours, minutes
{	
	int hours;
	int minutes;
	int secs;
	hours = seconds / 3600;
	*ptrHours = hours;
	minutes = (seconds - (hours * 3600) )/ 60;
	*ptrMinutes = minutes;
	secs = seconds - (hours * 3600) - (minutes * 60);
	*ptrSeconds = secs;
}





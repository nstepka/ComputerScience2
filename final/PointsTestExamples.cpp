/*********************************************************
*
*      program name:       Pointers01
*      Author:             
*      date due:           09/07/2020
*      remarks:            pass 2 pointers to a function
*                          change 2 variables in main
*
*******************************************************/

/******************************************
*     library includes
******************************************/

#include <iostream>                // needed for I/O
#include <iomanip>                 // needed for output formatting

/**********************
    pre-processor
***********************/

#define PI 3.14159

using namespace std;

/****************************************
*          function prototypes
****************************************/

void arithmetic(int, int, float*, float*);

/*****************************************
*   main() - the function that executes
*****************************************/

int main() 
{
	cout << "te124123dgst"<< endl;
	int* px = new int;
		cout << "te124123dgst1" << endl;
		int x = 1;
	px = &x;
	int* px2 = new int;
	int* px3 = new int;
	px2 = &x;
	*px3 = *px2+*px;
		cout << "te124123dgst2" << endl;
	cout << "test" << endl;
	cout << *px3 << endl;
//	
//	char ch = 'c';
//	char* chp = &ch;
//	int x = 5;
//	int* p;
//	cout << *chp  << endl;
//	int inHeight;
//	int inRadius;
//	
//	float* pArea;
//	float* pVolume;
//	
//	pArea   = new float(0);
//	pVolume = new float(0);
//	
//	cout << "please enter the height: ";
//	cin >> inHeight;
//	cin >> inRadius;
//	
//    arithmetic(inHeight, inRadius, pArea, pVolume);
//    
//    // output
//	cout << "*** cylinder values ***  \n";
//    cout << "Radius  " <<  inRadius << endl; 		 
//    cout << "Height  " <<  inHeight << endl;	 
//    cout << "Area	 " <<  *pArea   << endl; 
//    cout << "Volume	 " <<  &pVolume << endl;   //displays the location
//    cout << "Volume	 " <<  *pVolume << endl;

 	system("pause");
    return 0;
}

// end main

void arithmetic(int height, int radius, float* area, float* volume)                                                 // function that calculates number of days
{
    *volume = PI * radius * radius * height;
    *area   = 2 * (PI * radius * radius) + 2 * PI * radius * height;
}


/**************************************************
* 
*      program name:   func assignment #2C
*      Author:         Nicholas Stepka
*      remarks:        function that ask for two ints 
*					   to see if the numbers would fit
*                      on a checker board.
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
bool evaluateRowCol();

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{	
		
	if(evaluateRowCol() == true) 
	{
		cout << "\nis on the checker board\n";
	}
	else
	{
		cout << "\nis not the checker board\n";
			
	}
	
	system("pause");
	return 0;
}
/*******************************************
*  functions code goes after main
********************************************/
bool evaluateRowCol()
{
	int row;												//placeholder for row number			
	int column;												//placeholder for column number
	
	cout << "please enter a row number: ";
	cin >> row;
	cout << "please enter a column number: ";
	cin >> column;
	cout << "row   " << row;
	cout << "\ncolumn   " << column;
	
	if(row > 8  || row < 1 || column > 8  || column < 1)
	{
		return false;
	}
	
	return true;
}









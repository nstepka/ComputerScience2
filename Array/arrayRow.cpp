/**************************************************
* 
*      program name:   arrayCol
*      Author:         Nicholas Stepka
*      remarks:        set up a 2D array of ints
*					   to the number they are in the row
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

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{	
	int row = 0;                    // row counter
    int col = 0;                    // column counter
	int intArray [10][10] = {};          // 2 dimentional array of ints
	
	for(row=0; row < 10; row++)
    {
        for(col=0; col < 10; col++)
        {
        	intArray[row][col] = row;
        }
    }
    
    for(row = 0; row < 10 ; row++)
	{
		for(col =0; col < 10; col++)
		{
			cout <<intArray[row][col]  << " ";
		}
		cout << "\n";
	}	

	system("pause");
	return 0;
}
/*******************************************
*  functions code goes after main
********************************************/





/**************************************************
* 
*      program name:   Lo Shu Magic Square
*      Author:         Nicholas Stepka
*      remarks:        The Lo Shu Magic Square is a grid 
*					   with 3 rows and 3 columns that 
*					   always add up to 15
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
bool luShuMagicSquare(int square[3][3]);
/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{	
	int row = 0;                    // row counter
    int col = 0;                    // column counter
	int intArray [3][3] = {};          // 2 dimentional array of ints
	
	for(row=0; row < 3; row++)
    {
        for(col=0; col < 3; col++)
        {
        	cout << "Please enter a number for row " << row+1 << " and column " << col+1 << ": ";
        	cin >> intArray[row][col];
        }
    }
    
    for(row = 0; row < 3 ; row++)
	{
		for(col =0; col < 3; col++)
		{
			cout <<intArray[row][col]  << "  ";
		}
		cout << "\n";
	}	
	
	if(luShuMagicSquare(intArray) == true)
	{
	cout << "this is a magic square.\n";
	}
	else
	{
		cout << "this is not a magic square.\n";
	}
	

	system("pause");
	return 0;
}
/*******************************************
*  functions code goes after main
********************************************/

bool luShuMagicSquare(int square[3][3])
{
	int row = 0;																	//row placer
	int col = 0;																	//col placer
	if((square[row][col] + square[row][col+1] + square[row][col+2] == square[row+1][col] + square[row+1][col+1] + square[row+1][col+2]) &&
		(square[row+1][col] + square[row+1][col+1] + square[row+1][col+2] == square[row+2][col] + square[row+2][col+1] + square[row+2][col+2])  &&
		(square[row+2][col] + square[row+2][col+1] + square[row+2][col+2] == square[row][col] + square[row+1][col+1] + square[row+2][col+2])  &&
		(square[row][col] + square[row+1][col+1] + square[row+2][col+2] == square[row+2][col] + square[row+1][col+1] + square[row][col+2]))
		{
			return true;
		}
			
	
	return false;
}


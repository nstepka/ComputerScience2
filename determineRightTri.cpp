/**************************************************
* 
*      program name:   func assignment #3b
*      Author:         Nicholas Stepka
*      remarks:        function that determines if a
*					   triangle is a right angle
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
void determineRightTri(int side1, int side2, int side3);

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{	

	int side1;												//placeholder first side
	int side2;												//placeholder for second side
	int side3;												//placeholder for third side
	
	cout <<"This program will use the pythagorean theorem to determine if the three sides are a right angle\n";	
	cout <<"what is the length of the first side? ";
	cin >> side1;
	cout <<"what is the length of the second side? ";
	cin >> side2;
	cout <<"what is the length of the third side? ";
	cin >> side3;
	
	determineRightTri(side1,side2,side3);
	
	system("pause");
	return 0;
}
/*******************************************
*  functions code goes after main
********************************************/
void determineRightTri(int side1, int side2, int side3)
{
	int numberMover;										//placeholder for verifying hypotenuse
	
	cout << side1 << " length of side 1\n";
	cout << side2 << " length of side 2\n";
	cout << side3 << " length of side 3\n";
	
	if(side1 > side2) 
	{
		numberMover=side1;
		side1= side2;
		side2 = numberMover;
	}
	
	if(side2 > side3)
	{
		numberMover=side2;
		side2= side3;
		side3 = numberMover;
	}
	
	if(side1*side1 + side2*side2 == side3*side3)
	{
		cout << "is a right triangle\n";
	}
	else
	{
		cout << "is not a right triangle\n";
	}
	
}




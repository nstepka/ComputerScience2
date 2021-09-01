/**************************************************
*
*   program name:     Coord01
*   Author:           Nicholas Stepka
*   remarks:          Create a Coord with three values
*                     create a function that sets a coord
*                     and then displays cord
*
***************************************************/

/*******************************************************
*     library includes
*******************************************************/
  #include <iostream>   // needed for cin and cout
  #include <string>     // needed for the string class
  #include <math.h>     // math functions - C
  #include <cmath>     	// math functions - C and C++
  #include <iomanip>	// needed for output formatting

/******************************************
*     pre-processor
******************************************/
#define PI 3.14159
using namespace std;

/****************************************
*         Class definitions
****************************************/
class Coord
{
    private:   // private definitions
		int xCoord;
        int yCoord;
        int zCoord;

    public:    // public definitions

        // constructors

        // copy constructor

        // destructor

        // setters
		void setXCoord(int x) {xCoord = x;}	
		void setYCoord(int y) {yCoord = y;}	
		void setZCoord(int z) {zCoord = z;}	
		
        // getters
        int getXCoord() const {return xCoord;}
        int getYCoord() const {return yCoord;}
        int getZCoord() const {return zCoord;}
        
        // other member functions

        // list display() last
        void display();
        
};

/****************************************
*    code class member functions
****************************************/

/*********************
// constructors
*********************/

/**********************
// copy constructor
**********************/

/*********************
// destructor
**********************/

/***************************
*  other member functions
***************************/

/*******************************
*  display() member function
*******************************/

void Coord :: display()
{
	
	cout << "\nxCoord is     " << getXCoord()  << endl;
	cout << "yCoord is     " << getYCoord() << endl;
	cout << "zCoord is     "  << getZCoord() << endl << endl;
}


/****************************************
*     non-member function prototypes
****************************************/
void testCoord01();

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
	/**********************************
   	*   local variables
   	*     one per line with a comment
   	*     start with a lower case
   	*     names must make sense
   	**********************************/

    /****************************************
   	*  in the code......
 	*     curly braces must line up
   	*     use indentation of 4 or 5
   	*     remove extra or commented bad code
   	*****************************************/
   	testCoord01();

    system("PAUSE");               // causes the program to pause
    return 0;
}  // end main

/*******************************************
*   code for the first assignment test
*******************************************/
void testCoord01()
{
    cout << "in testCoord01()\n";

     /*
         in here you would have the
         code for test of the first
         assignment
     */
    Coord cord;
     
    cord.setXCoord(1);
    cord.setYCoord(2);
    cord.setZCoord(3);
    
    cord.display();
    
     
}


















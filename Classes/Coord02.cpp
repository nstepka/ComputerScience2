/**************************************************
*
*   program name:     Coord02
*   Author:           Nicholas Stepka
*   remarks:          Adding onto Coord01 and getting
*                     the distance to (0,0,0)
*                     program doesnt ask to display the results
*					  but I added it.
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
		int distance2origin();

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
int Coord ::  distance2origin()
{
	int distance;
	getXCoord();
	distance = sqrt((getXCoord()*getXCoord()) + 
					 (getYCoord()*getYCoord()) +
					 (getZCoord()*getZCoord()));
					 
	
	
	return distance;	
}

/*******************************
*  display() member function
*******************************/

void Coord :: display()
{
	
	cout << "\nxCoord is     " << getXCoord()  << endl;
	cout << "yCoord is     " << getYCoord() << endl;
	cout << "zCoord is     "  << getZCoord() << endl << endl;
	cout << "You are " << distance2origin() << " from (0,0,0)" << endl <<endl;
}


/****************************************
*     non-member function prototypes
****************************************/
void testCoord02();

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
   	testCoord02();

    system("PAUSE");               // causes the program to pause
    return 0;
}  // end main

/*******************************************
*   code for the first assignment test
*******************************************/
void testCoord02()
{
    cout << "in testCoord02()\n";

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


















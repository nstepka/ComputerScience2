/**************************************************
*
*   program name:     Box01
*   Author:           Nicholas Stepka
*   remarks:          create a class with getters and 
*                     setters and a display function
*                     create a function that displays
*					  updates, displays updates from class
*					  while also showing element in function
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
class Box
{
    private:   // private definitions
    double length;
    double width;
    double height;

    public:    // public definitions

        // constructors

        // copy constructor

        // destructor

        // setters
        void setLength(double ln) {length = ln;}
        void setWidth(double wid) {width = wid;}
        void setHeight(double h) {height = h;}

        // getters 
        double getLength() const {return length;}
		double getWidth() const {return width;}
		double getHeight() const {return height;}
        
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
void Box :: display()
{
	cout << "\nLength     =      " << getLength()  << endl;
	cout << "Width      =      " << getWidth() << endl;
	cout << "Height     =      " << getHeight() << endl;
}
/****************************************
*     non-member function prototypes
****************************************/
void testBox01();
void testSkeleton02();

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
	Box box1;
	box1.setLength(28.6);
	box1.setWidth(33);
	box1.setHeight(69.9);
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
   	testBox01();
    testSkeleton02();

    system("PAUSE");               // causes the program to pause
    return 0;
}  // end main

/*******************************************
*   code for the first assignment test
*******************************************/
void testBox01()
{
     cout << "in testSkeleton01()\n";

     /*
         in here you would have the
         code for test of the first
         assignment
     */
    Box b1;
	b1.display();
	
	b1.setLength(77.6);
	b1.setWidth(66);
	b1.setHeight(49);
	b1.display();
	
	cout << "\nLength    " << b1.getLength() << endl;
	cout << "Width     " << b1.getWidth() << endl;
	cout << "Height    " << b1.getHeight() << endl;
	
	
}

/*******************************************
*   code for the second assignment test
*******************************************/
void testSkeleton02()
{
     cout << "in testSkeleton02()\n";
     /*
         in here you would have the
         code for test of the second
         assignment
     */
}






















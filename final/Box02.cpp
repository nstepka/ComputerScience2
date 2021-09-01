/**************************************************
*
*   program name:     Box02
*   Author:           Nicholas Stepka
*   remarks:          create a class with getters and 
*                     setters and a display function
*                     create a function initialize the box
*					  then two more members for a calc Volume and Area
*					  update display from box1 to add valume and area
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
		void initialize(double x);
		double calcVolume();
		double calcArea();
		
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
void Box ::  initialize(double x)
{
	setLength(x);
	setWidth(x);
	setHeight(x);	
}	

double Box ::  calcVolume(){
	
	double volumeOfBox;
	
	volumeOfBox = getLength() * getWidth() * getHeight();
	return volumeOfBox;
}

double Box :: calcArea()	
{
	double areaOfBox;
	
	areaOfBox = 2*((getLength() * getWidth()) + (getLength() * getHeight()) + (getWidth()* getHeight()));
	return areaOfBox;
}
/*******************************
*  display() member function
*******************************/
void Box :: display()
{
	
	cout << "\nLength     =      " << getLength()  << endl;
	cout << "Width      =      " << getWidth() << endl;
	cout << "Height     =      " << getHeight() << endl;
	cout << "Volume     =      " << calcVolume() << endl;
	cout << "Area       =      " << calcArea() << endl;
	
}
/****************************************
*     non-member function prototypes
****************************************/
void testBox01();
void testBox02();

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
//  testBox01();
    testBox02();

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
	
	b1.setLength(1);
	b1.setWidth(1);
	b1.setHeight(1);
	b1.display();
	
	cout << "\nLength    " << b1.getLength() << endl;
	cout << "Width     " << b1.getWidth() << endl;
	cout << "Height    " << b1.getHeight() << endl;
	
	
}

/*******************************************
*   code for the second assignment test
*******************************************/
void testBox02()
{
     cout << "in testSkeleton02()\n";
     /*
         in here you would have the
         code for test of the second
         assignment
     */
     
    Box b1;
	b1.display();
	
	b1.initialize(6);
	b1.display(); 
}






















/**************************************************
*
*   program name:     Coord03
*   Author:           Nicholas Stepka
*   remarks:          Adding onto Coord01B to add
*					  two constructors one Coord() and one Coord(x,y,z)
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
		int xCoord;						//x coordinate
        int yCoord;						//y coord
        int zCoord;						//z coord

    public:    // public definitions

        // constructors
		Coord();
		Coord(int x, int y, int z);
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
Coord :: Coord()
{
	setXCoord(0);
	setYCoord(0);
	setZCoord(0);
}

Coord :: Coord(int x, int y, int z)
{
	setXCoord(x);
	setYCoord(y);
	setZCoord(z);
}
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
void testCoord01();
void testCoord02();
void testCoord03();

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{

//	testCoord01();
// 	testCoord02();
	testCoord03();
	
    system("PAUSE");               // causes the program to pause
    return 0;
}  // end main

/*******************************************
*   code for the first assignment test
*******************************************/


void testCoord01()
{
    cout << "in testCoord01()\n";

    Coord cord;
     
    cord.setXCoord(1);
    cord.setYCoord(2);
    cord.setZCoord(3);
    
    cord.display();
    
     
}
void testCoord02()
{
    cout << "in testCoord02()\n";

    Coord cord;
     
    cord.setXCoord(1);
    cord.setYCoord(2);
    cord.setZCoord(3);
    
    cord.display();
    
     
}

void testCoord03()					//testing the two constructors one blank and should display 0, the other wiht the input i put in
{
	cout << "In testCoord03"  << endl;
	
	Coord coord1;
	Coord coord2(11.1,22.2,33.3);
	
	
	coord1.display();
	coord2.display();
	
	
}


















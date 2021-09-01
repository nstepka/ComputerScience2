/**************************************************
*
*   program name:     Coord03
*   Author:           Nicholas Stepka
*   remarks:          Adding onto Coord02 and finding the
*                     the distance between two coords
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
		int distBetweenPoints(const Coord &obj);

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
	int distance;	//d stands for distance between location and (0,0,0)
	distance = sqrt((getXCoord()*getXCoord()) + 
					 (getYCoord()*getYCoord()) +
					 (getZCoord()*getZCoord()));
					 
	
	
	return distance;	
}

int Coord :: distBetweenPoints(const Coord &obj)
{
	int d;				//d stands for distance between two coords
	
	d = sqrt(pow((getXCoord() - obj.getXCoord()), 2) +
             pow((getYCoord() - obj.getYCoord()), 2) +
             pow((getZCoord() - obj.getZCoord()), 2));
	
	return d;
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
//	testCoord02();
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

void testCoord03()
{
    cout << "in testCoord03()\n";

    Coord cord1;
    Coord cord2;
     
    cord1.setXCoord(1);
    cord1.setYCoord(2);
    cord1.setZCoord(3);
    
    cord2.setXCoord(0);
    cord2.setYCoord(0);
    cord2.setZCoord(0);
    
    cout << "The distance between cord1 (" << cord1.getXCoord() << "," << cord1.getYCoord() << "," << cord1.getZCoord() 
		 << ") and cord2 (" << cord2.getXCoord() << "," << cord2.getYCoord() << "," << cord2.getZCoord() << ") is "
		 << cord1.distBetweenPoints(cord2)  << endl;
     
}


















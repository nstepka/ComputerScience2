/**************************************************
*
*   program name:     Coord08B
*   Author:           Nicholas Stepka
*   remarks:          add a copy constructor
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
		int* xCoord;						//x coordinate
        int* yCoord;						//y coord
        int* zCoord;						//z coord

    public:    // public definitions

        // constructors
		Coord();
		Coord(int x, int y, int z);
        // copy constructor
		Coord(const Coord &obj) 
		{
  			cout << "In copy constructor\n";
        	xCoord = new int();             //memory allocated
    		yCoord = new int();
    		zCoord = new int();
        	
        	setXCoord(obj.getXCoord());							//default data profiles
			setYCoord(obj.getYCoord());
			setZCoord(obj.getZCoord());
		       	
		}
        // destructor
		~Coord();
		
        // setters
		void setXCoord(int x) {*xCoord = x;}	
		void setYCoord(int y) {*yCoord = y;}	
		void setZCoord(int z) {*zCoord = z;}	
		
        // getters
        int getXCoord() const {return *xCoord;}
        int getYCoord() const {return *yCoord;}
        int getZCoord() const {return *zCoord;}
        
        // other member functions
        Coord operator =(const Coord &coordRight);
		Coord operator +(Coord &right);
		int distance2origin();
		distBetweenPoints(const Coord &obj);

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
	xCoord = new int();             //memory allocated
    yCoord = new int();
    zCoord = new int();
    
	setXCoord(0);							//default data profiles
	setYCoord(0);
	setZCoord(0);
}

Coord :: Coord(int x, int y, int z)
{
	xCoord = new int();             //memory allocated
    yCoord = new int();
    zCoord = new int();
    

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
Coord::~Coord()
{
    cout << "in destructor\n" << endl;
    delete xCoord;
    delete yCoord;
    delete zCoord;
    
    cout << "out of destruction of destructors\n";
}

/***************************
*  other member functions
***************************/
Coord Coord :: operator =(const Coord &coordRight)
{
	cout << "\nin overload = sign\n";
	
	setXCoord(coordRight.getXCoord());							//default data profiles
	setYCoord(coordRight.getYCoord());
	setZCoord(coordRight.getZCoord());
		
	return *this;
	
}


Coord Coord :: operator +(Coord &right)
{
	Coord temp;
	temp.setXCoord(getXCoord() + right.getXCoord());
	temp.setYCoord(getYCoord() + right.getYCoord());
	temp.setZCoord(getZCoord() + right.getZCoord());
	return temp;
	
}


int Coord ::  distance2origin()
{
	int distance;
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
void testCoord02B();
void testCoord03();
void testCoord04();
void testCoord05();
void testCoord06();
void testCoord08B();

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{


	testCoord08B();
	
    system("PAUSE");               // causes the program to pause
    return 0;
}  // end main

/*******************************************
*   code for the first assignment test
*******************************************/


void testCoord01()
{
    cout << "\nin testCoord01()\n";

    Coord cord;
     
    cord.setXCoord(1);
    cord.setYCoord(2);
    cord.setZCoord(3);
    
    cord.display();
    
     
}
void testCoord02()
{
    cout << "\nin testCoord02()\n";

    Coord cord;
     
    cord.setXCoord(1);
    cord.setYCoord(2);
    cord.setZCoord(3);
    
    cord.display();
    
     
}

void testCoord02B()
{
	cout << "in testCoord02b()\n";

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
void testCoord03()					//testing the two constructors one blank and should display 0, the other wiht the input i put in
{
	cout << "\nIn testCoord03"  << endl;
	
	Coord coord1;
	Coord coord2(11.1,22.2,33.3);
	
	
	coord1.display();
	coord2.display();
	
	
}

void testCoord04()					//testing the two constructors one blank and should display 0, the other wiht the input i put in
{
	cout << "\nIn testCoord04"  << endl;
	
	Coord coord1;
	Coord coord2(22.2,33.3,44.4);
	
	
	coord1.display();
	coord2.display();
	
	
}

void testCoord05()					//testing the two constructors one blank and should display 0, the other wiht the input i put in
{
	cout << "\nIn testCoord05"  << endl;
	
	testCoord01();
	testCoord02();
	testCoord02B();
	testCoord03();
	testCoord04();
	Coord c1;
	Coord c2(3, 2, 3);

	c1.display();
	c2.display();

	c1 = c2;
	c1.display();
	c2.display();


	
}

void testCoord06()					//testing the two constructors one blank and should display 0, the other wiht the input i put in
{
	cout << "\nIn testCoord06"  << endl;
	

	Coord c1;
	Coord c2(3, 2, 3);
	cout << "Cord 1 Display\n";
	c1.display();
	cout << "Cord 2 Display\n";
	c2.display();

	c1 = c2;
	cout << "Cord 1 Display, c1 should now match c2\n";
	c1.display();
	cout << "Cord 2 Display\n";
	c2.display();


	
}

void testCoord08B()					//testing the coord+coord operator
{
	cout << "\nIn testCoord08B"  << endl;
	

	Coord c1;
	Coord c2(3, 2, 3);
	cout << "Cord 1 Display\n";
	c1.display();
	cout << "Cord 2 Display\n";
	c2.display();

	c1 = c2;
	cout << "Cord 1 Display, c1 should now match c2, here is c1\n";
	c1.display();
	cout << "Cord 2 Display\n";
	c2.display();


	
}


















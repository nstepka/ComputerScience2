/**************************************************
*
*      program name:       Box05 - demo
*      Author:             Rebekah Wardlow
*      date due:           04/11/2020
*      remarks:            overload the assignment 
*                          operator
*
***************************************************/

/******************************************
*     library includes
******************************************/
#include <iostream>                // needed for I/O

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
	double* length;
	double* width;
	double* height;

public:    // public definitions

	// constructors
	Box();
	Box(double x);
	Box(double l, double w, double h);

	// copy constructor
	//Box(Box &obj, int x)				// not a copy constructor
	Box(Box &obj)						// is a copy constuctor
	{
		cout << "in copy constructor \n";
	
		length = new double;
		width  = new double;
		height = new double;
	
		setLength(obj.getLength());
		setWidth(obj.getWidth());
		setHeight(obj.getHeight());
	}
	
	// destructor
	~Box();

	// setters - inline functions
	void setLength(double ln) { *length = ln; }
	void setWidth(double w)   { *width  = w; }
	void setHeight(double h)  { *height = h; }

	// getters - inline functions
	double getLength() { return *length; }
	double getWidth()  { return *width; }
	double getHeight() { return *height; }

	// overload operators
	
	/******************************
	*     overload the assignment
	*******************************/
	Box operator==(Box right)				// not a = overload
//	Box operator=(Box right)				// overload the assignment
	{	
		cout << "in overload assign operator \n";
		setLength(right.getLength());
		setWidth(right.getWidth());
		setHeight(right.getHeight());
		return *this;
	}	
	
	//other member functions
	void initialize(double x);
	int calcVolume();
	int calcArea(); 

	// list display() last
	void display();
};

/****************************************
*       class member functions
****************************************/

/*********************
*      constructors
*********************/
Box::Box(double x)
{
	cout << "in constructor with one parameter\n";
	length = new double;
	width  = new double;
	height = new double;
	
	setLength(x);
	setWidth(x);
	setHeight(x);
}
Box::Box()
{
	cout << "in default constructor\n";
	length = new double;
	width  = new double;
	height = new double;
	
	setLength(1);
	setWidth(1);
	setHeight(1);
}
Box::Box(double l, double w, double h)
{
	cout << "in constructor with three parameters\n";
	length = new double;
	width  = new double;
	height = new double;
	
	setLength(l);
	setWidth(w);
	setHeight(h);
}

/*********************
*   destructor
**********************/
Box :: ~Box()
{
	cout << "in destructor " << getLength() << " \n";
//	delete length;
//	delete width;
//	delete height;
}
/***************************
*  overload operators
***************************/

/***************************
*  other member functions
***************************/
void Box::initialize(double x)
{
	setLength(x);
	setWidth(x);
	setHeight(x);
}

int Box :: calcArea() 	{ return (2 * getLength() * getWidth())  + 
	                             (2 * getLength() * getHeight()) + 
								 (2 * getWidth() * getHeight()); 
						}
						
int Box :: calcVolume() { return getHeight() * getWidth() * getLength(); }

/*******************************
*  display() member function
*******************************/
void Box::display()
{
	cout << "\n";
	cout << "Length = " << getLength()  << endl;
	cout << "Width  = " << getWidth()   << endl;
	cout << "Height = " << getHeight()  << endl;
	cout << "Area   = " << calcArea()   << endl;
	cout << "Volume = " << calcVolume() << endl;
	cout << "\n";
}


/****************************************
*     non-member function prototypes
****************************************/
void testOverloadAssign();

/****************************************
*     main
****************************************/
int main()
{
	testOverloadAssign();
	
	system("PAUSE");
	return 0;
}  // end main

void testOverloadAssign()
{
	Box b1;
	Box b2(1, 22, 1949);
	b1.display();
	b2.display();
	
	b1 = b2;
	
	b1.display();
	b2.display();
}





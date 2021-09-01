/**************************************************
*
*   program name:     Box04
*   Author:           Nicholas Stepka
*   remarks:          expanishion of box03 and convert
*                     objects doubles to pointers.
*					  
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
class Box
{
    private:   // private definitions
    double* length;						//length of box
    double* width;						//width of box
    double* height;						//height of box
            
    public:    // public definitions

        // constructors
		Box();
		Box(double* x);
		Box(double* l, double* w, double* x);
        // copy constructor

        // destructor

        // setters
        void setLength(double ln) {*length = ln;}
        void setWidth(double wid) {*width = wid;}
        void setHeight(double h) {*height = h;}

        // getters 
        double getLength() const {return *length;}
		double getWidth() const {return *width;}
		double getHeight() const {return *height;}
        
		// other member functions
		void initialize(double* x);
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
Box ::  Box()
{
	cout << "\nIn default constuctor\n";
	double fillingNumber;  //double to add default numbers of 1 to box data types
	fillingNumber = 1;
	setLength(fillingNumber);
	setWidth(fillingNumber);
	setHeight(fillingNumber);
}
Box ::  Box(double* x)
{
	cout << "\nIn default constuctor with 1 paramater\n";
	setLength(*x);
	setWidth(*x);
	setHeight(*x);
}
Box ::  Box(double* l, double* w, double* h)
{
	cout << "\nIn default constuctor with 3 paramater\n";
	setLength(*l);
	setWidth(*w);
	setHeight(*h);
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
void Box ::  initialize(double* x)
{
	setLength(*x);
	setWidth(*x);
	setHeight(*x);	
}	

double Box ::  calcVolume(){
	
	double volumeOfBox;
	double length = getLength();
	double width = getWidth();
	double height = getHeight();
	volumeOfBox = length * width * height;
	
	return volumeOfBox;
}

double Box :: calcArea()	
{
	double areaOfBox;
	double length = getLength();
	double width = getWidth();
	double height = getHeight();
	areaOfBox = areaOfBox = 2*((length * width) + (length * height) + (width* height));
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
void testBox03();
void testBox04();

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{

//  testBox01();
//  testBox02();
//  testBox03();
    testBox04();

    system("PAUSE");               // causes the program to pause
    return 0;
}  // end main


/*******************************************
*   code for the second assignment test
*******************************************/
void testBox01()
{
//    cout << "in testBox01()\n";
//
//    Box b1;
//	b1.display();
//	
//	b1.setLength(77.6);
//	b1.setWidth(66);
//	b1.setHeight(49);
//	b1.display();
//	
//	cout << "\nLength    " << b1.getLength() << endl;
//	cout << "Width     " << b1.getWidth() << endl;
//	cout << "Height    " << b1.getHeight() << endl;
//	
	
}
void testBox02()
{
//    cout << "in testBox02()\n";
//     
//     
//    Box b1;
//	b1.display();
//	
//	b1.initialize(6);
//	b1.display(); 
}

void testBox03()
{
//	cout << "In testBbox03"  << endl;
//	Box b1;
//	b1.display();
//	
//	Box b2(23.7);
//	b2.display();
//	
//	Box b3(11.1,22.2,33.3);
//	b3.display();
}

void testBox04()
{
	cout << "In Test Box 4 testing pointers\n";
	Box box1;
	double length = 28.6;
	double width = 33.6;
	double height = 69.9;
	
	double lengthPointer = length;
	double widthPointer = width;
	double hieghtPointer = height;
	
	box1.setLength(lengthPointer);
	box1.setWidth(widthPointer);
	box1.setHeight(hieghtPointer);
	
	box1.display();
	
}


















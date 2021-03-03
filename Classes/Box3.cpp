/**************************************************
*
*   program name:     Box03
*   Author:           Nicholas Stepka
*   remarks:          expanishion of box01 and box02
*                     the point of this is to create 
*					  constructors for the class
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
    double length;						//length of box
    double width;						//width of box
    double height;						//height of box
            
    public:    // public definitions

        // constructors
		Box();
		Box(double x);
		Box(double l, double w, double x);
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
Box ::  Box()
{
	cout << "\nIn default constuctor\n";
	
	setLength(1);
	setWidth(1);
	setHeight(1);
}
Box ::  Box(double x)
{
	cout << "\nIn default constuctor with 1 paramater\n";
	setLength(x);
	setWidth(x);
	setHeight(x);
}
Box ::  Box(double l, double w, double h)
{
	cout << "\nIn default constuctor with 3 paramater\n";
	setLength(l);
	setWidth(w);
	setHeight(h);
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

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
	Box box1;
	box1.setLength(28.6);
	box1.setWidth(33);
	box1.setHeight(69.9);

//  testBox01();
//  testBox02();
    testBox03();

    system("PAUSE");               // causes the program to pause
    return 0;
}  // end main


/*******************************************
*   code for the second assignment test
*******************************************/
void testBox01()
{
    cout << "in testBox01()\n";

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
void testBox02()
{
    cout << "in testBox02()\n";
     
     
    Box b1;
	b1.display();
	
	b1.initialize(6);
	b1.display(); 
}

void testBox03()
{
	cout << "In testBbox03"  << endl;
	Box b1;
	b1.display();
	
	Box b2(23.7);
	b2.display();
	
	Box b3(11.1,22.2,33.3);
	b3.display();
}




















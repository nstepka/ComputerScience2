/******************************************************************************
* 
*      program name:   FuncCallingFunc
*      Author:         Nicholas Stepka
*      remarks:        Prompts User to enter radius and height.
*					   Runs through 5 functions.
*					   Then the functions return data to main and displays.
*
******************************************************************************/

/******************************************
*     library includes 
******************************************/
#include <iostream>                // needed for I/O
#include <iomanip>
#include <cmath>

/******************************************
*     pre-processor
******************************************/
#define PI 3.14159  
using namespace std;

/****************************************
*          function prototypes
****************************************/
float areaCircle(float radiusIn);
float circumCircle(float radiusIn);
float areaSphere(float radiusIn);
float circumSphere(float radiusIn);
float volumeSphere(float radiusIn);
float areaCylinder(float radiusIn, float heightIn);
float volumeCylinder(float radiusIn, float heightIn);
float volumeCone(float radiusIn, float heightIn);

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *   local variables            *
    *******************************/
	
	float radiusIn;           //variable input for radius
	float heightIn;           //variable input for height
	
	
	//Questions
	cout << "enter the radius of the\n"; 
    cout << "circle, cone, sphere, or cylinder: ";
	cin  >> radiusIn;
	cout << "senter the height of the cylinder or cone: ";
	cin  >> heightIn;

	
    /**********************
	* Functions & Display *
	***********************/
	cout << setprecision (2) << fixed    << "\n";
	cout << "radius is "     << radiusIn << "\n";
	cout << "height is "     << heightIn << "\n\n\n";
	cout  << "area of the circle is          " << setw(5) << areaCircle(radiusIn)   << "\n";
	cout  << "circumference of the circle is " << setw(5) << circumCircle(radiusIn) << "\n\n";
	cout  << "area of the sphere is          " << setw(5) << areaSphere(radiusIn)   << "\n";
	cout  << "circumference of the sphers is " << setw(5) << circumSphere(radiusIn) << "\n";
	cout << "volume of the sphere is        " << setw(5) << volumeSphere(radiusIn) << "\n\n";
	cout  << "area of the cylinder is        " << setw(5) << areaCylinder(radiusIn, heightIn)   << "\n";
   	cout  << "volume of the cylinder is      " << setw(5) << volumeCylinder(radiusIn, heightIn) << "\n\n";
	cout  << "volume of the cone is          " << setw(5) << volumeCone(radiusIn, heightIn) << "\n\n";
	
	
	system("pause");
	return 0;
}


/*******************************************
*  given radius, calculate circle's area
*******************************************/
float areaCircle(float radiusIn)
{
   return PI * (pow(radiusIn,2));
}

/**************************************************
*  given radius, calculate circle's circumference
**************************************************/
float circumCircle(float radiusIn)
{
   return PI * radiusIn * 2;
}

/*******************************************
*  given radius, calculate sphere's area
*******************************************/
float areaSphere(float radiusIn)
{
   return 4 * areaCircle(radiusIn);
}

/**************************************************
*  given radius, calculate sphere's circumference
**************************************************/
float circumSphere(float radiusIn)
{
   
   return circumCircle(radiusIn);
}

/**********************************
*  given radius and height, 
*  calculate sphere's volume
**********************************/
float volumeSphere(float radiusIn)
{
   return 4.0 / 3.0 * PI * (pow(radiusIn,3));
}

/********************************************
*  given radius and height, 
*  calculate cylinder's surface area
********************************************/
float areaCylinder(float radiusIn, float heightIn)
{
   return ((circumCircle(radiusIn) * radiusIn)) + ((heightIn * PI * radiusIn * 2));
}

/**********************************
*  given radius and height, 
*  calculate cylinder's volume
**********************************/
float volumeCylinder(float radiusIn, float heightIn)
{
   return areaCircle(radiusIn) * heightIn;
}

/**********************************
*  given radius and height, 
*  calculate a cone's volume
**********************************/
float volumeCone(float radiusIn, float heightIn)
{
   return (volumeCylinder(radiusIn,heightIn)) * ((.3333333333));
}


	
	
	
	
	
	
	
	
	
	
	
	
    
     
    











 


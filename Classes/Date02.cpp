/**************************************************
*
*   program name:     Date02
*   Author:           Nicholas Stepka
*   remarks:          create a date class
*                     add values to date class objects
*                     display the month, day, and year 
*					  as a call to the display function 
*					  FINDS OUT IF ITS A LEAP YEAR

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
class Date
{
    private:   // private definitions
	
	int month;
	int day;
	int year;
	 
    public:    // public definitions

        // constructors

        // copy constructor

        // destructor

        // setters
        
        void setMonth(int m) {month = m;}
        void setDay(int d) {day = d;}
        void setYear(int y) {year = y;}
        
        // getters
		
		int getMonth() const {return month;}
		int getDay() const {return day;}
		int getYear() const {return year;}

        // other member functions
		bool calcLeapYear();
		
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
bool Date ::  calcLeapYear(){
	
	bool divisibleBy100 = !(getYear() % 100);
	bool divisibleBy4 = !(getYear() % 4);
	bool divisibleBy400 = !(getYear() % 400);

	if(divisibleBy4) {
		if(divisibleBy100) {
			if (!divisibleBy400) {
				return false;
			}
		}
		return true;
	}	
	
}
/*******************************
*  display() member function
*******************************/
void Date :: display()
{
	
	cout << "\nMonth is      " << getMonth()  << endl;
	cout << "Day is        " << getDay() << endl;
	cout << "Year is       "  << getYear() << endl;
	bool leapYear = calcLeapYear();
	if(calcLeapYear())
	{
		cout << getYear() << " is a leap year\n";
		
	} else 
	{
		cout << getYear() << " is not a leap year\n";
	}
}

/****************************************
*     non-member function prototypes
****************************************/
void testDate01();

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
   	testDate01();

    system("PAUSE");               // causes the program to pause
    return 0;
}  // end main

/*******************************************
*   code for the first assignment test
*******************************************/
void testDate01()
{
    cout << "in testDate01()\n";

     /*
         create a date class
         add values to date class objects
		 display the month, day, and year 
		 as a call to the display function 
     */
     
    Date d1;
     
	d1.setDay(7);
    d1.setMonth(7);
    d1.setYear(1983);
     
    d1.display();				//should not be a leap year
    cout << "^ not a leap year\n";
   
      
    d1.setYear(4);				//restting year to 4
    d1.display();				//should be a leap year
    cout << "^ should be a leap year\n";
    
    d1.setYear(400);			//restting year to 4
    d1.display();				//should be a leap year
    cout << "^ should be a leap year\n";
    
    d1.setYear(100);		    //restting year to 4
    d1.display();				//should not be leap year
    
}





















/**************************************************
*
*   program name:     Date08A
*   Author:           Nicholas Stepka
*   remarks:          program to test what day of the year it is
*                     program must work with leap years
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
class Date
{
    private:   // private definitions
	
	int* month;
	int* day;
	int* year;
	 
    public:    // public definitions

        // constructors
		Date();
		Date(int m, int d, int y);
		Date(int doy, int inYear);
		
        // copy constructor
		Date(const Date &obj) 
		{
  			cout << "In copy constructor\n";
        	month = new int();             //memory allocated
    		day = new int();
    		year = new int();
    		
    		setMonth(obj.getMonth());
    		setDay(obj.getDay());
        	setYear(obj.getYear());
        	
		}
		
        // destructor
		~Date();
        // setters
        
        void setMonth(int m) {*month = m;}
        void setDay(int d) {*day = d;}
        void setYear(int y) {*year = y;}
        
        // getters
		
		int getMonth() const {return *month;}
		int getDay() const {return *day;}
		int getYear() const {return *year;}

        // other member functions
        Date operator =(const Date &dateRight);
		bool calcLeapYear();
		int calcDayOfYear();
		void validateDate(int m,int d,int y);
		
        // list display() last
        
        void display();
        
};

/****************************************
*    code class member functions
****************************************/

/*********************
// constructors
*********************/
Date :: Date()
{
	cout << "In Date()\n";
	
	cout << "\nIn default constuctor\n";
	
	month = new int();             //memory allocated
    day = new int();
    year = new int();
    

	cout << "\nIn default constuctor\n";

	
	setMonth(1);
	setDay(1);
	setYear(1999);
	
	
}

Date :: Date(int m, int d, int y)
{
	
	
	month = new int();             //memory allocated
    day = new int();
    year = new int();
    
	validateDate(m,d,y);
	setMonth(m);
	setDay(d);
	setYear(y);
	
	
	cout << "\nin constructor with 3 ints\n";
}

Date :: Date(int doy, int inYear)
{
 	cout << "*** in Julian constructor ***\n\n";
	month = new int;
	day   = new int;
	year  = new int;

	int julianMonth[13] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};int x;

	setYear(inYear);
	for(x = 1; x < 13; x++)
	{	
		// increment by 1 if a leap year and Feb ~ Dec
		if(calcLeapYear() && x > 1)
		{		
			julianMonth[x]++;
		}

		if(doy <= julianMonth[x])
		{
			setMonth(x);
			setDay(doy-julianMonth[x-1]);
			break;
		}
	}	
}



/**********************
// copy constructor
**********************/

/*********************
// destructor
**********************/

Date::~Date()
{
    delete month;
    delete day;
    delete year;
    
}
/***

/***************************
*  other member functions
***************************/

Date Date :: operator =(const Date &dateRight)
{
	cout << "\nin overload = sign\n";
	
	
	
	setMonth(dateRight.getMonth());												//default data profiles
	setDay(dateRight.getDay());
	setYear(dateRight.getYear());
		
	return *this;
	
}
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

int Date :: calcDayOfYear()
{
    int totalDay = 0;   
    int julian[13] = {0,31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
     
    totalDay = (julian[getMonth()-1] + getDay());
        
    if (calcLeapYear() && getMonth() > 2)
    {
        totalDay++;
    }
    return totalDay;
}

void validateDate(int m,int d,int y)
{
	cout << "TEEEEESTTT!!!!!!!!!!!!";
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
void testDate02();
void testDate03();
void testDate04();
void testDate05();
void testDate08A();
void testDate08B();
/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{


	testDate08B();
	
    system("PAUSE");               // causes the program to pause
    return 0;
}  // end main

/*******************************************
*   code for the first assignment test
*******************************************/
void testDate01()
{
     cout << "\nin testDate01()\n";


     Date d1;
     
     d1.setDay(7);
     d1.setMonth(7);
     d1.setYear(1983);
     
     d1.display();
}


void testDate02()
{
    cout << "\nin testDate02()\n";
  
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

void testDate03()					//tester to make sure d1 intializes, and d2 intializes with numbers given.
{
	cout << "\nin testDate03()\n";
	
	Date d1;						//calls Date()
	Date d2(01,01,0000);			//calls Date(int m,int d, int y)
	
	d1.display();
	d2.display();
		
}

void testDate04()					//Testing function to ensure pointers and delete works.
{
	cout << "\nin testDate04()\n";

	
	Date d1;						//calls Date()
	Date d2(12,21,2012);			//calls Date(int m,int d, int y)
	
	
	d1.display();
	d2.display();
	
			
}

void testDate05()					//Testing function to ensure pointers and delete works.
{
	cout << "\nin testDate05()\n";

	
	Date d1;						//calls Date()
	Date d2(12,21,2012);			//calls Date(int m,int d, int y)
	
	
	d1.display();
	d2.display();
	
	d1 = d2;						//testing copy constructor
	
	d1.display();
	d2.display();
			
}

void testDate08B()					//Testing function to ensure pointers and delete works.
{
	cout << "\nin testDate08A()\n";

	
						
	Date d1(1,1999);			//uses new date class to caculate month
	Date d2(1,2000);		
	Date d3(365,1999);
	Date d4(365,2000);
	
		
	d1.display();												//display to verify data if anything is wrong.
	d2.display();
	d3.display();
	d4.display();

	cout << "\nDate used was 1, and year was 1999:\nThe expected result should be 1/1/1999, the actual result is "  
	<< d1.getMonth() << "/" << d1.getDay()<< "/" << d1.getYear();
	cout << "\nDate used was 1, and year was 1999:\nThe expected result should be 1/1/2000, the actual result is "  
	<< d2.getMonth() << "/" << d2.getDay() << "/" << d2.getYear();
	cout << "\nDate used was 365, and year was 1999(non leap year):\nThe expected result should be 12/31/1999, the actual result is "  
	<< d3.getMonth() << "/" << d3.getDay() << "/" << d3.getYear();
	cout << "\nDate used was 365, and year was 1999(with a leap year):\nThe expected result should be 12/30/2000, the actual result is "  
	<< d4.getMonth() << "/" << d4.getDay() << "/" << d4.getYear() << endl;
	
	

}




















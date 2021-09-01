/**************************************************
*
*   program name:     Date09
*   Author:           Nicholas Stepka
*   remarks:          this script should validate a date to 
*					  make sure the date is correct.
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

class d09exception {
	private :
		string message;
	
	public:
	// constructors
	d09exception()
	{
	};
	 
	void setMessage(string m) {message = m;}
	string getMessage() const {return message;}
	 
	 
	
};

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
	cout << "\nin constructor with 3 ints\n";	
	
	month = new int();             //memory allocated
    day = new int();
    year = new int();
    

	setMonth(m);
	setDay(d);
	setYear(y);
	
//	if(validateDate(m,d,y) == false)
//	{
//		setMonth(99);
//		setDay(99);
//		setYear(9999);
//		cout << "\n~~~~~~~~~invalid date~~~~~~~~~\n";
//	}	
	try
	{
		validateDate(m,d,y);
	}
	catch(d09exception d)
	{
		setMonth(99);
		setDay(99);
		setYear(9999);
		cout << d.getMessage() << endl;
		
	}
	
	
	
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

void Date :: validateDate(int m,int d,int y)
{
	cout << "\nIn date Validate\n";
       switch(m)
       {
       case 1:
           if(d <= 0 || d > 31)
           {
		   		d09exception d1;
				d1.setMessage("Jan with invalid date");
				throw d1;
		   }
		   break;
 		case 2:
       		if(calcLeapYear() == false)
			   {
    			if(d <= 0 || d > 28)
           {
		   		d09exception d1;
				d1.setMessage("Feb with invalid date");
				throw d1;
		   }
			}  
			if(calcLeapYear() == true)
			{
			   	if(d <= 0 || d > 29)
           		{
		   			d09exception d1;
					d1.setMessage("Feb with invalid date");
					throw d1;
		   		}
			}
       	case 3:
           if(d <= 0 || d > 31)
           {
		   		d09exception d1;
				d1.setMessage("March with invalid date");
				throw d1;
		   }
		   break;
       case 4:
           if(d <= 0 || d > 30)
           {
		   		d09exception d1;
				d1.setMessage("April with invalid date");
				throw d1;
		   }
		   break;
       case 5:
           if(d <= 0 || d > 31)
           {
		   		d09exception d1;
				d1.setMessage("May with invalid date");
				throw d1;
		   }
		   break;
       case 6:
           if(d <= 0 || d > 30)
           {
		   		d09exception d1;
				d1.setMessage("June with invalid date");
				throw d1;
		   }
		   break;
       case 7:
           if(d <= 0 || d > 31)
           {
		   		d09exception d1;
				d1.setMessage("July with invalid date");
				throw d1;
		   }
		   break;
       case 8:
           if(d <= 0 || d > 31)
           {
		   		d09exception d1;
				d1.setMessage("August with invalid date");
				throw d1;
		   }
		   break;
       case 9:
           if(d <= 0 || d > 30)
           {
		   		d09exception d1;
				d1.setMessage("September with invalid date");
				throw d1;
		   }
		   break;
       case 10:
           if(d <= 0 || d > 31)
           {
		   		d09exception d1;
				d1.setMessage("October with invalid date");
				throw d1;
		   }
		   break;
       case 11:
           if(d <= 0 || d > 30)
           {
		   		d09exception d1;
				d1.setMessage("November with invalid date");
				throw d1;
		   }
		   break;
		   
       case 12:
           if(d <= 0 || d > 31)
           {
		   		d09exception d1;
				d1.setMessage("December with invalid date");
				throw d1;
		   }
		   break;
		
		default:
			d09exception d1;
			d1.setMessage("Invalid month entry");
			throw d1;
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
void testDate09();
/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{


	testDate09();
	
    system("PAUSE");               // causes the program to pause
    return 0;
}  // end main

/*******************************************
*   code for the first assignment test
*******************************************/


void testDate09()					//Testing function to ensure pointers and delete works.
{
	cout << "\nin testDate08A()\n";

	
						
	Date d1(1,15,2020);			//uses new date class to caculate month
	Date d2(2,29,2021);		
	Date d2Correct(2,29,2020);
	Date d3(12,31,2020);
	Date d4(-3,13,2000);
	Date d5(13,3,2000);

	cout  << "\nd1 should be a validate date\n";
	d1.display();												//display to verify data if anything is wrong.
	cout  << "\nd2 should not be a validate date\n";
	d2.display();
	cout  << "\nshould be a validate date\n";
	d2Correct.display();
	cout  << "\nd3 should be a validate date\n";
	d3.display();
	cout  << "\nd4 should not be a validate date\n";
	d4.display();
	cout  << "\nd5 should not be a validate date\n";
	d5.display();	

}




















/**************************************************
*
*   program name:     Airline Assignment
*   Author:           Nicholas Stepka
*   remarks:          Crate and airline ticket with a string for depart
*					  dest, and an int pointer for time
*					  overload the assignment,and a +
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

class AirLineTicket
{
    private:
        // data items
        string depart;
        string dest;
    	int* time;
    public:
        // constructors
        AirLineTicket();
        
 
        AirLineTicket(string s1, string s2);
                
 
        AirLineTicket(string s1, string s2, int t);
 
        // copy constructor
       AirLineTicket(const AirLineTicket &obj) 
		{
  			cout << "In copy constructor\n";
        
    		time = new int();//memory allocated
        	
        	setDepart(obj.getDepart());							//default data profiles
			setDest(obj.getDest());
			setTime(obj.getTime());
		       	
		}
 
        // destructor
        ~AirLineTicket();
 
        // setters
 		
 		void setDepart(string stringDepart) {depart = stringDepart;}
 		void setDest(string stringDest) {dest = stringDest;}
 		void setTime(int x) {*time = x;}
        // getters
        
        string getDepart() const {return depart;}
        string getDest() const {return dest;}
        int getTime() const {return *time;}
 
       // overload the assignment
 	    AirLineTicket operator =(const AirLineTicket &ticketRight);
 	    
       // overload the + operator
//       Coord operator +(int numToAdd);
       AirLineTicket operator +(int timeAdded);
// 		AirLineTicket operator +(const AirLineTicket &ticketRight, int timeAdded);
        void display();
};


/*********************
// constructors
*********************/
AirLineTicket :: AirLineTicket()
{
	//        depart and dest are assigned to spaces time is assigned to 0

    time = new int();		 //memory allocated
    
	setDepart(" ");
	setDest(" ");
	setTime(0);							//default data profiles
	
}

AirLineTicket :: AirLineTicket(string s1, string s2)
{
	//s1 is assigned to depart, s2 is assigned to dest

    time = new int();   //memory allocated
    
	setDepart(s1);
	setDest(s2);
	setTime(0);	
}

AirLineTicket :: AirLineTicket(string s1, string s2, int t)
{
	//s1 is assigned to depart, s2 is assigned to dest, and t is assidned to time

    time = new int();  //memory allocated
    
    setDepart(s1);
	setDest(s2);
	setTime(t);	
	
}


/*********************
// destructor
**********************/
AirLineTicket::~AirLineTicket()
{
    cout << "in destructor\n" << endl;
 
    delete time;
    
    cout << "out of destruction of destructors\n";
}


/*******************************
*  display() member function
*******************************/
AirLineTicket AirLineTicket :: operator =(const AirLineTicket &ticketRight)
{
	depart = ticketRight.getDepart();
	dest = ticketRight.getDest();
	setTime(ticketRight.getTime());
	return *this;
}

AirLineTicket AirLineTicket :: operator +(int timeAdded)
{
	AirLineTicket temp;
	temp.setDepart(depart);
	temp.setDest(dest);
	temp.setTime(getTime() + timeAdded);
	return temp;
}
void AirLineTicket :: display()
{

    cout << "\ndeparture time   "    <<   getTime()       << endl; 
    cout << "\ndeparture city     "    <<   getDepart()   <<  endl;
    cout << "\ndestination city   "    <<   getDest()      <<   endl;  
//             
//    cout << endl << " Red       is " << getRed();
//    cout << endl << " Blue      is " << getBlue();
//    cout << endl << " Green     is " << getGreen() << endl;
//	
//	
}


/****************************************
*     non-member function prototypes
****************************************/
void testAirLineTicket01();


/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{


	testAirLineTicket01();
	
    system("PAUSE");               // causes the program to pause
    return 0;
}  // end main


void testAirLineTicket01()
{
    cout << "\nin testAirLineTicket01()\n";
	AirLineTicket a1;
	AirLineTicket a2("nashville", "minneapolis", 1200);
	
	a1.display();
	
	a2.display();
	
	a1 = a2 + 10;
	
	a1.display();
}


/**************************************************
*
*   program name:     Color
*   Author:           Nicholas Stepka
*   remarks:          creates a color coord
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
        string depart
        string dest
    	int* time 
    public:
        // constructors
        AirLineTicket();
        
 
        AirLineTicket(string s1, string s2);
                
 
        AirLineTicket(string s1, string s2, int t);
                s1 is assigned to depart, s2 is assigned to dest, and t is assidned to time
 
        // copy constructor
       AirLineTicket(const Coord &obj) 
		{
  			cout << "In copy constructor\n";
        	depart = new string();             //memory allocated
    		dest = new string();
    		time = new int();
        	
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
 
       // overload the + operator
 
        void display();
};


/*********************
// constructors
*********************/
AirLineTicket :: AirLineTicket()
{
	//        depart and dest are assigned to spaces time is assigned to 0
	depart = new string();             //memory allocated
    dest = new string();
    time = new int();
    
	setDepart(" ");
	setDest(" ");
	setTime(0);							//default data profiles
	
}

AirLineTicket :: AirLineTicket(string s1, string s2,)
{
	//s1 is assigned to depart, s2 is assigned to dest
	depart = new string();             //memory allocated
    dest = new string();
    time = new int();
    
	setDepart(s1);
	setDest(s2);
	setTime(0);	
}

AirLineTicket :: AirLineTicket(string s1, string s2, int t)
{
	//s1 is assigned to depart, s2 is assigned to dest, and t is assidned to time
	depart = new string();             //memory allocated
    dest = new string();
    time = new int();
    
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
    delete depart;
    delete dest;
    delete time;
    
    cout << "out of destruction of destructors\n";
}


/*******************************
*  display() member function
*******************************/

void Color :: display()
{

             
             
    cout << endl << " Red       is " << getRed();
    cout << endl << " Blue      is " << getBlue();
    cout << endl << " Green     is " << getGreen() << endl;
	
	
}


/****************************************
*     non-member function prototypes
****************************************/
void testColor01();


/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{


	testColor01();
	
    system("PAUSE");               // causes the program to pause
    return 0;
}  // end main


void testColor01()
{
    cout << "\nin testCoord01()\n";
	
	Color c1(1);
	Color c2(1,2,3);
	
	c1.display();
	c2.display();
	
}


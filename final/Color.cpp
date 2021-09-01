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

class Color
{
    private:
        // data items
       
        int* red;
        int* green;
        int* blue;
        
    public:
        // constructors
        Color();
        Color(int num);
         
          
        Color(int r, int g, int b);


        // destructor
        ~Color();

        // setters
        void setRed(int x) {*red = x;}
        void setGreen(int x) {*green = x;}
        void setBlue(int x) {*blue = x;}
        
        
        // getters
        int getRed() const {return *red;}
        int getBlue() const {return *blue;}
        int getGreen() const {return *green;}
        

        void display();
        
};


/*********************
// constructors
*********************/

Color :: Color()
{
	red = new int();             //memory allocated
    green = new int();
    blue = new int();
    
	setRed(0);							//default data profiles
	setGreen(0);
	setBlue(0);
}

Color :: Color(int num)
{
	red = new int();             //memory allocated
    green = new int();
    blue = new int();
    
	setRed(num);							//default data profiles
	setGreen(num);
	
	setBlue(num);
}

Color :: Color(int r, int g, int b)
{
	red = new int();             //memory allocated
    green = new int();
    blue = new int();
    setRed(r);							//default data profiles
	setGreen(g);
	
	setBlue(b);
	
}


/*********************
// destructor
**********************/
Color::~Color()
{
    cout << "in destructor\n" << endl;
    delete red;
    delete blue;
    delete green;
    
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




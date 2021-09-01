/**************************************************
*
*   program name:     Card02
*   Author:           Nicholas Stepka
*   remarks:          Skeleton C++ code
*                     More cards
*                     includes a class defoinition
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
class Card
{
     private:   // private definitions
     int value;
     char suit;
     char card;

     public:    // public definitions

        // constructors
		Card();
		Card(int v, char s, char c);
        // copy constructor
		Card(const Card &obj) 
		{
  			cout << "In copy constructor\n";
        
        	
        	setValue(obj.getValue());							//default data profiles
			setSuit(obj.getSuit());
			setCard(obj.getCard());
		       	
		}
        // destructor
//		~Card();
        // setters
		inline void setValue(int v) {value = v;}
		inline void setSuit(char s) {suit = s;}
		inline void setCard(char c) {card = c;}
		
        // getters
		inline int getValue() const {return value;}
		inline char getSuit() const {return suit;}
		inline char getCard() const {return card;}
		
        // other member functions
		string determineSuit(char s);
        // list display() last
        void display();
};

/****************************************
*    code class member functions
****************************************/

/*********************
// constructors
*********************/
Card :: Card()
{
	cout << "In Card()\n";
	
	cout << "\nIn default constuctor\n";
	
	setValue(1);
	setSuit('S');
	setCard('7');
	
}

Card :: Card(int v, char s, char c)
{
	cout << "In Card(int v, char s, char c)\n";
	
	cout << "\nIn default constuctor\n";
	
	setValue(v);
	setSuit(s);
	setCard(c);
	
}

/**********************
// copy constructor
**********************/

/*********************
// destructor
**********************/
//Card::~Card()
//{
//    cout << "in destructor\n" << endl;			Will only work with pointers?
//    delete value;
//    delete suit;
//    delete card;
//    
//    cout << "out of destruction of destructors\n";
//}
/***************************
*  other member functions
***************************/
string Card :: determineSuit(char s)
{
	int suitMatches = 0;
	while(suitMatches == 0)
	{
	
		if(s == 's' || s == 'S')
		{
			return "Spades";
		}
		if(s == 'h' || s == 'H')
		{
			suitMatches = 1;
			return "Hearts";
		}
		
		if(s == 'c' || s == 'C')
		{
			suitMatches = 1;
			return "Clubs";
		}
		
		if(s == 'd' || s == 'D')
		{4
			suitMatches = 1;
			return "Diamonds";
			
		}
		if(suitMatches == 0)
		{
			cout << "You did not enter a correct suit.  The format is c C for clubs, s S for spades, h H for Hearts, d D for diamonds:";
			cin >> s;
			setSuit(s);
			
		}
	}
}

/*******************************
*  display() member function
*******************************/
void Card :: display() {
	
	cout <<  "\nIn display\n";
	cout << "the suit is : " <<  determineSuit(getSuit()) << endl;
	cout << "Card value is :" << getValue() << endl;
	cout << "The Card is :" << getCard() << endl;
	
}
/****************************************
*     non-member function prototypes
****************************************/
void testCard01();
void testCard02();

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{

   	testCard01();
    testCard02();

    system("PAUSE");               // causes the program to pause
    return 0;
}  // end main

/*******************************************
*   code for the first assignment test
*******************************************/
void testCard01()
{
     cout << "\nin testCard01()\n";
	Card c1;						//testing first constructor
	c1.display();
	
}

/*******************************************
*   code for the second assignment test
*******************************************/
void testCard02()
{
     cout << "\nin testCard02()\n";
     
     Card c2(2,' ','2');		//testing first constructor with elements
     							//and it verifies correct suit.
     c2.display();
}























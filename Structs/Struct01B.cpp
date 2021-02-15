/**********************************************************
*
*   program name:      Struct01BStart
*   author:            Nicholas
*   due date:          02/15/2021
*   remarks:           this program does 
*                      1.  creates a FootballTeam struct 
*                      2.  passes that FootballTeam struct 
*                          to a function   
*
**********************************************************

/*********************************
*  libraries here
**********************************/

#include <iostream>			    // needed for Cin and Cout
#include <string>			    // needed to manipulate strings
#include <iomanip>		    	// needed for output formatting
using namespace std;

/*********************************
*   struct definition
**********************************/
struct FootballTeam
{
    string  teamName;                // home team name
    string  opponentName;            // opponent name
    int     teamScore;               // home teams score
    int     opponentScore;           // opponents score
};

/*********************************
*   prototypes here
**********************************/
void testStruct01B();
void testStruct01BB(FootballTeam fb);

/***************************************
*  there are no global variables
***************************************/

int main()
{  
   //declare and intialize the struct
   
   testStruct01B();
   
   system("pause"); 
   return 0;
}
void testStruct01B()
{
   cout << "**********************************\n";
   cout << "*   in void testStruct01B()      *\n";
   cout << "**********************************\n\n\n";
   
   // declare a FootballTeam object.  
   // load the FootballTeam object
   // you can use a statement like
   // FootballTeam Buffalo = {"Buffalo Bills", "New York Jets", 33, 21};
   FootballTeam footBallTeamName = {"Buffalo Bills", "New York Jets", 33, 21};
   // to declare and initialize the object  easier than cin and cout
   
   // print out this object			
	cout << "Football Home Team Name:  " << footBallTeamName.teamName << endl;
   	cout << "Football Opponent Name:   " << footBallTeamName.opponentName << endl;
   	cout << "Football Home Team Score  " << footBallTeamName.teamScore << endl;
   	cout << "Football Opponent Score   " <<  footBallTeamName.opponentScore << endl;
   
   // call testStruct01BB(FootballTeam fb) using your 
   // FootballTeam struct as the parameter
    testStruct01BB(footBallTeamName);
   // the objects printed in testStruct01B() and 
   // testStruct01BB(FootballTeam fb) should be the same
}

void testStruct01BB(FootballTeam fb) 
{
	cout << "Here we prove we passed a struct to a function from a function\n";
	cout << "Football Home Team Name:  " << fb.teamName << endl;
   	cout << "Football Opponent Name:   " << fb.opponentName << endl;
   	cout << "Football Home Team Score  " << fb.teamScore << endl;
   	cout << "Football Opponent Score   " << fb.opponentScore << endl;
}

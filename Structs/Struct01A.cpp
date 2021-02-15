/**************************************************************************************
*
*    program name:   Struct01
*    author:         Nicholas Stepka
*	 due date:       02/15/2021 
*    remarks:        this program does [ in the testing function void test01() ]
*                      1.  define a struct FootballTeam 
*                      2.  create a FootballTeam    
*                      3.  using 'cin',  load the FootballTeam object   
*                      4.  using 'cout', display (print) the FootballTeam object
*
***************************************************************************************/

/*********************************
*  libraries here
**********************************/
//#include "stdafx.h"			// needed for Visual Studio
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
void testStruct01A();

/***************************************
*  there are no global variables
***************************************/

int main()
{  
   testStruct01A();
   
   system("pause"); 
   return 0;
}
void testStruct01A()
{
   cout << "**********************************\n";
   cout << "*   in void testStruct01A()      *\n";
   cout << "**********************************\n\n\n";
   
   // declare a FootballTeam struct
   FootballTeam *team = new FootballTeam;
   
   // initialize the FootballTeam data fields
   cout << "What is the Home team name? : ";
  
   getline(cin, team->teamName);
   cout <<"\n";
   cout << "What is the Opponent team name? : ";
   getline(cin, team->opponentName);
   cout << "What is the Home Team score? : ";
   cin >> team->teamScore;
   cout << "What is the Opponent team score? : ";
   cin >> team->opponentScore;
   
   

   // print the FootballTeam struct
	cout <<"Home Team              " << team->teamName << endl;
	cout <<"Opponent Team          " << team->opponentName << endl;
	cout <<"Home Team Score        " << team->teamScore << endl;
	cout <<"Opponent Team          " << team->opponentScore << endl;
}


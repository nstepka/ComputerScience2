/**************************************************************************************
*
*   program name:      Struct02B
*   author:            Nick Stepka
* 	due: 			   02/15/2021
*   remarks:           this program does 
*                      1.  creates a FootballTeam struct 
*                      2.  passes that FootballTeam struct 
*                          to a function   
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
void testStruct02B();
void testStruct02BB(FootballTeam* pfb);



/***************************************
*  there are no global variables
***************************************/

int main()
{  
   testStruct02B();
   system("pause"); 
   return 0;
}

void testStruct02B() 
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
   
   

   // print the FootballTeam struct using pointers
	cout <<"Home Team              " << team->teamName << endl;
	cout <<"Opponent Team          " << team->opponentName << endl;
	cout <<"Home Team Score        " << team->teamScore << endl;
	cout <<"Opponent Team          " << team->opponentScore << endl;
	testStruct02BB(team);
	
	
}
void testStruct02BB(FootballTeam* pfb){
	cout << "In testStruct02BB(Footballteam* pfb) to verify struc was passed into the new struct\n";
	cout <<"Home Team              " << pfb->teamName << endl;
	cout <<"Opponent Team          " << pfb->opponentName << endl;
	cout <<"Home Team Score        " << pfb->teamScore << endl;
	cout <<"Opponent Team          " << pfb->opponentScore << endl;
}


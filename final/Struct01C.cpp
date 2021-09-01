/**************************************************************************************
*
*   program name:  Struct01C
*   author:        Nicholas Stepka
*   due date:      02/15/2021
*   remarks:       this program does 
*                   1.  define and initialize a struct FootballTeam
*                   2.  print this struct
*					3.  create a function named 
*                           FootballTeam returnStruct()
*                       create and initialize another FootballTeam struct
*                       print this struct
*                       return this FootballTean object to the calling function
*                   4.  print the returned FootballTeam struct.  it should be
*                       the same as the struct printed in the called finction
					5.  Added remarks as instructed.
*
***************************************************************************************/
/*********************************
*  libraries here
**********************************/
#include <iostream>
#include <string>
using namespace std;
/*********************************
* struct definition
**********************************/
struct FootballTeam
{
	string team; 		// team name
	string opponent; 	// opponent name
	int teamScore; 		// teams score
	int oppoScore; 		// opponents score
};

void testStruct01C();
FootballTeam returnStruct();

int main()
{
	testStruct01C();
	return 0;
}

/**********************************************
*   creates a FootballTeam object
*   prints the object out
*   calls FootballTeam returnStruct()
*   which returns another FootballTeam object
*   prints the object out
**************************************************/
void testStruct01C()
{
	FootballTeam fb01 = {"Buffalo Bills", "New York Jets", 33, 21};
	
	
    cout << "\nWe are in testStruct01C\n";
    cout << "Football Home Team Name:  " << fb01.team << endl;
   	cout << "Football Opponent Name:   " << fb01.opponent << endl;
   	cout << "Football Home Team Score  " << fb01.teamScore << endl;
   	cout << "Football Opponent Score   " << fb01.oppoScore << endl;
 
 
 	fb01 = returnStruct();
 	
 	
 	cout << "\nWe are back in testStruct01C and making sure the main struct has been returned and updated:\n";
 	cout << "Football Home Team Name:  " << fb01.team << endl;
   	cout << "Football Opponent Name:   " << fb01.opponent << endl;
   	cout << "Football Home Team Score  " << fb01.teamScore << endl;
   	cout << "Football Opponent Score   " << fb01.oppoScore << endl;
}


FootballTeam returnStruct()
{
	cout << "\nWe are now in returnStruct\n";
	FootballTeam fb02 = {"Minnesota Vikings", "Buffalo Bills", 56, 2};
	cout << "Football Home Team Name:  " << fb02.team;
   	cout << "Football Opponent Name:   " << fb02.opponent << endl;
   	cout << "Football Home Team Score  " << fb02.teamScore << endl;
   	cout << "Football Opponent Score   " << fb02.oppoScore << endl;
	return fb02;
}


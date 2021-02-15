/**************************************************************************************
*
*   program name:      Struct02C
*   author:            Nicholas Stepka
*   Date due:          02/15/2021
*   remarks:           this program does
*                      1.  define a FootballTeam struct pointer
*                      2.  initialize the struct FootballTeam
*                      2.  print this struct
*	 	               3.  create a function named 
*                                   FootballTeam* returnStructPointer()
*                          create and initialize another FootballTeam pointer
*                          print this struct
*                          return this FootballTean pointer to the calling function
*                      4.  print the returned FootballTeam struct (using the pointer.  
*                          it should be the same as the struct printed in the called 
*                          function
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
	string team; // team name
	string opponent; // opponent name
	int teamScore; // teams score
	int oppoScore; // opponents score
};

void testStruct02C();
FootballTeam* returnStruct();

int main()
{
	testStruct02C();
	return 0;
}

void testStruct02C()
{
    // declare a FootballTeam pointer named fb01;.  
   FootballTeam* fb01 = new FootballTeam;
   
    // load the FootballTeam object using the pointer
    // you can use a statement like
    // FootballTeam* fb01 = {"Buffalo Bills", "New York Jets", 33, 21};
    // to declare and initialize the object  easier than cin and cout			
	*fb01 = {"Buffalo Bills", "New York Jets", 33, 21};
 	cout <<"A football team in the first function\n";
	cout <<"Home Team              " << fb01->team << endl;
	cout <<"Opponent Team          " << fb01->opponent << endl;
	cout <<"Home Team Score        " << fb01->teamScore << endl;
	cout <<"Opponent Team          " << fb01->oppoScore << endl;
 	
	// declare another Football Team pointer (named fb02)
 	 	FootballTeam* fb02 = new FootballTeam;
 	fb02 = returnStruct();
 	//output of the return function.
 	cout <<"\nThe output of the ruturn FootballTeam struct\n";
 	cout <<"Home Team              " << fb02->team << endl;
	cout <<"Opponent Team          " << fb02->opponent << endl;
	cout <<"Home Team Score        " << fb02->teamScore << endl;
	cout <<"Opponent Team          " << fb02->oppoScore << endl;
}

/***********************************************
*     finction 
*         creates, 
*         initializes 
*         prints a FootballTeam struct
*     then returns the struct
*************************************************/
FootballTeam* returnStruct()
{
	// declare a FootballTeam pointer.  
	FootballTeam* fb03 = new FootballTeam;
    // load the FootballTeam object using the pointer
    // you can use a statement like
    
    *fb03 = {"Minnesota Vikes", "New York Giants", 55, 2};
    cout <<"\nA new Football team in a function that returns this team\n";
    cout <<"Home Team              " << fb03->team << endl;
	cout <<"Opponent Team          " << fb03->opponent << endl;
	cout <<"Home Team Score        " << fb03->teamScore << endl;
	cout <<"Opponent Team          " << fb03->oppoScore << endl;
    // to declare and initialize the object  easier than cin and cout
   
    // print out this object using the pointer		

	return fb03;
}


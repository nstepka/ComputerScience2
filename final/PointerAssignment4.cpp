/*************************************************************************
* 
*      program name:       PointerStringsAssignment
*      Author:             Nicholas Stepka          
*      date due:           02/15/2021
*      remarks:            create a pointer array named week with 7 characters
*						   allocate at least 10 characters of memory to each pointer
*						   using strcpy load the days of the week into the pointer
*						   print out the day of the week using the pointers.	
*************************************************************************/

/******************************************
*     library includes 
******************************************/
#include <iostream>                // needed for I/O
#include <string.h>

/******************************************
*     pre-processor
******************************************/
#define PI 3.14159
using namespace std;


/****************************************
*          function prototypes
****************************************/

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *   local variables            *
    *******************************/
    
    char* week[7];											 // declare an array of 7 character pointers
    
	char weekName[7][10]= {"Sunday", "Monday", "Tuesday", 
                           "Wednesday", "Thursday", 
						   "Friday", "Saturday"
						  };    
    

    for(int x=0; x<7; x++)
    {
    	week[x] = new char[10];								//use the new keyword to allocate 10 charters of memory to each pointer
    }
    
    for(int x=0; x<7; x++)
    {
    	strcpy(week[x], weekName[x]);						//use strcpy to load the day of the week into the proper pointer.
    }   
 
    for(int x=0; x<7; x++)
    {
    	cout << week[x] << endl;							//print out the day of the week using the pointers?
    }     
    
    
 
    system("pause");
    return 0;
} 





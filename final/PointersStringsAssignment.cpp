/*************************************************************************
* 
*      program name:       PointerStringsAssignment
*      Author:             Captain Kirk
*      date due:           09/19/11
*      remarks:            How about them Bills?    
*
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
*          classes
****************************************/
/****************************************
*          member functions
****************************************/
/****************************************
*          function prototypes
****************************************/
void demo01();
void demo02();
void demo03();
void demo04();
void demo05();
void demo06();

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *   local variables            *
    *******************************/
    demo01();
    demo02();   
    demo03();   
    demo04();
    demo05();   
    demo06();         
    system("pause");
    return 0;
}  // end main

/*****************************************
*  1.  declare a 2 dimentional array
*      of characters to hold the names
*      of the months
*      char monthName[12][15];
*  2.  initialize each row of the array
*      with the proper month name
*      use strcpy to do this
*  3.  print month names - one per line
*****************************************/
void demo01()
{
    cout << "\n\n  **** in Demo01 ****\n";
    // declare
	char monthName[12][15];
	// initialize
    
    strcpy(monthName[0],"January");
	strcpy(monthName[1],"Febuary");
	strcpy(monthName[2],"March");
	strcpy(monthName[3],"April");
	strcpy(monthName[4],"May");
	strcpy(monthName[5],"June");
	strcpy(monthName[6],"July");
	strcpy(monthName[7],"August");
	strcpy(monthName[8],"Septemeber");
	strcpy(monthName[9],"October");
	strcpy(monthName[10],"December");
	strcpy(monthName[11],"December");    
                             
    // print
    for(int x=0; x<12; x++)
    {
    	cout << monthName[x] << endl;							//print out the months of the year using the pointers?
    }   
}
/*****************************************
*
*  same as demo01 except you declare and 
*  initialize the array in one line
*
*  1.  declare a 2 dimentional array
*      of characters to hold the names
*      of the months
*      char monthName[12][15];
*  2.  initialize the array with the proper 
*      month name when you declare the array
*  3.  print month names - one per line
*****************************************/
void demo02()
{     
     cout << "\n\n  **** in Demo02 ****\n";
     // declare and initialize
     char monthName[12][15]= {"January", "Febuary", "March", 
                             "April", "May", "June", "July", 
                             "August", "September", "October", 
                             "November", "December"};
     
     // print
    for(int x=0; x<12; x++)
    {
    	cout << monthName[x] << endl;						
    }   
}

/*****************************************
*
*  same as demo02 except you declare the 
*  array with [] rows and [15] columnsand 
*  char monthName[][15]
*
*  1.  declare a 2 dimentional array
*      of characters to hold the names
*      of the months
*      char monthName[12][15];
*  2.  initialize the array with the proper 
*      month name when you declare the array
*  3.  print month names - one per line
*****************************************/
void demo03()
{
     cout << "\n\n  **** in Demo03 ****\n";
     // declare and initialize
     char monthName[][15]= {"January", "Febuary", "March", 
                             "April", "May", "June", "July", 
                             "August", "September", "October", 
                             "November", "December"};
     
     // print
    for(int x=0; x<12; x++)
    {
    	cout << monthName[x] << endl;						
    }   
}
 
/*****************************************
*
*  using pointers
*
*  1.  declare an array of 12 char pointers
*      char* monthName[12];
*  2.  allocate memory for each pointer
*  3.  initialize (dereference) each pointer
*      with the proper month name
*  4.  print month names - one per line
*****************************************/
void demo04()
{
    cout << "\n\n  **** in Demo04 ****\n";
    // declare 
    char* monthName[12];
    char monthNames[12][15]= {"January", "Febuary", "March", 
                             "April", "May", "June", "July", 
                             "August", "September", "October", 
                             "November", "December"};
    for(int x=0; x<12; x++)
    {
    	monthName[x] = new char[15];								//use the new keyword to allocate 15 charters of memory to each pointer
    }
  
	 
     // load month values
     for(int x=0; x<12; x++)
    {
    	strcpy(monthName[x], monthNames[x]);						//use strcpy to load the months of the year into the proper pointer.
    }   
     
     // print
     for(int x=0; x<12; x++)
    {
    	cout << monthName[x] << endl;							//print out the month of the year using the pointers?
    }  
}       
 
/*****************************************
*
*  using pointers
*
*  1.  copy the function demo01() or demo02()
*      (start with one of those)
*  2.  declare a char pointer
*  3.  make the pointer point to the array
*  4.  print month names - one per line
*      using the pointer
*****************************************/
void demo05()
{
     cout << "\n\n  **** in Demo05 ****\n";
     // declare. instanciate and load the array
     // code for demo01() or demo02()
     
     // create a char pointer
     char* pMonthName;
     
     // make pointer point to the array
     
     // print array using the pointer
}          
    
    
/*****************************************
*
*  using pointers - you probably have some 
*  of this code in demo05()
*
*  1.  start with demo05() ????
*  2.  declare a char pointer
*  3.  allocate 180 characters of memory
*      (12 * 15 = 180)
*  4.  load the month names (using the pointer)
*  4.  print month names - one per line
*      using the pointer
*****************************************/
void demo06()
{
     cout << "\n\n  **** in Demo06 ****\n";

     // create a char pointer
     char* pMonthName;
     // allocate memory
     pMonthName = new char[180];   
       
     // load month names
     
     // print array using the pointer
}          
    
    
        
    
    
    
    
    
    
    
    
    
    
    
    
     
     
    











 


/**************************************************
* 
*      program name:   rainFall
*      Author:         Nicholas Stepka
*      remarks:        program calcs most rain in a month,
*					   least rain, average rain, and 
*                      total rain 
*
***************************************************/

/******************************************
*     library includes 
******************************************/
  #include <iostream>           // needed for cin and cout
  #include <string>             // needed for the string class
  #include <math.h>             // math functions - C
  #include <cmath>         		// math functions - C and C++
  #include <iomanip>			// needed for output formatting

/******************************************
*     pre-processor
******************************************/
#define PI 3.14159
using namespace std;

/****************************************
*     non-member function prototypes
****************************************/



/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{	
	
	string months[12] = {"January", "February", "March",			//String Array to hold months in a year
						"April", "May", "June",
						"July", "August", "Septemeber",
						"October", "November", "December"};
	
	double rainPerMonth[12];				
	string lowestMonth;
	double lowestRainFallMonth;
	string highestMonth;
	double highestRainPerMonth;
		
	double avgRainPerMonth = 0;
	int totalRain = 0;
	
	for(int x=0; x<12; x++) 
	{
	
	cout << "Enter rainfall for " << months[x] << ":      ";
	cin >> rainPerMonth[x];
	
		while(rainPerMonth[x] < 0)										//verify cin is greater then 0
		{	
		cout << "	invalid data (negative rainfall) -- retry ";
		cin >> rainPerMonth[x];
		}
		while( cin.fail() || (cin.peek() != '\r' && cin.peek() != '\n'))	//verify cin is a double
    	{
        cout << "invalid data, you must enter a number greater then 0:   " ;
        cin.clear();
        while( cin.get() != '\n' ); // or cin.ignore(1000, '\n');
        cin >> rainPerMonth[x];
    	}
    	
	}	
	
	
	
	
	for(int x = 0; x < 12; x++)											//gets total rain
	{
		totalRain = totalRain + rainPerMonth[x];
	}
	
	for(int x = 0; x < 12; x++)											//gets average rain in year
	{
		avgRainPerMonth = avgRainPerMonth + rainPerMonth[x];
	}
	
	avgRainPerMonth = avgRainPerMonth / 12;
	
	

	lowestMonth = months[0];
	lowestRainFallMonth = rainPerMonth[0];
	highestMonth = months[0];
	highestRainPerMonth = rainPerMonth[0];
	
	
	for(int x= 1; x < 12; x++)							
	{
		if(lowestRainFallMonth > rainPerMonth[x])						//gets lowestRain in a Month
		{
			lowestRainFallMonth = rainPerMonth[x];
			lowestMonth = months[x];
		}
		if(highestRainPerMonth < rainPerMonth[x])						//gets highest rain in a Month
		{
			highestRainPerMonth = rainPerMonth[x];
			highestMonth = months[x];
		}
	}
	
	
	std::cout << "\n1Total Rainfail: " << std::setprecision(2) << std::fixed << totalRain << endl;
	cout << "\nTotal Rainfail: " << totalRain << endl;
	std::cout << "\n1Total Rainfail: " << std::setprecision(2) << std::fixed << avgRainPerMonth << endl;
	cout << "Average Rainfail: " << avgRainPerMonth << endl;
	cout << "Least rain in : "  << lowestMonth << endl;
	cout << "Most rain in : "  << highestMonth << endl;
	
	system("pause");
	return 0;
}

/*******************************************
*  functions code goes after main
********************************************/






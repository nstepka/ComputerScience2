/**************************************************
*
*   program name:     BlackJack
*   Author:           Sulu
*   remarks:          builds the initial deck
*
***************************************************/

/*******************************************************
*     library includes
*******************************************************/
  #include <iostream>   // needed for cin and cout
  #include <string>     // needed for the string class
  #include <math.h>     // math functions - C
  #include <cmath>      // math functions - C and C++
  #include <iomanip>    // needed for output formatting
  #include <cstdlib>
  #include <ctime>
  #include <vector>
  #include <stack>
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
    private:
        char suit;                                  // holds suit
        char card;                                  // holds card
        int value;                                  // holds value
    public:
		// constructors
    	Card();                                         // no parameters
		Card(char s, char c, int v);                       // char + int parameter

		// setters
    	void setSuit(char s)        {suit = s;}         // sets suit
    	void setCard(char c)        {card = c;}         // sets card
    	void setValue(int v)        {value = v;}        // sets value

		// getters
    	char getSuit() const        {return suit;}      // returns suit
    	char getCard() const        {return card;}      // returns card
    	int getValue() const        {return value;}     // returns value

		// other member functions

		// list display() last
	    void display();                                 // displays info on cards
};

/****************************************
*    code class member functions
*    constructors
**************************************/
Card::Card()                                        // no parameter constructor
{
    setSuit(' ');                                   // set suit to space
    setCard(' ');                                   // set card to space
    setValue(0);                                    // set value to 0
}
Card::Card(char s, char c, int v)                           // two parameter constructor
{
    setSuit(s);                                     // set suit to s
    setCard(c);                                   // set card to space
    setValue(v);                                    // set value to v
}

/*******************************
*  display() member function
*******************************/
void Card::display()
{
	string cardCode;
    cout << endl;
    cout << setw(5) << " ";                              // output line 1
    switch (toupper(getSuit()))                             // determine suit
    {
        case 'H': cout << "Hearts"   << endl;
                  break;
        case 'D': cout << "Diamonds" << endl;
                  break;
        case 'C': cout << "Clubs"    << endl;
                  break;
        case 'S': cout << "Spades"   << endl;
                  break;
        default:  cout << "Unknown"  << endl;
    }
    cardCode = getCard();
    if(getCard() == 'T')
    {
    	cardCode = "10";
	}
    cout << setw(5) << " " << cardCode   << endl;
    cout << setw(5) << " " << getValue() << endl;
	cout << endl;
}

/*****************************************************
*  class CardUtil
*	1.  constructor
*	2.  createDeck 	- creates a deck of 52 random
*                     cards returns a pointer to 
*                     the beginning of the deck
*	3.  printDeck	- given a pointer to a stack 
*                     of cards will list the cards
*****************************************************/
class CardUtil
{
	private:
		char initCardValues [52][5];
 	   /****************************************
		*  array of 52 numbers that indicate
		*  the order of the cards selected from
		*  the  initCardValues [52][5]  table
		*****************************************/
		int deckOrder [52];
		int deckOrderIndex;

 	   /******************************************
		*  array of 52 numbers that works with the
		*  the   deckOrder [52]  array.  As the
		*  random numbers are being selected, the
		*  corresponding deckControl [52] number is
		*  set to a '9' if that index has already
		*  been selected
		*****************************************/
		int deckControl [52];
		int deckControlIndex;
		
	public:
		CardUtil()
 	    {
    		char initinitCardValues [52][5] = 
				{
					// SPADES
					{'S','A','T'},{'S','2','2'},{'S','3','3'},
					{'S','4','4'},{'S','5','5'},{'S','6','6'},
					{'S','7','7'},{'S','8','8'},{'S','9','9'},
					{'S','T','T'},{'S','J','T'},{'S','Q','T'},
					{'S','K','T'},
					// CLUBS
					{'C','A','T'},{'C','2','2'},{'C','3','3'},
					{'C','4','4'},{'C','5','5'},{'C','6','6'},
					{'C','7','7'},{'C','8','8'},{'C','9','9'},
					{'C','T','T'},{'C','J','T'},{'C','Q','T'},
					{'C','K','T'},
					// HEARTS
					{'H','A','T'},{'H','2','2'},{'H','3','3'},
					{'H','4','4'},{'H','5','5'},{'H','6','6'},
					{'H','7','7'},{'H','8','8'},{'H','9','9'},
					{'H','T','T'},{'H','J','T'},{'H','Q','T'},
					{'H','K','T'},
					// DIAMONDS
					{'D','A','T'},{'D','2','2'},{'D','3','3'},
					{'D','4','4'},{'D','5','5'},{'D','6','6'},
					{'D','7','7'},{'D','8','8'},{'D','9','9'},
					{'D','T','T'},{'D','J','T'},{'D','Q','T'},
					{'D','K','T'} 
				};
			for(int r=0; r<52; r++)
			{
				for(int c=0; c<5; c++)
				{
					initCardValues [r][c] = initinitCardValues [r][c];
				}
			}
			for(int r=0; r<52; r++)
			{
				deckOrder[r]   = 0;
				deckControl[r] = 0;	
			}
			deckOrderIndex   = 0;
			deckControlIndex = 0;
		} // end constructor
    	
  	Card* createDeck( )
	{
		int randNum   = 1000;
		bool finished = false;
		int count     = 0;
		time_t t;
	  	srand(time(0));

    	Card* cdPtr;
    	while(randNum > 52)
	    {	
	    	randNum = (rand()%100);
		}

		deckOrder [deckOrderIndex] = randNum;
		deckOrderIndex++;

		deckControl [randNum] = 9;

		/***************************************
		*  create an array opf random numbers
		*  from 0 ~ 51 to represent the indexes
		*  the  initCardValues [52][5]  table
		****************************************
		cout << "list random numbers\n";
		cout << deckOrder [0] << endl;
		/*************************************/
		
		while(!finished)
		{
			randNum = (rand()%100);
			if(randNum < 52)
			{
				if(deckControl [randNum] != 9)
				{
					deckOrder [deckOrderIndex] = randNum;
					//cout << deckOrder [deckOrderIndex] << endl;
					deckOrderIndex++;

					deckControl [randNum] = 9;
				}
				if(deckOrderIndex == 52)
				{
					break;
				}
			}
		}

		/*********************************************
		*  print the random list of indexes
		*  to the the  initCardValues [52][5]  table
		***********************************************
		cout << "\n\n**** print deck values01 ****\n";
		for(int x=0; x<52; x++)
		{
			cout << setw(5) << left << x << deckControl[x] << "  " << deckOrder[x] << endl;
		}
		/*************************************************/
		
		/**********************************************
		*  print the card values
		*      1.  suit
		*      2.  card
		*      3.  numeric value (a 'T' represents 10)
		*********************************************************
		cout << "\n\n**** print the card values ****\n";
		for(int x=0; x<52; x++)
		{
			cout << setw(5) << left << x;
			cout << initCardValues[deckOrder[x]][0] << "  "
			     << initCardValues[deckOrder[x]][1] << "  "
			     << initCardValues[deckOrder[x]][2] << endl;
		}
		/**********************************************************/
		
		/**********************************************
		*  Card* ptr52Cards   points to an array of 52 Cards
		***********************************************/
		Card* ptr52Cards;
		ptr52Cards = new Card[52];
		Card* savePtr52Cards;
		
		/**********************************************
		*  Card* ptrCard [52];
		*           is an array of 52 Card pointers
		***********************************************/
		Card* ptrCard [52];
		ptrCard[0] = ptr52Cards;
		savePtr52Cards = ptrCard[0];

		for(int x=0; x<52; x++)
		{
 	        int value;
	        if(initCardValues[deckOrder[x]][2] == 'T')
	        {
	        	value = 10;
			}
			else
			{
				value = initCardValues[deckOrder[x]][2]-48;
			}
			// create a Card allocating (assigning) to pointer
			ptrCard[x] =  new Card(initCardValues[deckOrder[x]][0],
		                           initCardValues[deckOrder[x]][1],
						           value
						          );
			// create a Card to pointer
			ptr52Cards[x] =	      Card(initCardValues[deckOrder[x]][0],
		                           initCardValues[deckOrder[x]][1],
						           value
					              );
		}

		return ptr52Cards;
	}
	void printDeck(Card* ptr52Cards)
	{
		for(int x = 0; x < 52; x++)
		{
			ptr52Cards->display();
		}
	}
};

int main()
{
	CardUtil* cut;
	cut = new CardUtil();

	Card tempCard;
	Card* cc;
	cc = new Card();
	
	Card* ptr2CardArray;
	Card* savePtr2Deck;

	ptr2CardArray = cut->createDeck();
	savePtr2Deck = ptr2CardArray;

	stack <Card> players;
	stack <Card> fullDeck;

	cout << "********************************\n";
	cout << "*  print final array of cards  *\n";
	cout << "*  build stack                 *\n";
	cout << "********************************\n";
  	for(int x = 0; x < 52; x++)
	{
		cout << "card #" << x << "\n";
	   	ptr2CardArray->display();
	
	   	fullDeck.push(*ptr2CardArray);
	   	ptr2CardArray++;
	}
	
	ptr2CardArray = savePtr2Deck;
	cout << "\n\n\n";
	cout << "********************************\n";
	cout << "*  unload and print deck       *\n";
	cout << "********************************\n";
	while(!fullDeck.empty())
	{
		tempCard = fullDeck.top();
    	tempCard.display();
    	fullDeck.pop();
	}
	
	cout << "\n\n\n";
	cout << "********************************\n";
	cout << "*  reload and print deck       *\n";
	cout << "********************************\n";
  	for(int x = 0; x < 52; x++)
	{
		cout << "card #" << x << "\n";
	   	ptr2CardArray->display();
	
	   	fullDeck.push(*ptr2CardArray);
	   	ptr2CardArray++;
	}
	ptr2CardArray = savePtr2Deck;


	/**************************************************
	*   right now you have an array of 52 cards 
	*   pointed to by the pointer ptr2CardArray
	*
	*   the deck of cards is also contained in a 
	*   stack namedstack of cards named
	*                 fullDeck
	*
	*   add your code to:
	*		1. ask for the number-of-players
	*		2. create an array of player stacks
	*  		   Array length is number-of-players + 1
	*          The extra stack is the dealer
	*		3. deal out 2 Cards to every one
	*		   in the array
	*          go around the array of players and
	*             	1.  pop off deck
	*           	2.  push on to "player"
	*	    4. go around the array of players again and 
	*          ask each 'player' if they want another card
	*
	*		   Max 5 Cards per player
	*
	*          if yes and the player has less than 5 cards 
	*          in his stack, add another Card to his/her stack.  
	*          if no, go to next player.  
	*		5. After everybody has all the Cards the want,
	*          print out all the Cards in each element
	*          of the array
	*******************************************************/
	
	int numPlayers = 0;
	
	cout << "\n How many players will there be?";
	cin >> numPlayers;
	numPlayers = numPlayers;
	stack <Card> player[numPlayers];
	int playerPoints[numPlayers];
	stack <Card> deck[52];
	int anotherCard = 1;
	int playerCardCounter = 2;
	
	for (int i = 0; i < numPlayers; i++) // ...initialize it
	{
    	playerPoints[i] = 0;
	}
	for(int y = 0; y < 2; y++)
	{
		for(int x = 0; x < numPlayers; x++)
		{
			cout << "FOR PLAYER " << x << "````````````````\n";
			tempCard = fullDeck.top();
    		tempCard.display();
    		fullDeck.pop();
			player[x].push(tempCard);
			playerPoints[x] = playerPoints[x] + tempCard.getValue();
		}
		
	}
	
	for(int x = 0; x < numPlayers; x++)
	{
		playerCardCounter = 2;
		anotherCard =1;
		while(anotherCard == 1 && playerCardCounter <= 6)
		{
			cout << "\nHello Player " << x+1 << " you currently have  " << playerPoints[x] << " do you want another card?  Hit 1 for yes, 2 for no: ";
			cin >> anotherCard;
			if(anotherCard == 1) 
			{
			
				playerCardCounter++;
				
				cout << "\n\n```````````````` " << playerPoints[x] << " ```````````\n";
				playerCardCounter++;
				tempCard = fullDeck.top();
    			tempCard.display();
    			fullDeck.pop();
    			player[x].push(tempCard);    		
				playerPoints[x] = playerPoints[x] + tempCard.getValue();
				if(playerPoints[x]>=21)
				{
					anotherCard = 21;
					playerCardCounter = 21;
					cout << "\n BUSTED YOU LOSE\n";
				}
			}	
		}
		cout << "\nPlayer " << x+1 << " you currently have  " << playerPoints[x] << endl;
		
	}
	cout << "\n\n\n\n~~~~~~~~~~~~~~~~~~Game Complete~~~~~~~~~~~~~~~~~~~~~~";
	for(int x = 0; x < numPlayers; x++)
	{
		cout << "\n Here is player " << x+1 << " cards:\n";
		while(!player[x].empty())
		{
			tempCard = player[x].top();
    		tempCard.display();
    		player[x].pop();
		}
		cout << "\n for a total of " << playerPoints[x] << endl;
	}	
	
	
	system("pause");
	return 0;
};











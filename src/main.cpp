#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void printOptions()
{
	cout << "KSG\nYeezus\nYe\n";
}

void printChoice( string &choice )
{
	cout << "It's " << choice << " yo!\n";
}

void increaseSum( int &a, int b )
{
	a += b;
} 

int square( int number )
{
	return number * number;
}

void printPoll( const string &question, const string *answers, int pollSize )
{
	cout << "Poll \n" << question << "?\n";

	for ( int i = 0; i < pollSize; ++i )
	{
		string placeholder = answers[i].empty() ? "<none>" : answers[i];
		cout << i + 1 << " " << placeholder << endl;
	}
}

void showPollResults( int q1, int q2, int q3 )
{
	cout << "Poll results: \n";

	cout << "1 ";
	for ( int i = 0; i < q1; ++i)
		cout << "+";

	cout << endl;

	cout << "2 ";
        for ( int i = 0; i < q2; ++i)
                cout << "+";

	cout << endl;

	cout << "3 ";
        for ( int i = 0; i < q3; ++i)
                cout << "+";
	
	cout << endl;
}

bool isDivisible( int num, int divisor )
{
        return num % divisor == 0;
}

bool isPrime( int num )
{
        for ( int i = 2; i < sqrt(num); ++i )
                if ( isDivisible( num, i ) )
                        return false;

        return true;
}

void printPrimeNumbers( const int limit )
{
	for ( int i = 0; i < limit; ++i )
		if ( isPrime( i ) )
			cout << i << endl;
}

int main()
{
/*	int bottleCount = 99;

	while( bottleCount > 1 )
	{
		cout << bottleCount << " bottles of beer on the wall, " << bottleCount << " bottles of beer.\n";
		
		--bottleCount;
		
		cout << "Take one down, pass it around, " << bottleCount << " bottles of beer on the wall...\n\n";
	}*/

/*	 while ( true )
	{
		printOptions();
		
		string choice;
		getline( cin, choice, '\n');

		if ( choice == "KSG" || choice == "Yeezus" || choice == "Ye"  )
		{
			printChoice( choice );
			break;
		}

		else if ( choice == "")
                {
                        cout << "Empty choice, try again!\n";
                        continue;
                }

		else
		{
			cout << "You got it wrong, try again\n";
			continue;
		}

		
	}*/

/*	int sum = 0;
	int input;

	while ( true )
	{
		cout << "Input: ";
		cin >> input;

		if ( input == 0 )
		{
			cout << "Input 0. Termnating...\n";
			break;
		}

		else
		{
			increaseSum( sum, input );
			cout << "Current val is " << sum << endl;
		}
	}*/

/*	int counter = 0;
	const string pass = "qwerty";

	do {
		string input;
		getline( cin, input, '\n' );

		if ( input != pass )
		{
			cout << "Wrong password, try again!\n";
			counter++ ;
		}

		else
		{
			cout << "Congrats, you're in!\n";
			return 0;
		}
	} while ( counter < 5 );

	cout << "Oh you're out of luck today\n";*/

/*	for ( int i = 0; i < 20; ++i )
	{
		cout << square( i + 1 ) << endl;

	}*/

/*	string quest;
	string answers[3];
	
	while ( true ) {
		cout << "question: ";
		getline( cin, quest, '\n' );

		if ( quest.empty() ) {
			cout << "you gotta ask smth! try again \n";
		}
		
		else break;
	}

	for( int i = 0; i < 3; ++i )
	{
		cout << "answer " << i+1 << " :";
		getline( cin, answers[i], '\n' ); 
	}

	printPoll( quest, answers, 3);

	int q1 = 0, q2 = 0, q3 = 0;

	while ( true )
	{		
		int choice;
		
		cout << "your choice: ";
		cin >> choice;

		if ( choice == 0 ) break;

		if ( choice < 0 || choice > 3 )
		{
			cout << "sorry...you gotta pick what's on the menu, try one more time \n";
		}

		else if ( choice == 1 ) q1++;
		else if ( choice == 2 ) q2++;
		else if ( choice == 3 ) q3++;		
	}

	showPollResults( q1, q2, q3 );*/

	printPrimeNumbers( 100 );
}


/*int main ()
{
	int num;
	cin >> num;
	if ( num < 0 )
	{
		cout << "negative\n";
	}

	else if ( num == 0 )
	{
		cout << "zero\n";
	}

	else
	{
		cout << "positive \n";
	}
}*/

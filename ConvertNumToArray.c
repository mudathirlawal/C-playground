#include <stdio.h>
#include <stdlib.h>

void conversionOps ( int digits [], int arraySize, int number, int lastDigit, int loopVar, int result ) 
{
	lastDigit = number % 10;

	if ( lastDigit > 0 )
	{
		digits [ loopVar ] = lastDigit;
		result = number - lastDigit;
		number = result / 10;
		loopVar++;

		printf ( "\tlastDigit: %i, result: %i, number: %i\n", lastDigit, result, number );
		conversionOps ( digits, arraySize, number, lastDigit, loopVar, result );
	}
}

void convertNumberToArray ( int digits [], int number, int arraySize  )
{
	int result = 0;
	int loopVar = 0;
	int lastDigit = 0;
		
	conversionOps ( digits, arraySize, number, lastDigit, loopVar, result );
}

// Printing:
void printArray ( int array [], int length )
{
	int i = 0;
	printf ( "\n\t" );

	for ( i = 0; i < length; i++ )
	{
		printf ( "%i ", array [ i ] );
	} 
	printf ( "\n\n" );
}

// main()
int main ( void )
{
	int arrayElements = 7;
	int number = 1234567;
	int digits [ arrayElements ];
	int arraySize = sizeof ( digits ) / sizeof ( digits [ 0 ] );
	
	printf ( "\n\n" );
	convertNumberToArray ( digits, number, arrayElements );
	printArray ( digits, arrayElements );
	return EXIT_SUCCESS;
}


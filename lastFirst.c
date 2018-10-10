#include <stdio.h>
#include <stdlib.h>

 
// Converting the number variable to an array.
void conversionOps ( int numberDigits [], int arraySize, int number, int lastDigit, int loopVar, int result ) 
{
	lastDigit = number % 10;

	if ( lastDigit > 0 )
	{
		numberDigits [ loopVar ] = lastDigit;
		result = number - lastDigit;
		number = result / 10;
		loopVar++;

		printf ( "\tlastDigit: %i, result: %i, number: %i\n", lastDigit, result, number );
		conversionOps ( numberDigits, arraySize, number, lastDigit, loopVar, result );
	}
}

void convertNumberToArray ( int numberDigits [], int number, int arraySize  )
{
	int result = 0;
	int loopVar = 0;
	int lastDigit = 0;
		
	conversionOps ( numberDigits, arraySize, number, lastDigit, loopVar, result );
}

// Setting up:
void setupNumberRearranged ( int numberDigits [], int numberRearranged [], int arraySize )
{
	int digitIndex;
	int loopVar = 0;
	int decrementedArraysize = arraySize - 1;

	for ( loopVar = 0; loopVar < arraySize; loopVar++ )
	{ 
		digitIndex = decrementedArraysize - loopVar;
		numberRearranged [ loopVar ] = numberDigits [ digitIndex ];
	}
} 

// Printing:
void printArray ( int array [], int arrayLength )
{
	int i = 0;
	printf ( "\n\t" );

	for ( i = 0; i < arrayLength; i++ )
	{
		printf ( "%i ", array [ i ] );
	} 
	printf ( "\n\n" );
}

// Main Function:
int main (void)
{
	int arrayElements = 7;
	int number = 1234567;
	int numberDigits [ arrayElements ];
	int arraySize = sizeof ( numberDigits ) / sizeof ( numberDigits [ 0 ] );
	int numberRearranged [ arrayElements ]; 
	
	printf ( "\n\n" );
	convertNumberToArray ( numberDigits, number, arraySize );
	printArray ( numberDigits, arraySize );
	setupNumberRearranged ( numberDigits, numberRearranged, arraySize );
	printArray ( numberRearranged, arraySize );
	return EXIT_SUCCESS;
}




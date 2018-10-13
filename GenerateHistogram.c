#include <stdio.h>
#include <stdlib.h>


void InitializeArray ( int array [], int arraySize )
{
	const int NUM = 0;
	int loopVar;
	printf ( "\n" );

	for ( loopVar = 0; loopVar < arraySize; loopVar++ )
	{
		array [ loopVar ] = NUM;
		//printf ( "\tarray [ %i ] => %i\n", loopVar, array [ loopVar ] );
	}

	printf ( "\n" );
}


void GenerateHistogram ( int array [], int histogram [], int arraySz, int histogramSz, int MIN, int MAX )
{
	int incrementor = MIN;
	InitializeArray ( histogram, histogramSz );
	
	for ( incrementor = MIN; incrementor < MAX; incrementor++ )
	{
		int index = array [ incrementor ];
		histogram [ index ] ++;
	}
}


void RandomizeArray (int array[], int length, const int UPPER_BOUND )
{
	int i;
	//printf ( "\n" );
	for (i = 0; i < length; i++)
	{
		array[i] = rand() % UPPER_BOUND;
		//printf ( "\tarray [ %i ] => %i\n", i, array [ i ] );
	}
	//printf ( "\n" );
}


void PrintArray (int array [], int length)
{
	printf ( "\n" );	
	printf ( "\t" );
	int i;

	for (i = 0; i < length; i++)
	{
		printf ("%i ", array[i]);
	}
	printf ( "\n\n" );
}


int main ( void )
{
	const int MIN = 0;
	const int MAX = 11;
	const int MY_ARRAY_ELEMENTS = 15;
	const int RANGE = MAX - MIN; 

	int histogram [ RANGE ]; 
	int myArray [ MY_ARRAY_ELEMENTS ];
	int histogramSize = sizeof ( histogram ) / sizeof ( histogram [ MIN ] );
	int myArraySize = sizeof ( myArray ) / sizeof ( myArray [ 0 ] );

	RandomizeArray ( myArray, myArraySize, MAX );
	GenerateHistogram ( myArray, histogram, myArraySize, histogramSize, MIN, MAX );
    PrintArray ( myArray, myArraySize );
    PrintArray ( histogram, histogramSize );
	return EXIT_SUCCESS;
}


/*
 * 
 *  I actually plan to develope the code as an alternative means of generating 
 *  a random of integers from a given range.
 *
 *
int randomNumFrom ( const int MIN, const int MAX )
{
	printf ( "\n" );
	int randomNum = rand ( );  // ie., Random number from 0 - RAND_MAX.
	const int RANGE = MIN - MAX;
	const int GROUPS_OF_RANGE = RAND_MAX / RANGE; // Groups of RANGE in RAND_MAX
	int randomNumFromZeroToMax = randomNum / GROUPS_OF_RANGE; // rand() from 0 - MAX.
	printf ( "\trandomNumFromZeroToMax: %i\n", randomNumFromZeroToMax );
	return ( MIN + randomNumFromZeroToMax );
	printf ( "\n" );
}
 *
 */




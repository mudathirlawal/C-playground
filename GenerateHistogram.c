/*
 * File:        GenerateHistogram.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   13th October, 2018.   
 * Version:     1.0.0 EN
 *
 * Purpose:     To generate an array of random numbers;   
 *				and to generate a histogram of the range
 *				of values in the array of random numbers.
 */

#include <stdio.h>
#include <stdlib.h>

// My procedure to initialize all elements of array to zero.
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

// Function to generate histogram; I got this idea from "How to Think Like a Computer Scientist."
void GenerateHistogram ( int array [], int histogram [], int arraySz, int histogramSz, int MIN, int MAX )
{
	int incrementor = MIN;
	InitializeArray ( histogram, histogramSz );
	
	for ( incrementor = MIN; incrementor < arraySz; incrementor++ )
	{
		int index = array [ incrementor ];
		histogram [ index ] ++;		// OR: = histogram [ index ] + 1;
	}
}

// This generates an array of random numbers.
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

// Function to print they contents of array; for debugging
void PrintArray (int array [], int length)
{
	printf ( "\n" );	

	int i;
	const char ES = ' ';

	for (i = 0; i < length; i++)
	{
		printf ( "\t%c%c%carray [ %i ] => %i\n", ES, ES, ES, i, array [ i ] );
		//printf ("%i ", array[i]);
	}

	printf ( "\n\n" );
}

// Function to print histogram
void PrintStatistics ( int histogram [], int histogramSize )
{
	int i = 0;
	const char ES = ' ';

	printf ( "\n" );
	printf ( "\tHISTOGRAM: ARRAY OF NOS OF COUNTS\n" );
    printf ( "\t=================================\n" );
    printf ( "\n" );
	printf ( "\t%c%c%c%cRandomValue\t%c%cHistogram\n", ES, ES, ES, ES, ES, ES );

	for ( i = 0; i < histogramSize; i++ )
	{
		printf ( "\t\t%c%i\t%c%c%i\n", ES, i, ES, ES, histogram [ i ] ); 
	}

	printf ( "\n" );
}

// Below lies the Main Function of this program:
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
	printf ( "\tARRAY OF RANDOM NUMBERS\n" );
	printf ( "\t=======================\n" );
    PrintArray ( myArray, myArraySize );
    PrintStatistics ( histogram, histogramSize ); 

	return EXIT_SUCCESS;
}


/*
 * 
 *  I actually plan to develope the code as an alternative means of generating 
 *  a random series of integers from a given range.
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




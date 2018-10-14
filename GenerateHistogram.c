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
void RandomizeArray (int array[], int length, const int L_BOUND, const int U_BOUND )
{
	int i = L_BOUND;
	//printf ( "\n" );
	for ( i = L_BOUND; i < length; i++ )
	{
		array [ i ] = rand () % U_BOUND;
		//printf ( "\tarray [ %i ] => %i\n", i, array [ i ] );
	}
	//printf ( "\n" );
}

// Function to print they contents of array; for debugging
void PrintArray (int array [], int length, int MIN)
{
	printf ( "\n" );	

	int i;
	
	for (i = MIN; i < length; i++)
	{
		printf ( "\t\t  array [ %i ] => %i\n", i, array [ i ] );
		//printf ("%i ", array[i]);
	}

	printf ( "\n\n" );
}

// Function to print histogram
void PrintStatistics ( int histogram [], int histogramSize, int MIN )
{
	int i = MIN;
	const char ES = ' ';

	printf ( "\n" );
	printf ( "\tHISTOGRAM: ARRAY OF NOS OF COUNTS\n" );
    printf ( "\t=================================\n" );
    printf ( "\n" );
	printf ( "\t%c%c%c%cRandomValue\t%c%cHistogram\n", ES, ES, ES, ES, ES, ES );

	for ( i = MIN; i < histogramSize; i++ )
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
	const char ES = ' ';
	const int MY_ARRAY_ELEMENTS = 10;
	const int RANGE = MAX - MIN; 

	int histogram [ RANGE ]; 
	int myArray [ MY_ARRAY_ELEMENTS ];
	int histogramSize = sizeof ( histogram ) / sizeof ( histogram [ MIN ] );
	int myArraySize = sizeof ( myArray ) / sizeof ( myArray [ 0 ] );

	RandomizeArray ( myArray, myArraySize, MIN, MAX );
	GenerateHistogram ( myArray, histogram, myArraySize, histogramSize, MIN, MAX );
	printf ( "\t%c%c%c%c%c%cARRAY OF RANDOM NUMBERS\n", ES, ES, ES, ES, ES, ES );
	printf ( "\t%c%c%c%c%c%c=======================\n", ES, ES, ES, ES, ES, ES );
    PrintArray ( myArray, myArraySize, MIN );
    PrintStatistics ( histogram, histogramSize, MIN ); 

	return EXIT_SUCCESS;
}


/*
 * 
 *  The above RandomizeArray Method can be used only for 
 *  generating random numbers between zero and an upperbound;
 *  the following code can be used to generate a random series 
 *  of integers from any number to any other number.
 *
 *
 *
int randomNumFrom ( const int MIN, const int MAX )
{
	int i;
	const int RANGE = MAX - MIN;
	const int GROUPS_OF_RANGE = RAND_MAX / RANGE; // Groups of RANGE in RAND_MAX.h
	int randomNumFromMinToMax;
	printf ( "\n" );

	for ( i = MIN; i < MAX; i++ )
	{
		int randomNum = rand ( );  // ie., Random number from 0 - RAND_MAX.
		int randomNumFromZeroToMax = randomNum / GROUPS_OF_RANGE; // rand() from 0 - MAX.
		int randomNumFromMinToMax  = MIN + randomNumFromZeroToMax;

		printf ( "\trandomNumFromZeroToMax: %i\n", randomNumFromZeroToMax );
		printf ( "\trandomNumFromMinToMax:  %i\n", randomNumFromMinToMax );
		printf ( "\n" );
	}

	return ( randomNumFromMinToMax );
}


int main ( void )
{
	randomNumFrom ( 5, 10 );
	return EXIT_SUCCESS;
}
 *
 */




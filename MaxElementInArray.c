#include <stdio.h>
#include <stdlib.h>


// Getting the greater of two nos
int GetGreaterNum ( int num1, int num2 )
{
	if ( num1 > num2 )
	{
		return num1;
	}
	else
	{
		return num2;
	}
}

// Finding the greatest element in the range and returning its index:
// ==================================================================
int GetMaxElementInArray ( int array [], int arrayLen ) 
{
	int assumedMaxElement = array [ 0 ];
	int indexOfLastElem = arrayLen - 1;
	int i, maxElement, initialAssumedMaxElem; 

	for ( i = 0; i < arrayLen; i++ )
	{
		if ( i == indexOfLastElem )
		{
			assumedMaxElement = GetGreaterNum ( assumedMaxElement, array [ i ] );
		} 
		else if ( assumedMaxElement > array [ i ] ) 
		{
			assumedMaxElement = GetGreaterNum ( assumedMaxElement, array [ i + 1 ] );
		}
		else
		{
			assumedMaxElement = GetGreaterNum ( array [ i ], array [ i + 1 ] );
		}
	}

	maxElement = assumedMaxElement;
	
	printf ( "\n" );
	printf ( "\tMaximumElementInRange: %i\n", maxElement ); 
	printf ( "\n" );
	
	return maxElement;
}

// MAIN FUNCTION:
int  main ( void )
{
	//int intArray [ 7 ] = { 20, 0, 5, 3, -72, 1, 10 };
	int intArray [ 11 ] = { -3, -13, -20, -3, -4, -6, -7, -8, -9, -5, -11 };
	int length = sizeof ( intArray ) / sizeof ( intArray [ 0 ] );

	GetMaxElementInArray ( intArray, length );
	return EXIT_SUCCESS;
}


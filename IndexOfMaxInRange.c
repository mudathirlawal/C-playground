/*
 * File:        IndexOfMaxInRange.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   21th October, 2018.   
 * Version:     1.1 EN
 *
 * Purpose:     To return the index of largest 
 *				number in an array of numbers.
 */

#include <stdio.h>
#include <stdlib.h>


int GetIndexForCaseThree ( int evaluatedElem, int assumedMaxElement, int indexOfAssumedMaxElem, int controlVar )
{
	if ( evaluatedElem > assumedMaxElement )
	{
		return controlVar;
	}
	else 
	{
		return indexOfAssumedMaxElem;
	}
}


int GetIndexForCasetTwo ( int nextElem, int assumedMaxElem, int index, int loopVar )
{
	if ( nextElem > assumedMaxElem )
	{
		return loopVar + 1;
	}
	else
	{
		return index;
	}
}


int GetIndexForCaseOne ( int element1, int element2, int loopVar )
{
	if ( element1 > element2 )
	{
		return loopVar;
	}
	else
	{
		return loopVar + 1;
	}
}


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


int IndexOfMaxInRange ( int array [], int arrayLen ) 
{
	int i, maxElement, indexOfMaxElement, indexOfAssumedMaxElem; 
	int indexOfLastElem = arrayLen - 1;
	int assumedMaxElement = 0;

	for ( i = 0; i < arrayLen; i++ )
	{
		if ( i == indexOfLastElem )
		{
			assumedMaxElement = GetGreaterNum ( assumedMaxElement, array [ i ] );
			indexOfAssumedMaxElem = GetIndexForCaseThree ( array [ i ], assumedMaxElement, indexOfAssumedMaxElem, i );
		} 
		else if ( assumedMaxElement > array [ i ] )
		{
			assumedMaxElement = GetGreaterNum ( assumedMaxElement, array [ i + 1 ] );
			indexOfAssumedMaxElem = GetIndexForCasetTwo ( array [ i + 1 ], assumedMaxElement, indexOfAssumedMaxElem, i );
		}
		else
		{
			assumedMaxElement = GetGreaterNum ( array [ i ], array [ i + 1 ] );
			indexOfAssumedMaxElem = GetIndexForCaseOne ( array [ i ], array [ i + 1 ], i );
		}
	}

	indexOfMaxElement = indexOfAssumedMaxElem;
	maxElement = array [ indexOfMaxElement ];

	printf ( "\n" );
	printf ( "\tIndexOfMaxElement: %i; MaximumElementInRange: %i.\n\n", indexOfMaxElement, maxElement ); 
	
	return indexOfMaxElement;
}


// Main Function begins Here:
int main ( void )
{
	int arrayOfNum [ 7 ] = { 1, 9, 7, 4, -69, 3, 0 };
	int sizeOfArray = sizeof ( arrayOfNum ) / sizeof ( arrayOfNum [ 0 ] );

	IndexOfMaxInRange ( arrayOfNum, sizeOfArray );
	return EXIT_SUCCESS;
}


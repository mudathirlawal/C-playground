/*
 * File:        SortArray.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   25th October, 2018.   
 * Version:     1.1 EN
 *
 * Purpose:     To sort an array from largest to smallest; albeit
 *				this is not an efficient way to sort an array, I
 *				have only used it for practice purposes .
 */

#include <stdio.h>
#include <stdlib.h>

// This Prints the Array:
// =====================
void PrintArray ( int arrayOfInts  [], int arraySize )
{ 
	int loopVariable = 0;
	int indexOfLastElem = arraySize - 1;
	
	printf ( "{ " );

	while ( loopVariable < arraySize )
	{
		if ( loopVariable == indexOfLastElem )
		{
			printf ( "%i ", arrayOfInts [ loopVariable ] );
		}
		else
		{
			printf ( "%i, ", arrayOfInts [ loopVariable ] );
		}
		loopVariable++;
	}

	printf ( "}\n\n" );
}

//Function Definition for GetIndexOfTarget():
int GetIndexOfMaxElem ( int array [], int arraySize, const int TARGET )
{
	int i;

	for ( i = 0; i < arraySize; i++ )
	{
		if ( TARGET == array [ i ] )
		{
			return i;
		}
	}
				
	printf ( "\n" );
	printf ( "\tSorry, compiler did not find the\n" );
	printf ( "\tsupplied value in the array. <<<\n\n" );
				
	return EXIT_FAILURE;
}

// Simple Auxiliary Functions:
// ==========================
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

// Finding the greatest element in the range
// =========================================
int GetMaxElementInRange ( int array [], int arrayLen, int index ) 
{
	int assumedMaxElement = array [ index ];
	int indexOfLastElem = arrayLen - 1;
	int i, maxElement, initialAssumedMaxElem; 

	for ( i = index; i < arrayLen; i++ )
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
		
	return maxElement;
}

// The Swapping Processes:
// ========================
void SwapElement ( int array [], int indexOfMaxElem, int targetIndex )
{
	int tempStorage = array [ targetIndex ];
	array [ targetIndex ] = array [ indexOfMaxElem ];
	array [ indexOfMaxElem ] = tempStorage;
}

// The Sorting Processes:
// ======================
void SortArray ( int arrayOfInts [], int arraySize )
{ 
	int targetIndex, maxElem, indexOfMaxElem;

	for ( targetIndex = 0; targetIndex < arraySize; targetIndex++ )
	{
		maxElem = GetMaxElementInRange ( arrayOfInts, arraySize, targetIndex );
		indexOfMaxElem = GetIndexOfMaxElem ( arrayOfInts, arraySize, maxElem );
		SwapElement ( arrayOfInts, indexOfMaxElem, targetIndex );
	    printf ( "\tIndexOfMaxElement: %i; MaximumElementInRange: %i\n", indexOfMaxElem, maxElem );
	    printf ( "\t" );
	    printf ( "arrayAfterItrtn %i:    ", targetIndex );
	    PrintArray ( arrayOfInts, arraySize );
	}	
}

// Main Function:
// =============
int main ( void )
{
	int arrayOfInts [ 7 ] = { 2, 0, 5, 3, 7, 1, 10 }; 
	int arraySize = sizeof ( arrayOfInts ) / sizeof ( arrayOfInts [ 0 ] );

	printf ( "\n" );
	printf ( "\tARRAY BEFORE SORTING: " );
	PrintArray ( arrayOfInts, arraySize );
	SortArray ( arrayOfInts, arraySize );
	printf ( "\tARRAY AFTER SORTING: " );
	PrintArray ( arrayOfInts, arraySize );
	return EXIT_SUCCESS; 
}







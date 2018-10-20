/*
 * File:        ReturnIndex.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   20th October, 2018.   
 * Version:     1.1 EN
 *
 * Purpose:     To return the index of an input number if it exixts in an 
 *				array or return an invalid index value if it does not exist.
 */

#include <stdio.h>
//#include <stdlib.h>
#define EXIT_SUCCESS 0
#define EXIT_FAILURE -1

//Function Definition for GetIndexOfTarget():
int GetIndexOfTarget ( int array [], int arraySize, const int TARGET )
{
	int i;

	for ( i = 0; i < arraySize; i++ )
	{
		if ( TARGET == array [ i ] )
		{
			printf ( "\n" );
			printf ( "\tIndex of Target = %i\n\n", i );
			return i;
		}
	}

	printf ( "\n" );
	printf ( "\tSorry, compiler did not find the\n" );
	printf ( "\tsupplied value in the array. <<<\n\n" );
				
	return EXIT_FAILURE;
}

// Here is the Main Function:
int  main ( void )
{
	int intArray [ 11 ] = { 0, 1, 2, 3, 4, 6, 7, 8, 9, 5, 11 };
	int intArrayLength = sizeof ( intArray ) / sizeof ( intArray [ 0 ] );
	const int TARGET_ELEMENT = 5;

	GetIndexOfTarget ( intArray, intArrayLength, TARGET_ELEMENT );
    return EXIT_SUCCESS;
}


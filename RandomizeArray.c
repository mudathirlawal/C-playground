/*
 * File:        RandomizeArray.c
 *
 * Author:      Thomas Scheffler; the author of     
 *				"How to Think Like a Computer Scientist,"
 *				C-Version. But, I am keeping it for the  
 *				purpose of teaching my future students.	
 *
 * Purpose:     Learning the implementation of Randomeness.
 *              
 */

#include <stdio.h>
#include <stdlib.h>


void RandomizeArray (int array[], int length, int upperBound)
{
int i;
for (i = 0; i < length; i++)
{
array[i] = rand() % upperBound;
}
}

void PrintArray (int array[], int length)
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

int HowMany (int array[], int length, int value)
{
int i;
int count = 0;
for (i=0; i < length; i++) // Traversing the entire array
{ 
if (array[i] == value)    
	{
		count++;
	}
}
return count;
}

int main ( void )
{
	int i;
	int r_array[100000];
	int upperBound = 10;
	int length = sizeof(r_array) / sizeof(r_array[0]);
	RandomizeArray (r_array, length, upperBound);
	//PrintArray (r_array, length);
	//int count = HowMany ( r_array, length, 6 );
	printf ( "\n" );
	printf ( "\tValue\tHowMany\n" );
	for ( i = 0; i < upperBound; i++ )
	{
		printf ( "\t%i\t%i\n", i, HowMany ( r_array, length, i ) );
	}	
	printf ( "\n" );
}



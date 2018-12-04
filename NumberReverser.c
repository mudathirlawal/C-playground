#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

 
// PRINTING MY ARRAY:
void PrintArray ( int array [], int len )
{
	printf ( "\n" );
	printf ( "\tYOUR NUM IN REVERSED FORM: " );

	for ( int i = 0; i < len; i++ )
	{
		printf ( "%i", array [ i ] );
	}
	printf ( "\n\n" );
}


// FILLING UP MY TWO DIGIT ARRAY:
void FillUpArray ( int array [], int digit1, int digit2 )
{
	array [ 0 ] = digit2;
	array [ 1 ] = digit1;
}


// Main function:
int main ( void )
{
	printf ( "\n" );
	printf ( "\tENTER A TWO DIGIT INTIGER: " );
	int num = get_int ();

	int lastNum = num % 10;
	int firstNum = ( num - lastNum ) / 10;
	int reverseArray [ 2 ];
	int len = sizeof ( reverseArray ) / sizeof ( reverseArray [ 1 ] );

	FillUpArray ( reverseArray, firstNum, lastNum );
	PrintArray ( reverseArray, len );

	return EXIT_SUCCESS;
}


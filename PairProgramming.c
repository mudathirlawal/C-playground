#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>


int GetIndexOfLargest ( int array [], int length )
{
	int largestElem = array [ 0 ];
	int loopVar = 0;
	int index = 0;

    do
    {
    	if ( largestElem < array [ loopVar ] )
    	{
	        largestElem = array [ loopVar ];
	        index 		= loopVar;
		}
		loopVar++;
    }
    while ( loopVar < length );
    
    printf ( "\n" );
    printf ( "\tMaxElement: %i; Index: %i\n\n", largestElem, index );
	return index;
}


// My Main func
int main ( void )
{
	int array [ 8 ] = { 99, 23, 16, 12, 14, 55, 22, 77 };
	int length = sizeof ( array ) / sizeof ( array [ 6 ] );

	GetIndexOfLargest ( array, length );
	return EXIT_SUCCESS;
}	


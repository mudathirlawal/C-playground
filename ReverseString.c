#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void ReverseString ( char myString [], int stringSize )
{
	int i = stringSize - 1;
	printf ( "\n" );
	printf ( "\tStrReversed:\t" ); 
 
	while ( i >= 0 )
	{
		char container = myString [ i ];
		printf ( "%c", container );
		i--;
	}
	printf ( "\n\n" );
}

// Main Function:
int main ( void )
{
	char myString [ 6 ] = { 'H', 'E', 'L', 'L', 'O', '\0' }; // OR: "HELLO";
	int stringLength = strlen ( myString );

	printf ( "\n" );
	printf ( "\tString:" );
	printf ( "\t\t%s\n", myString );
	ReverseString ( myString, stringLength );
	return EXIT_SUCCESS;
}
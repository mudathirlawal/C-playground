#include <stdio.h>
#include <stdlib.h>


int main ( void )
{
	int number = 71;
	int lastDigit = number % 10;
	int nearestTens = number - lastDigit;
	int firstDigit = nearestTens / 10;

	printf ( "\n" );
	printf ( "\tNumber: %i\n", number );
	printf ( "\tNumber Reversed: %i%i\n\n", lastDigit, firstDigit );
	return EXIT_SUCCESS;
}


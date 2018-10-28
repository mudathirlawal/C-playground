#include <stdio.h>
#include <stdlib.h>


double randomNumFrom ( const double MIN, const double MAX )
{
	int i;
	const double RANGE = MAX - MIN;
	const double GROUPS_OF_RANGE = RAND_MAX / RANGE; 
	printf ( "\n" );
	printf ( "\tMIN: %f;  MAX: %f\n", MIN, MAX );
	printf ( "\t==================================\n\n" );

	for ( i = 0; i < 6; i++ )
	{
		double randomNumBtwZeroAndRange = rand () / GROUPS_OF_RANGE; // Random no btw 0 & RANGE.
		double randomNumBtwMinAndMax = MIN + randomNumBtwZeroAndRange;

		printf ( "\trandomNumBtwMinAndMax:  %f\n", randomNumBtwMinAndMax );
		printf ( "\n" );
	}

	return  0.0;
}

int main ( void )
{
	randomNumFrom ( 900.0, 1000.0 );
	return EXIT_SUCCESS;
}

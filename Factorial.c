#include <stdio.h>

// getFactorial ()
int getFactorial ( int number )
{
	int countStart = 1;
	int countEnd   = number - 1;
	double deFactorial = number;
	printf ( "\n" );

	while ( countStart <= countEnd )
	{
		number = number - 1;
		deFactorial = deFactorial * ( number );
		countStart = countStart + 1;
		printf ( "\tFactorial = %.0f\n", deFactorial );
	}
	printf ( "\n\tFactorial = %.0f\n\n", deFactorial );
	return deFactorial;
}


int main ( void )
{
	getFactorial ( 33 );
	return 0;
}


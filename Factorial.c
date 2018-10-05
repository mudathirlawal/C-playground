/*
 * File:        Factorial.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   5th October, 2018.   
 * Version:     1.1.0 EN
 *
 * Purpose:     To check if character input by 
 *              user is a digit between 0 - 9.
 *              
 */

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


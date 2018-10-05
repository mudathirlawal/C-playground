/*
 * File:        SquareRoot.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   2nd October, 2018.   
 * Version:     1.1.0 EN
 *
 * Purpose:     To return the the square root of a number. 
 */

#include <stdio.h>
#include <math.h>
#define EXIT_SUCCESS 0
#define EXIT_FAILURE -1

double SquareRoot ( int, double );
double SquareRoot ( int squareNumber, double initialGuess )
{ 
	const double MAX_DIFF =	0.0001; 
	int sufficientClosenessFlag = 1;
	double newGuess; 
	double guessDiff;
	
	while ( sufficientClosenessFlag )
	{
		newGuess = ( initialGuess + ( squareNumber / initialGuess ) ) / 2;	
		guessDiff = initialGuess - newGuess;
		sufficientClosenessFlag = MAX_DIFF < fabs ( guessDiff );
		initialGuess = newGuess;
		printf ( "\n\tnewGuess: %f;\tguessDiff: %f;\tsufficientClosenessFlag: %i\n", newGuess, guessDiff, sufficientClosenessFlag ); // A USEFULL SCAFFOLDING.
	}
	printf ( "\n\t%f\n\n", newGuess );
	return newGuess;
}

int main ( void )
{
	SquareRoot ( 9, 4.5 );
	return EXIT_SUCCESS;
}


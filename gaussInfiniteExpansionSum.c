/*
 * File:        gaussInfiniteExpansionSum.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   3rd October, 2018.   
 * Version:     1.1 EN
 *
 * Purpose:     To output the sum of the first n terms
 *				of an infinite series expansion.
 *				The question named gaussQuestion.png is attached herewith.
 */		

#include <stdio.h>
#include <math.h>
#define EXIT_SUCCESS 0
#define EXIT_FAILURE -1

int getFactorial ( int number );
int getPower ( double fbaseNum, int iexponent );
double Gauss ( int CONSTANT, int noOfTerms );

// main()
int main ( void )
{
	Gauss ( 2, 32 );
	return EXIT_SUCCESS;
}

// Gauss()
double Gauss ( const int CONSTANT, int noOfTerms )
{ 
	double a, b, c, d;
	int nthTerm = 0;
	double expansionSum;
	printf ( "\n" );

	while ( nthTerm <= ( noOfTerms - 1 ) )
	{
		a = getPower ( -1, nthTerm );
		b = ( nthTerm + 1 );
		c = getPower ( CONSTANT, nthTerm );
		d = getFactorial ( nthTerm );
		expansionSum = (  ( a * b * c ) / d );
		printf ( "\t( %.0fx ^ %i ) / %i! ", ( a * b ), nthTerm, nthTerm );
		nthTerm = nthTerm + 1;
		printf ( "\tnthTerm: %i; expansionSum: %f\n", nthTerm, expansionSum );
	}
	printf ( "\n\texpansionSum: %f\n\n", expansionSum );
	return expansionSum;
}

// getPower()
int getPower ( double fbaseNum, int iexponent )
{
	int loopVariable = 0;
	int ibaseNum = ( int ) fbaseNum;
	int product = ibaseNum;
	short loopEntryFlag = ( loopVariable <= ( iexponent - 2 ) );
	
	while ( loopEntryFlag )
	{
		loopVariable = loopVariable + 1;
		loopEntryFlag = ( loopVariable <= ( iexponent - 2 ) );
		product = product * ibaseNum; 
	}
	//printf ( "\n\t%i ^ %i = %i\n\n", ibaseNum, iexponent, product ); //A USEFUL SCAFFOLDING
	return product;
}

// getFactorial ()
int getFactorial ( int number )
{
	int countStart = 1;
	int countEnd   = number - 1;
	double deFactorial = number;
	//printf ( "\n" );

	while ( countStart <= countEnd )
	{
		number = number - 1;
		deFactorial = deFactorial * ( number );
		countStart = countStart + 1;
		//printf ( "\tFactorial = %.0f\n", deFactorial );
	}
	//printf ( "\n\tFactorial = %.0f\n\n", deFactorial );
	return deFactorial;
}


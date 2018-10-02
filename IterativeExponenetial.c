/*
 * File:        IterativePower.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   1st October, 2018.   
 * Version:     1.1 EN
 *
 * Purpose:     To return the whole form of a number 
 *				when the index form is known.
 */

#include <stdio.h>
#define EXIT_SUCCESS 0
#define EXIT_FAILURE -1 
#define TRUE 1
#define FALSE 0

int getPower ( double fbaseNum, int iexponent );
int getPower ( double fbaseNum, int iexponent )
{
	//const char ES = ' ';	//A USEFUL SCAFFOLDING
	//const char EQ = '=';	//A USEFUL SCAFFOLDING
	int loopVariable = 0;
	int ibaseNum = ( int ) fbaseNum;
	int product = ibaseNum;
	short loopEntryFlag = ( loopVariable <= ( iexponent - 2 ) );
	
	while ( loopEntryFlag == TRUE )
	{
		loopVariable = loopVariable + 1;
		loopEntryFlag = ( loopVariable <= ( iexponent - 2 ) );
		product = product * ibaseNum; 
		//printf ( "\n\t\t\t%c%c%i", ES, ES, product );   //A USEFUL SCAFFOLDING
	}
	//printf ( "\n\t\t\t%c%c%c%c%c%c%c", ES, ES, EQ, EQ, EQ, EQ, EQ ); //A USEFUL SCAFFOLDING
	return product;
}

// MAIN FUNCTION:
int main ( void )
{
	const char ES = ' ';
	const char EQ = '=';
	const char CR = '^';

	int iexponent = 16;
	double fbaseNum =  2.0;
	int product = getPower ( fbaseNum, iexponent );

	printf ( "\n\t\t%.0f%c%c%c%i%c%c%c%c%i\n\n", fbaseNum, ES, CR, ES, iexponent, ES, EQ, ES, ES, product );
	return EXIT_SUCCESS;
}

		
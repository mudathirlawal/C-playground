
/*
 * File:        PowersOfTwo.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   30th September, 2018.   
 * Version:     1.1.0 EN
 *
 * Purpose:     To output the powers of two 
 *              up to 65536 (ie., 2 ^ 16),
 *              for memorization purposes.
 */


#include <stdio.h>
#define EXIT_SUCCESS 0
#define EXIT_FAILURE -1


void PrintPowersOfTwo ( void );
void PrintPowersOfTwo ( void )
{ 
	const char ES = ' ';
	const char EQ = '=';
	const char CR = '^';
	const double FIRST_POWER_OF_TWO = 1.00000;
	const double TWO = 2.00000;
	const double MAX_POWER_OF_TWO = 65536.00000;
	double powerOfTwo = FIRST_POWER_OF_TWO;
	double fpower = 0.00000;
	int ipower = ( int ) fpower;
	
	printf ( "\n\t\tPOWERS OF TWO: 1 - 65536" );
	printf ( "\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ, EQ );

	while ( powerOfTwo < MAX_POWER_OF_TWO )
	{
		printf ( "\n\t\t%.0f%c%c%c%.0f\t%c%c%c\t%.0f\n", TWO, ES, CR, ES, fpower, EQ, ES, ES, powerOfTwo );
		powerOfTwo = powerOfTwo * 2.0;
		fpower = fpower + 1.0;
	}	

	printf ( "\n" );
}


int main ( void )
{
	PrintPowersOfTwo();
	return EXIT_SUCCESS;	
}


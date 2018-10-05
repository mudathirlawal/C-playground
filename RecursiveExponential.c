/*
 * File:        RecursivePower.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   20th September, 2018.   
 * Version:     1.1.0 EN
 *
 * Purpose:     To return the whole form of a number 
 *				when the index form is known.       
 */

#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define EXIT_SUCCESS 0
#define EXIT_FAILURE -1


int Power ( double, int );

int Power ( double fbaseNum, int iexponent )
{
	int ibaseNum = ( int ) fbaseNum;
	short zeroethPowerFlag = ( iexponent == 0 );

	if ( zeroethPowerFlag )
	{ 
		int iresult = ( ibaseNum * 1 );
		printf ( "\n\t(%i^%i) => %i * (%i^%i) =  %i\n", ibaseNum, iexponent, ibaseNum, ibaseNum, iexponent, iresult );	
		return iresult;
	}
	else
	{
		int idecrementedIexponent = ( iexponent - 1 );
		int iresult = ibaseNum * Power ( fbaseNum, idecrementedIexponent );
		printf ( "\n\t(%i^%i) => %i * (%i^%i) =  %i\n", ibaseNum, iexponent, ibaseNum, ibaseNum, iexponent, iresult );
		return  iresult;
	}
}


int main ( void )
{
	Power ( 5, 3 );
	return EXIT_SUCCESS;
}



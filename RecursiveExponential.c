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
		int idecrementedIExponent = ( iexponent - 1 );
		printf ( "\n\t(%i^%i) => %i * (%i^%i) =  %i\n", ibaseNum, iexponent, ibaseNum, ibaseNum, idecrementedIExponent, iresult );	
		return iresult;
	}
	else
	{
		int idecrementedIExponent = ( iexponent - 1 );
		int iresult = ibaseNum * Power ( fbaseNum, idecrementedIExponent );
		printf ( "\n\t(%i^%i) => %i * (%i^%i) =  %i\n", ibaseNum, iexponent, ibaseNum, ibaseNum, idecrementedIExponent, iresult );
		return  iresult;
	}
}


int main ( void )
{
	Power ( 5, 3 );
	return EXIT_SUCCESS;
}

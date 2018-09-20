#include <stdio.h>
#include <math.h>
//#include <conio.h>


double Power ( double, int );

double Power ( double fbaseNum, int iexponent )
{
	double fexponent = ( double ) iexponent;
	double fresult = pow ( fbaseNum, fexponent );

	int ibaseNum = ( int ) fbaseNum;
	int iresult = ( int ) fresult;

	printf ( "\n\t%i ** %i = %i\n\n", ibaseNum, iexponent, iresult );
}


int main ( void )
{
	Power ( 5, 20 );
}



#include <stdio.h>
//#define TRUE 1
//#define FALSE 0
//#define EXIT_SUCCESS 0
//#define EXIT_FAILURE -1


int gcd ( int, int );

int gcd ( int argA, int argB )
{
	if ( argB == 0 )
		{
			int a = 36;
			int b = 16;
			printf ( "\n\tGCD ( %i, %i ) = %i\n\n", a, b, argA );
			return argA;
		} 
		else
		{
			int remainder = argA % argB;
			return gcd ( argB, remainder );
		}
}


int main ( void )
{
	int argA = 36;
	int argB = 16;
	return gcd ( argA, argB );
}


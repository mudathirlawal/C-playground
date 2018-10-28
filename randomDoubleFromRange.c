#include <stdio.h>
#include <stdlib.h>

/* 
 *	
 * This is a program to generate 
 * a random floating point number
 * between MIN and MAX. 
 *
 */

double randomNumFrom ( const double MIN, const double MAX )
{
	int iRandomNum = rand ( );
	const double RANGE = MAX - MIN;
	double GROUPS_OF_RANGE = RAND_MAX / RANGE;
	double fRandomNum = ( double ) iRandomNum; 
	return ( MIN + ( fRandomNum / GROUPS_OF_RANGE ) );
}

// main function:
int main ( void )
{
	printf ( "\n" );
	double storeRand = randomNumFrom ( 200.0, 250.0 );
	printf ( "\tstoreRand: %f\n\n", storeRand );
	return 0;

}

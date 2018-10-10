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
	int randomNum = rand ( );
	double range = MIN - MAX;
	double groupsOfRange = RAND_MAX / range;
	double fRandomNum = ( double ) randomNum; 
	return ( MIN + ( fRandomNum / groupsOfRange ) );
}

// main function:
int main ( void )
{
	printf ( "\n" );
	double storeRand = randomNumFrom ( 200, 250 );
	printf ( "\tstoreRand: %f\n\n", storeRand );
	return 0;

}

/*
 * File:        RandomIntFromMinToMax.c
 * Author:      Mudathir Lawal; but The underlying algorithm 
 *              of this code does not belong to me. I learnt
 *		        it somewhere on the internet.
 * Last Edit:   13th October, 2018.   
 * Version:     1.0.0 EN
 *
 * Purpose:     To generate a random series of integers  
 *              from a given range.
 */


#include <stdio.h>
#include <stdlib.h>


int randomNumFrom ( const int MIN, const int MAX )
{
	int i;
	const int RANGE = MAX - MIN;
	const int GROUPS_OF_RANGE = RAND_MAX / RANGE; // Groups of RANGE in RAND_MAX.
	int randomNumFromMinToMax;
	printf ( "\n" );

	for ( i = MIN; i < MAX; i++ ) // LOOPING JUST FOR DEBUGGING
	{
		int randomNum = rand ( );  // ie., Random number from 0 - RAND_MAX.
		int randomNumFromZeroToRange = randomNum / GROUPS_OF_RANGE; // rand() from 0 - RANGE.
		int randomNumFromMinToMax  = MIN + randomNumFromZeroToMax;

		printf ( "\trandomNumFromZeroToRange: %i\n", randomNumFromZeroToRange ); // JUST FOR DEBUGGING
		printf ( "\trandomNumFromMinToMax:  %i\n", randomNumFromMinToMax );  // JUST FOR DEBUGGING
		printf ( "\n" );
	}

	return ( randomNumFromMinToMax );
}


int main ( void )
{
	randomNumFrom ( 5, 10 );
	return EXIT_SUCCESS;
}


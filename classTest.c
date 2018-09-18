/*
 * File:        classTest.c
 *
 * Author:      Thomas Scheffler; the author of     
 *				"How to Think Like a Computer Scientist,"
 *				C-Version. Althogh, I added some scaffoldings.		
 *
 * Purpose:     Just to practice recursion and working  
 *              with functions that return values.
 *              
 */

#include <stdio.h>


int FunctionOne (int m, int n)
{
	if (m == n)
	{
		printf ( "\n\t%i\n", n );
		return n;
	}
	else
	{
		const char PL = '|';
		int exposeFunc = FunctionOne ( m+1, n );
		int exposeArg1PlusFunc  = m + FunctionOne ( m+1, n );

		printf ( "\n\texposeFunc: %i %c  M: %i  %c exposeArg1PlusFunc: %i\n", exposeFunc, PL, m+1, PL, exposeArg1PlusFunc ); 
		//printf ( "\n\t%i, %i\n", m, n );
		return m + FunctionOne (m+1, n);
	}
}


//f2
int FunctionTwo (int m, int n)
{
	if (m == n)
	{
		printf ( "\n\t%i\n", n );
		return n;
	}
	else
	{
		//const char PL = '|';
		//int exposeFunct = FunctionTwo ( m, n-1 );
		//int exposeArg2TimesFunct  = n * FunctionTwo ( m, n-1 );
       
		//printf ( "\n\texposeFunct: %i  %c  N: %i  %c  exposeArg2TimesFunct: %i\n", exposeFunct, PL, n-1, PL, exposeArg2TimesFunct ); 
		printf ( "\n\t%i, %i\n", m, n );
		return n * FunctionTwo (m, n-1);
	}
}

int main ( void )
{
	const char LN = '=';

	FunctionOne ( 1, 5 ); 
	printf ( "\n\t%c%c%c%c%c%c%c%c%c%c%c\n", LN, LN, LN, LN, LN, LN, LN, LN, LN, LN, LN );
	//FunctionTwo ( 1, 5 );
}




 








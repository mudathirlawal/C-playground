/*
 * File:        fermatsLawChecker.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   9th September, 2018.   
 * Version:     1.0.0 EN
 *
 * Purpose:     To verify the validity of Fermat's Last Theorem; i.e.-
 * 				There are no positive integers A, B, C, & N, such that: 
 * 				A ^ N + B ^ N = C ^ N, except for N = 2 & N = 1.
 * 				This theorem was succussfully proven to be correct in 1995 
 * 				by a British mathematician called, Sir Andrew John Wiles.
 */

#include <stdio.h>
#include <math.h>
#include <ctype.h>

void checkFermat ( int, int, int, int );
void checkFermat ( int a, int b, int c, int n )
{ 
	const char EC = ' ';
	const int FERMATS_CONSTANT = 2;
	if ( n >= 0 && n <= FERMATS_CONSTANT )
	{
		printf( "\n\tWell, Fermat's Law has been proven to hold for numbers between 0 - 2; kindly" );
		printf ( "\n\t%c%c%c%c%c%center a positive integer greater than 2, and try again.\n\n", EC, EC, EC, EC, EC, EC );
		printf ( "\n\t( a ^ n ) + ( b ^ n )\t ( c ^ n )\n" );
		printf ( "\n\t\t%c%c%i\t\t%c%c%c%c%i\n\n", EC, EC, ( ( a ^ n ) + ( b ^ n ) ), EC, EC, EC, EC, ( c ^ n ) );
		return;
	}
	else
	{
		if ( n < 0 )
		{
			printf( "\n\tYou have entered a NEGATIVE number; kindly" );
			printf ( "\n\t%c%c%c%c%c%center a positive integer greater than 2, and try again.\n\n", EC, EC, EC, EC, EC, EC );
			return;
		}
		else
		{
			double x = ( double ) a;
			double y = ( double ) b;
			double z = ( double ) c;
			double m = ( double ) n;

			if ( pow ( x, m ) + pow ( y, m ) == pow ( z, m ) ) //OR: if ( ( a ^ n ) + ( b ^ n ) == ( c ^ n ) );
			{
				printf ( "\n\tHolly smokes, Fermat was wrong!\n\n" );
			}
			else
			{
				printf ( "\n\tNo, that doesn’t work.\n\n" );
			}
		}
	}
}

int main ( void )
{
	int a, b, c, n;
	printf ("\n\tEnter a value for the first base number, A: " );
	scanf ( "%i", &a );	
/* isInteger ( a ); // I was surposed to validate the input, but I could not after lots of efforts.*/ 
	printf ("\n\tEnter a value for the second base number, B: " );
	scanf ( "%i", &b );
	printf ("\n\tEnter a value for the third base number, C: " );
	scanf ( "%i", &c );
	printf ("\n\tEnter a value for the common exponent, N: " );
	scanf ( "%i", &n );
	printf ( "\n" );
	printf ("\n\t A = > %i, B => %i, C => %i, N => %i \n", a, b, c, n );
	checkFermat ( a, b, c, n );

} 




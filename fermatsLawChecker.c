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
 * 				This theorem was successfully proven to be correct in 1995 
 * 				by a British mathematician called, Sir Andrew John Wiles.
 */

#include <stdio.h>
#include <math.h>
#include <cs50.h>

void checkFermat ( char, char, char, char );
void checkFermat ( char a, char b, char c, char n )
{ 
	const char EC = ' ';
	const int FERMATS_CONSTANT = 2;

	// CONVERT ARGUMENTS PASSED IN TO INTEGERS
	int e = ( int ) a;
	int f = ( int ) b;
	int g = ( int ) c;
	int h = ( int ) n;

	if ( n >= 0 && n <= FERMATS_CONSTANT ) 
	{
		printf( "\n\tWell, Fermat's Law has been proven to hold for" );
		printf ( "\n\twhen N is between 0 - 2; For N, kindly enter a" );
		printf ( "\n\tpositive integer greater than 2, and try again.\n" );
		printf ( "\n\t( a ^ n ) + ( b ^ n )\t ( c ^ n )\n" );
		printf ( "\n\t%f\t!== \t%f\n", ( pow ( a, n ) + pow ( b, n ) ),  ( pow ( c, n ) ) );
		printf ( "\n\t\t%c%c%i\t\t%c%c%c%c%i\n\n", EC, EC, ( ( a ^ n ) + ( b ^ n ) ), EC, EC, EC, EC, ( c ^ n ) );		
		return;
	}
	else
	{
		if ( n < 0 )
		{
			printf( "\n\tYou have entered a NEGATIVE number; kindly enter" );
			printf ( "\n\ta positive integer greater than 2, and try again.\n\n" );
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

void isInteger ( char, char, char, char );
void isInteger ( char a, char b, char c, char n )
{
	int testA = ( a >= 0 && a <= 47 ) || ( a >= 58 && a <= 127 );
	int testB = ( b >= 0 && b <= 47 ) || ( b >= 58 && b <= 127 );
	int testC = ( c >= 0 && c <= 47 ) || ( c >= 58 && c <= 127 );
	int testN = ( n >= 0 && n <= 47 ) || ( n >= 58 && n <= 127 );

	if ( testA && testB && testC && testN )
	{
		printf ( "\n\tWrong input! Please, enter a number.\n\n" );
		return;
	}
	else
	{
		checkFermat ( a, b, c, n );
	}	
}

int main ( void )
{
	char a, b, c, n;
	printf ("\n\tEnter the values in this EXACT order: " );
	printf ("\n\t\t\t A, B, C, N \n\n" );
	scanf ( "%c, %c, %c, %c", &a, &b, &c, &n ); 
	printf ("\n\t A = > %c, B => %c, C => %c, N => %c \n", a, b, c, n );
	isInteger ( a, b, c, n );
}


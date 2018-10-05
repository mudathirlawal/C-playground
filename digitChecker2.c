/*
 * File:        digitChecker2.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   9th September, 2018.   
 * Version:     1.1.0 EN
 *
 * Purpose:     To check if character input by 
 *              user is a digit between 0 - 9.
 */

#include <stdio.h>
#include <ctype.h>

void checkChar( int );

void checkChar( int characterInput )
{
	const char EC = ' ';
	int digitCondition = isdigit( characterInput );

	if ( !digitCondition )
	{
		printf( "\n\tThe character you entered, %c, is NOT a digit; kindly", characterInput );
		printf ( "\n\t%c%c%c%c%c%center a digit between 0 - 9, and try again.\n\n", EC, EC, EC, EC, EC, EC );
		return;
	}
	else
	{
		printf ( "\n\tThe character you entered, %c, is indeed a digit.\n\n", characterInput );
	}
}
 
int main ( void )
{
	int charInput;
	printf ( "\n\tEnter any character between 0 - 9: " );
	charInput = getchar(); 
	checkChar ( charInput );
}




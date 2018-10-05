/*
 * File:        PrintMultiples.c
 *
 * Author:      Thomas Scheffler; the author of     
 *				"How to Think Like a Computer Scientist,"
 *				C-Version. 		
 *
 * Purpose:     To print multiples of the logarithm
 *				of some numbers.  
 *             
 */


#include <stdio.h>

void PrintMultiples (int n, int high)
{
int i = 1;

while (i <= high)
{
printf ("%i\t", n*i);
i = i + 1;
}
printf ("\n");
}

void PrintMultTable (int high)
{
int i = 1;
printf ("\n");
while (i <= high)
{
	printf ("\t");
PrintMultiples (i, i);
i = i + 1;
}
printf ("\n");
}

int main (void)
{
	PrintMultTable ( 7 );
	return 0;
}


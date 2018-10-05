/*
 * File:        distance.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   15th September, 2018.   
 * Version:     1.1.0 EN
 *
 * Purpose:     To calculate distance between two points.
 *              
 *              
 */

#include <stdio.h>
#include <math.h>


double SumSquares ( double, double );
double SumSquares ( double dx, double dy )
{
	return ( dy * dy ) + ( dx * dx );
}

 
double Distance ( double, double, double, double );
double Distance ( double x1, double x2, double y1, double y2 )
{
	double dx = x2 - x1;
	double dy = y2 - y1;
	double result = SumSquares ( dy, dx );
	double distance = sqrt ( result ); 
	printf ( "\n\tTHE DISTANCE BETWEEEN ( %f, %f ) & ( %f, %f ) is: %f\n\n", x1, y1, x2, y2, distance );
	return distance;
}


int main ( void )
{
	double m1 = 5;
	double m2 = 7;
	double n1 = 25;
	double n2 = 41;

	return Distance ( m1, m2, n1, n2 );
}


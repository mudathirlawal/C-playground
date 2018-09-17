/*
 * File:        Multadd.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   1st September, 2018.   
 * Version:     1.1 EN
 *
 * Purpose:     To compute the value of sin( PI /4 ) + ( cos( PI / 4 ) / 2 ) using the Multadd operation.
 *              And to compute the value of [xE ^ -x + SQRT( ( 1 - E ^ -x ) )] using the same function 
 *              defined for the first solution, thereby practicing Pattern-matching/Pattern-Recognistion.
 */

#include <stdio.h>
#include <math.h>    

double Multadd ( double a, double b, double c )
{
    return ((a * b) + c);  // Using the statement: printf ( "\n%f", ((a * b) + c) ); inappropriate.
}    

double Yikes ( double x )
{
    double y  = exp ( -x );
    double z  = sqrt ( 1 - y );
    return Multadd ( x, y, z ); 
}    


int main ( void )
{
    const char   NEW_LINE    = '\n';
    const char   EMPTY_SPACE = ' ';
    const double PI          = acos ( -1.0 ); 
    const double ANGLE_IN_DEGREES = ( PI / 4.0 );
    const double ANGLE_IN_RADIANS = ( ANGLE_IN_DEGREES * 2 * PI ) / 360.0;
    const double ELEMENT1         = ( 1 / 2 );
    const double ELEMENT2         = cos ( ANGLE_IN_RADIANS );
    const double ELEMENT3         = sin ( ANGLE_IN_RADIANS );    
    
    double firstNo  = 4.0;
    double secondNo = 3.0;
    double thirdNo  = 5.0;
       
    double output1  = Multadd ( firstNo, secondNo, thirdNo ); // OR: Multadd ( 4.0, 3.0, 5.0 ); and discard the variables.
    double output2  = Multadd ( ELEMENT1, ELEMENT2, ELEMENT3 );
    double output3  = Yikes ( 3.0 );
    
    printf ( "%c", NEW_LINE );
    printf ( "%c%c%cMultadditionization of: ( 4.0 * 3.0 ) + 5.0 = ", EMPTY_SPACE, EMPTY_SPACE, EMPTY_SPACE );
    printf ( "%f%c%c", output1, NEW_LINE, NEW_LINE );
    printf ( "%c%c%cMultadditionization of: sin( PI / 4 ) + ( cos( PI / 4 ) / 2 ) = ", EMPTY_SPACE, EMPTY_SPACE, EMPTY_SPACE );
    printf ( "%f%c%c", output2, NEW_LINE, NEW_LINE );
    printf ( "%c%c%cMultadditionization of: 3( E ^ - 3 ) + SQRT( ( 1 - ( E ^ - 3 ) ) ) = ", EMPTY_SPACE, EMPTY_SPACE, EMPTY_SPACE );
    printf ( "%f%c%c", output3, NEW_LINE, NEW_LINE );
}

// Run with: gcc -o Multadd.o Multadd.c -lm






/*
 * File:        IsTriangle.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   17th September, 2018.   
 * Version:     1.0.0 EN
 *
 * Purpose:     To test if a triangle can be formed from three supplied legngths.
 * 				
 */

#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define EXIT_SUCCESS 0
#define EXIT_FAILURE -1


int IsTriangle ( int, int, int );

int IsTriangle ( int side1, int side2, int side3 )
{
    const int YES = TRUE;
    const int NO = FALSE;
    short case1 = ( ( side1 + side2 ) > side3 );
    short case2 = ( ( side2 + side3 ) > side1 );
    short case3 = ( ( side3 + side1 ) > side2 );
    short canFormTriangleFlag = ( case1 && case2 && case3 ); 

    if ( !canFormTriangleFlag )
    {
        return NO;
    }
    else
    {
        return YES;
    }
}

// The Main Function:
int main ( void )
{
   if ( IsTriangle ( 130, 130, 130 ) )
    {
        printf ( "\n\tTRUE; Supplied lengths can form a Triangle!\n\n" );
        return EXIT_SUCCESS;
    }
    else
    {
        printf ( "\n\tFALSE; Supplied lengths CANNOT form a Triangle!\n\n" );
        return EXIT_FAILURE;
    }
}


/*
 * File:        emptyInputBuffer.c
 *
 * Author:      Thomas Scheffler; the author of     
 *              "How to Think Like a Computer Scientist,"
 *              C-Version. Though, I added some scafoldings.      
 *
 * Purpose:     To empty input buffer
 *              
 */

#include <stdio.h>
#include <stdlib.h>

/*==============*/
int main ( void )
{
    const char ES = ' ';
    int input, successFlag;

    /* prompt the user for input */
    printf ( "\n" );
    printf ( "\tEnter an integer:%c%c", ES, ES );
    
    /* get input */
    successFlag = scanf ( "%i", &input );
   
    /* check and see if the input statement succeeded */
    if ( successFlag == 1 )
    {
        /* print the value we got from the user */
        printf ( "\n" );
        printf ( "\tYour input is:%c%c%c%c%c%i\n", ES, ES, ES, ES, ES, input );
        printf ( "\n" );
        return EXIT_SUCCESS;
    }

    char ch;   /* helper variable stores discarded chars*/

    while ( successFlag != 1 )
    {
	    printf ( "\tThat isn’t a number. Please try again:\n" );
	    
	    /* now we empty the input buffer */
	    while ( ( ch = getchar () ) != '\n' && ch != EOF );
        printf ( "\t" );
	    successFlag = scanf ( "%i", &input );
    }
    printf ( "\n" );
    printf ( "\tYour input is:%c%c%i\n", ES, ES, input );
    printf ( "\n" );
    return EXIT_SUCCESS;
}



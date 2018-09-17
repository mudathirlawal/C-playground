/*
 * File:        ParcelsPoem.c
 * Author:      Mudathir Lawal
 * Email:       mudathir.lawal@yahoo.com
 * GitHub:      github.com/mudathirlawal
 * Last Edit:   4th September, 2018.   
 * Version:     1.1.0 EN
 *
 * Purpose:     To print the wordings of the poem:
 *              "99 parcels in the bag, 99 parcels in the bag; 
 *              you take one out, you deliver it to the owner; 
 *              98 parcels in the bag."
 *              And end it with:
 *              0 parcel in the bag, 0 parcel in the bag; 
 *              you can't take any out, you can't deliver to any owner;
 *              because there are no owners anymore,
 *              since there are no parcels anymore.
 *              
 */

#include <stdio.h>

void PrintPoemWordings ( int noOfBags )
{
    char EC = ' ';       // Empty Character
    if ( noOfBags <= 0 )
    {
        if ( noOfBags == 0 )
        {
             printf ( "\n%c%c%c%i parcel in the bag, ", EC, EC, EC, noOfBags );
             printf ( "%i parcel in the bag;\n", noOfBags );
             printf ( "%c%c%cyou can't take any out, you can't deliver to any owner;\n", EC, EC, EC );
             printf ( "%c%c%cbecause there are no owners anymore,\n", EC, EC, EC );
             printf ( "%c%c%csince there are no parcels anymore.\n\n", EC, EC, EC );  
             return; 
        }
        else
        {
            printf ( "\n%c%c%cYou can't pass a negative number as an argument\n", EC, EC, EC );
            printf("%c%c%cto the PrintPoemWordings() function.\n\n", EC, EC, EC );
            return;
        }
    }
    
    if ( noOfBags == 1 )
    {
         printf ( "\n%c%c%c%i parcel in the bag, ", EC, EC, EC, noOfBags );
         printf ( "%i parcel in the bag;\n", noOfBags );
         printf ( "%c%c%cyou take it out, you deliver it to the owner;\n", EC, EC, EC );
         noOfBags = noOfBags - 1;
         printf ( "%c%c%c%i parcel in the bag.\n", EC, EC, EC, ( noOfBags ) );
         return PrintPoemWordings ( noOfBags );   
    }
    printf ( "\n%c%c%c%i parcels in the bag, ", EC, EC, EC, noOfBags );
    printf ( "%i parcels in the bag;\n", noOfBags );
    printf ( "%c%c%cyou take one out, you deliver it to the owner;\n", EC, EC, EC );
    noOfBags = noOfBags - 1;
    if ( noOfBags == 1 )
    {
        printf ( "%c%c%c%i parcel in the bag.\n", EC, EC, EC, ( noOfBags ) );
        return PrintPoemWordings ( noOfBags );
    }
    else
    {
    printf ( "%c%c%c%i parcels in the bag.\n", EC, EC, EC, ( noOfBags ) );
    return PrintPoemWordings ( noOfBags );
    }
}

int main ( void )
{
    PrintPoemWordings ( 5 );
}


/*
 * File:         concentrate.c
 *
 * Author:      Mike Vine, Author of C Programming for
 * 				Absolute Beginers. I am keeping it for
 *				reference/teaching purposes.
 */

#include <stdio.h>
#include <stdlib.h>
main()
{
 char cYesNo = '\0';
 int iResp1 = 0;
 int iResp2 = 0;
Chapter 4 • Looping Structures 105
 int iResp3 = 0;
 int iElaspedTime = 0;
 int iCurrentTime = 0;
 int iRandomNum = 0;
 int i1 = 0;
 int i2 = 0;
 int i3 = 0;
 int iCounter = 0;
 srand(time(NULL));
 printf("\nPlay a game of Concentration? (y or n): ");
 scanf("%c", &cYesNo);
 if (cYesNo == 'y' || cYesNo == 'Y') {
 i1 = rand() % 100;
 i2 = rand() % 100;
 i3 = rand() % 100;
 printf("\nConcentrate on the next three numbers\n");
 printf("\n%d\t%d\t%d\n", i1, i2, i3);
 iCurrentTime = time(NULL);
 do {
 iElaspedTime = time(NULL);
 } while ( (iElaspedTime - iCurrentTime) < 3 ); //end do while loop
 system ("clear");
 printf("\nEnter each # separated with one space: ");
 if ( i1 == iResp1 && i2 == iResp2 && i3 == iResp3 )
 printf("\nCongratulations!\n");
106
 scanf("%d%d%d", &iResp1, &iResp2, &iResp3);
C Programming for the Absolute Beginner, Second Edition
 else
 printf("\nSorry, correct numbers were %d %d %d\n", i1, i2, i3);
 } //end if
} //end main function
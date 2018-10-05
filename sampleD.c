/*
 * File:        sampleD.c
 *
 * Author:      Mike Vine Author of C Programming for
 * 				Absolute Beginer. I am keeping it for reference.
 */

#include <stdio.h>
main()
{
 int iResponse = 0;
 printf("\n1\tSports\n");
 printf("2\tGeography\n");
 printf("3\tMusic\n");
 printf("4\tWorld Events\n");
 printf("\nPlease select a category (1-4): ");
 scanf("%d", &iResponse);
switch (iResponse) {
 case 1:
 printf("\nYou selected sports questions\n");
 case 2:
 printf("You selected geography questions\n");
 case 3:
 printf("You selected music questions\n");
 case 4:
 printf("You selected world event questions\n");
 } //end switch
} //end main function

switch (iResponse) {
 case 1:
 printf("\nYou selected sports questions\n");
 break;
 case 2:
 printf("You selected geography questions\n");
 break;
 case 3:
 printf("You selected music questions\n");
 break;
 case 4:
 printf("You selected world event questions\n");
 break;
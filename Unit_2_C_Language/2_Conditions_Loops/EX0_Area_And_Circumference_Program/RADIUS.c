/*
 ============================================================================
 Name        : RADIUS.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char choice;
	float radius;
	float area,circum;
	printf("enter circle r: ") ;
	fflush(stdin); fflush(stdout);
    scanf("%f", &radius);
    printf("enter your choice (a to print area, c to print circum): ");
	fflush(stdin); fflush(stdout);
	scanf ("%c", &choice);
	if (choice =='a')
	{
		area = 3.14* radius * radius ;
		printf("\r\n area is %f \r\n", area ) ;
	}
	else if (choice == 'c' )
	{
		circum = 2 * 3.14 * radius ;
	printf ("\r\n circum is %f\r\n",circum);
	}
	else
	printf ("\r\n wrong choice\r\n");
	}



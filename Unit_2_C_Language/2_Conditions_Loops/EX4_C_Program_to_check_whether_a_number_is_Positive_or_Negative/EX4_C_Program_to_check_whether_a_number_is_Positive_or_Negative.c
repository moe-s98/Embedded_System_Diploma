#include <stdio.h>
void main ()
{
	float num;
	printf ("Enter a number: ");
	scanf ("%f",&num);
	
	if(num == 0)
		printf ("You entered zero.\n");
	
	else if(num > 0)
		printf ("%f is positive.\n",num);
	
	else if(num < 0)
		printf ("%f is negative.\n",num);
	
	else 
		printf ("The input is not a number.\n");

	
}
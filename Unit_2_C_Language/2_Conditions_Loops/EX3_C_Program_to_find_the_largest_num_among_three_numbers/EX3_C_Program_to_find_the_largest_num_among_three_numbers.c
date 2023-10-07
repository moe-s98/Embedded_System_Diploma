#include <stdio.h>

void main()
{
    float a , b, c ;
	printf ("enter three float numbers to compare : \r\n ") ;
	scanf ("%f" , &a ) ;
	scanf ("%f" , &b ) ;
	scanf ("%f" , &c ) ;

	if           ((a>b) && (a>c))
	{		
    printf ("Largest number = %f\n",a);
	}
    else if  	((b>a) && (b>c))	
    {
	printf ("Largest number = %f\n",b);
	}
	else if      ((c>a) && (c>b))	
	{
	printf ("Largest number = %f\n",c);
	}
	else 
    {
	printf ("error");		
    }
}





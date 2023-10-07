#include <stdio.h>
#include <stdlib.h>

void main ()
{
  float a ,b , temp ;
  
  printf ("enter value of a : ") ;
  scanf ("%f", &a) ;
    printf ("enter value of b : ") ;
  scanf ("%f", &b) ;
    temp = a ;
	a = b ;
	b = temp ;
	
	printf ("After swapping, value of a = %f\n",a);        
	printf ("After swapping, value of b = %f\n",b);     
}
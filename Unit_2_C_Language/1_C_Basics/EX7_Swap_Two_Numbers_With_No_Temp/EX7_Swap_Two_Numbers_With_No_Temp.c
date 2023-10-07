#include <stdio.h>
#include <stdlib.h>

void main ()
{
  float a ,b ;
  
  printf ("enter value of a : ") ;
  scanf ("%f", &a) ;
    printf ("enter value of b : ") ;
  scanf ("%f", &b) ;
  
  a=a+b;
  b=a-b;
  a=a-b; 
    printf ("After swapping, value of a = %f\n",a);        
	printf ("After swapping, value of b = %f\n",b);     

    
}
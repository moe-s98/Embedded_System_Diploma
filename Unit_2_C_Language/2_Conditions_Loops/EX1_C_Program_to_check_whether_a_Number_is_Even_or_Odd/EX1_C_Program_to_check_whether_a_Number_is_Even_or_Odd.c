#include <stdio.h>
#include <stdlib.h>
 void main ()
 {
	 int a ;
	  
	 printf ("enter an integer you want to check :") ;
	 scanf ("%i" , &a) ;
	  if ((a/2)==0) 
	{
		printf ("%i is even.\n",a);
	}
	else if ((a%2)!=0)
	{
		printf ("%i is odd.\n",a);

	}
}
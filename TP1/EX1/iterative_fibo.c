#include "header.h"

int iterative_fibo(int n)
{
   
	int a=0; 
	int b=1 ; 
	int c=0;
    	if (n==0)
    		return 0;
    	if (n==1)
    		return 1;
    	if (n>1)
    	{
    	    for(int i=1; i<n ; i++)
    	    {	
    		c=a+b;
    		a=b;
    		b=c;
    	    }
    	    return c;	
    	
    	}
   	

}

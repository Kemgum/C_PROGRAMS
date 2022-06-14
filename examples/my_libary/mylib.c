#include <stdio.h>
#include "mylib.h"
#define PI 3.14

float alanHesapla(unsigned r)
{
	 float alan = PI*r*r;
	
	return alan;
}
void myPrint()
{
	int counter = 1;
	
	for(int rov=1; rov<=5; rov++)
	{
		
		
		for(int col=1; col<=rov ; col++)
		{
			printf("%d ", counter);
			counter++;
			
		}
		printf("\n");
	}
		
	
	
	
}

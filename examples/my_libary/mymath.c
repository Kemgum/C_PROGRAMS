
#include <stdio.h>
#include "mymath.h"

int getFaktoryel()
{
	int faktoryel = 1;
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	for(int i=1; i<=sayi; i++)
	{
		faktoryel *= i;
		
	}
	
	printf("%d ! = %d", sayi, faktoryel);
	
	return faktoryel;
	
}

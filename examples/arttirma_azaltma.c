


#include <stdio.h>

int main()
{
	int sayi2 = 10;
	int sayi = 5;
	//~ ++sayi1; 
	sayi2 = (sayi++) + (++sayi); 
	/*
	 Arttirma operatoru degiskenin sagindaysa once normal degerini alir sonrasinda bir ekler
	 Arttirma operatoru degiskenin solunda ise mevcut degeri once bir arttirir 
	 */
	 sayi2 += 5; // arttirma yaziminin kisa sekli
	 
	 
	printf("sayi2 = %d\n", sayi2);
	printf("sayi = %d", sayi);
	
	
	
	
	
	return 0;
}


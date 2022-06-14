// scanf in daha derine inilmis hali gibi. Adresin gercek sayisal degerini ogreniyoruz.

// Gercek adresi ogrenmek istiyorsak %p kullaniyoruz. Hexadecimal olarak veriyor

// printf in veya baska bir durum icinde yazarken adresle ilgileniyorsak & kullaniyoruz

#include <stdio.h>

int main()
{
	char *p_harf;
	char harf = 'a';
	int sayi = 5;
	int numara = 10;
	int *p_sayi = &sayi; // uzun numarayi *p_sayi nin icine tanimlamis oluyoruz. Basina * koymamiz onu pointer yapan sey 
						 // ilk tanimladigimizda * koymamiz yeterli
		
	p_harf = &harf;
						 
	printf("sayi  adli degiskenin degeri=%d\nadresi=%p", sayi, &sayi);
	
	
	
	return 0;
}




#include <stdio.h>

int x = 50; // global tanim herkes buna erisebilir

void topla(int y, int z)
{
	int x = 10; // local bir degisken sadece burasi icin gecerli olur. local tanimlama yaparsan globali golgeler shadow etkisi diyoruz buna
	int toplam;
	
	toplam = x + y + z;
	
	
	printf("Sayilarin toplami = %d\n", toplam);
	
	
}


 



int main()
{
	int x = 100; // local bir degisken
	
	topla(30, x);
	
	return 0;
}


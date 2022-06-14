


#include <stdio.h>

unsigned int cevreHesapla(unsigned int x, unsigned int y);
unsigned int alanHesapla(unsigned int x, unsigned int y);

int main()
{
	unsigned int uzunkenar;
	unsigned int kisakenar;
	unsigned int alan;
	
	printf("Uzun kenari giriniz\n");
	scanf("%d", &uzunkenar);
	printf("Kisa kenari giriniz\n");
	scanf("%d", &kisakenar);
	
	//cevreHesapla(uzunkenar, kisakenar);
	
	alan = alanHesapla(uzunkenar, kisakenar);
	
	printf("cevresi = %d\n", cevreHesapla(uzunkenar, kisakenar));
	printf("alani = %d\n", alan);
		
	return 0;
}
unsigned int cevreHesapla(unsigned int x, unsigned int y)
{
	int cevre;
	
	cevre = (x + y) * 2;
	
	return cevre;
		
}
unsigned int alanHesapla(unsigned int x, unsigned int y)
{
	int alan;
	
	alan = x * y;
	
	return alan;	
	
}

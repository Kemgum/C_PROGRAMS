


#include <stdio.h>

void topla(int x, int y)
{
	//int toplam = x + y;
	
	printf("toplamlari = %d\n", x + y);
	
}
void cikar(int x, int y)
{
	printf("cikarma = %d\n", x - y);

	
}
void carp(int x, int y)
{
	printf("carpimlari = %d\n", x * y);
	
}
void bol(int x, int y)
{
	int bolum = x / y;
	
	printf("bolumleri = %d\n", bolum);
	
}
void sifirHatasi()
{
	printf("bolen 0 olamaz\n");
	printf("lutfen gecerli bir sayi giriniz\n");
	
	
}


int main()
{
	int x, y;
	printf("Birinci sayiyi giriniz\n");
	scanf("%d", &x);
	printf("Ikinci sayiyi giriniz\n");
	scanf("%d", &y);
	
	printf("========================\n");
	printf("Sonuclar;\n");
	
	topla(x, y);
	cikar(x, y);
	carp(x, y);
	if(y != 0)
	{
		bol(x, y);
	}
	else
	{
		sifirHatasi();
		
	}
			
	
	return 0;
}


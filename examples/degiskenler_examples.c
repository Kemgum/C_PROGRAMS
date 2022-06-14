#include <stdio.h>

int main()
{
	int a = 15;
	int b = 25;
	
	int ab_toplama = a + b;
	float ab_bolme = (float)a / b; // a nin tipi farkli ama sen onu kullanirken onu obur degiskene cevir diyoruz yani (casting operator)
	int ab_carpma = a * b;
	int ab_cikarma = a - b;
	
	
	
	
	
	printf("toplamlari = %d\n", ab_toplama); // degiskenin degerini ekrana basmak icin %d kullanilir( bu bir format kaliplarindan biri)
	                               // %d onluk sayi sisteminde tam sayi basar ekrana 
	
	printf("farklari = %d\n", ab_cikarma);
	
	printf("bolme = %f\n", ab_bolme);
	
	printf("carpma = %d\n", ab_carpma);
	
	char harf = 'e';
	char rakam = '1';
	char noktalama_isareti = '\\'; // sola yadik slash i normalde kullanmayiz cunku ozel anlami vardir.
	                             // boyle bir simgeyi ekrana basmak icin iki tane kulanirsak bir tane elde ederiz. (ekranda)
	
	printf("harf = %c\n rakam = %c\n noktalama_isareti = %c\n", harf, rakam, noktalama_isareti);
	
	printf("Ahmet %%5 indirim aldi");                             
	
	
	
	
	
	return 0;
	
}


// saklayacagin alani bulmak icin sizeof la kac biyte olduguna bakiyoruz. Bir bayte 8 bit den olustugu icin kac ciktiysa carpi sekiz yapip iki uzeri yaziyoruz
// ornek 2^8 - 1 saklayabilicegimiz max sayiyi verir
#include <stdio.h>

int main()
{
	unsigned int sayi = 0;//bu kodu yazdigin zaman butun hafiza alalina sadece pozitif sayilar icin ayirmis olur
	unsigned char sayilar = 255;// sayilarin yarisi pozitif yarisi negatif olarak ayriliyor negatife gecinde tersten geriye sayiyor
	short int sayi2 = 2;
	long int sayi3 = 3;
	long long int sayi4 = 4;
	float x = 2.5;
	double y = 4.5;
	long double z = 5.5;
	char karakter = '\n';
	
	printf("karakter = %d\n", karakter);
	
	printf("int %d yer kaplar\n", sizeof(sayi));
	
	printf("char %d yer kaplar\n", sizeof(sayilar));
	
	printf("short int %d yer kaplar\n", sizeof(sayi2));
	
	printf("long int %d yer kaplar\n", sizeof(sayi3));
	
	printf("long long int %d yer kaplar\n", sizeof(sayi4));
	
	printf("float %d yer kaplar\n", sizeof(x));
	
	printf("double %d yer kaplar\n", sizeof(y));
	
	printf("long double %d yer kaplar\n", sizeof(z));
	
	
	return 0;
}


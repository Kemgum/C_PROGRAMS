/*
 * 5! = 5*4*3*2*1 bu faktoryel hesaplama
 * int getFaktoryel(int x) bizden bir sayi alicak onun faktoryelini hesaplayip bize soylecek
 * 3! = 3*2*1 = 6
 *  mymath.h mymath.c
 * cmd dir yap gcc -Wall -o isim.exe main.c maymath.c
 * .\ calistirmak icin 
 * */

#include <stdio.h>
void printHello(int x);

int main()
{
	
	printHello(3);
	
	
	return 0;
}
void printHello(int x)
{
	if(x==0)
	{
		return;
	}
	
	printf("Hello %d\n", x);
	
	printHello(x-1);
	
	printf("Hello %d\n", x);
	return;
}

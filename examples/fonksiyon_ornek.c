


#include <stdio.h>

int isPrime(int x);
void printPrime(int y);
int getInt();

int main()
{
	int sayi = 0;
	char quit;
	
	do
	{
		sayi = getInt(); // sagdaki degeri alir soldaki degerin icine koyar. Cayi fincana dokmek gibi
		printPrime(sayi);
		
		printf("Devam etmek istiyormusunuz? y/n\n");
		scanf(" %c", &quit); // %c nin yanina bir bosluk birakmak gerekiyor bufferi temizledik obur turlu calismiyordu bunu unutma 
		
	}while(quit=='y' || quit=='Y');
	
		putchar('T');
		putchar('e');
		putchar('s');
		putchar('e');
		putchar('k');
		putchar('k');
		putchar('u');
		putchar('r');
		putchar('l');
		putchar('e');
		putchar('r');
	return 0;
}

int isPrime(int x)
{
	for(int y=2; y<x; y++)
	{
		
		if(x%y==0)
		{
			return 0;
		}
		
	}
	
	return 1;
	
	//tek return e dusur burayi
	
}
void printPrime(int y)
{
	
	if(isPrime(y)==1)
	{
		printf("%d asal bir sayidir\n", y);
		
	}
	else
	{
		printf("%d asal bir sayi degildir\n", y);
		
	}
	
	
}
int getInt()
{
	int sayi = 0;
	
	printf("Bir sayi giriniz\n");
	scanf("%d", &sayi);
	
	return sayi; 
}

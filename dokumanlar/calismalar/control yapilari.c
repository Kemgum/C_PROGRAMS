#include <stdio.h>

int main()
{
	
	int sayi1 = 0;
	
	printf("Bir sayi giriniz: ");
	
	scanf("%d", &sayi1); // yine bir tam sayi okuyacak ve okudugu bu sayiyi a degiskeninde saklayacak
					 // adrese erismek icin & kullaniyoruz
	/*
	if(sayi1 % 2 == 0)
	{
		printf("Bu sayi cifttir");
		
		
	} 
	else 
	{
		printf("Bu sayi tektir");
			
			
	}
	*/
	
	switch(sayi1)	// case ler belirleyip sayilarla onlari sunmus oluyoruz. kullanici 1 yazdiginda pazartesiyi gormus oluyor break lazim yoksa kosulsuz bir sonrakinin icinede girer onuda ekrana yazar
	{
		case 0:
			printf("pazar");
			break;
		case 1:	
			printf("pazartesi");
			 break;
		case 2:	
			printf("sali");
			 break;
		case 3:	
			printf("carsamba");
			break;
		case 4:	
			printf("persembe");
			break;
		case 5:	
			printf("cuma");
			break;
		case 6:	
			printf("cumartesi");
			break;	
		default: 
				printf("boyle bir gun yok");
				
	}
	
	
	return 0;
	
}

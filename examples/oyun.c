


#include <stdio.h>

int main()
{
	int tahmin_edilen_sayi = 0;
	int tutulan_sayi = 23;
	
	printf("0-100 arasi bir sayi giriniz.\ndogru bilince kazanicaksiniz\n");
	
	while(1)
    {
	
		printf(">>> ");
		
		scanf("%d", &tahmin_edilen_sayi);
		
		if(tahmin_edilen_sayi < tutulan_sayi)
		{
			printf("arttir\n");
			
			
		}
		else if(tahmin_edilen_sayi > tutulan_sayi)
		{
			
			printf("azalt\n");
			
			
		}
		else
		{
			
			printf("KAZANDINIZ"); 
			break;
		
		}
	
    }	
	
	
	
	
	
	
	
	return 0;
}


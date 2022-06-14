

//BU KULLANDIGIN IF YAPISI NESTED IF YAPISIDIR
#include <stdio.h>

int main()
{
	
	char renk;
	char hobi;
	int kilo;
	
	
	printf(">>>KEMGUM TANIMA OYUNU<<<\n");
	printf("Sorulari dogru bildikce level zorlasicak, tum sorulari bilince oyuncu kazanir\n");
	printf(">>>BOL SANS<<<\n");
	
	printf("1) Kemalin en sevdigi renk nedir?\n");
	
	scanf("%c", &renk);
	
	if(renk == 'm')
	{
		printf("DOGRU CEVAP  :)\n");
		printf("2) Kemalin kilosu kactir\n ");
		
		scanf("%d", &kilo);
		
		if(kilo == 75)
		{
			printf("TEBRIKLER DOGRU CEVAP\n");
			printf("3) Kemalin meriden sonra en sevdigi hobisi nedir\n");
			
			scanf("%c", &hobi);
			scanf("%c", &hobi);// scanf calismadigi zaman iki tane ekle 
		
		
			if(hobi == 'g')
			{
				printf("DOGRU!!!!!\n");
				printf("4) Kemalin en sevdigi sayi?\n");
			}	
		
		}
		
		
		
	
		
	}
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}


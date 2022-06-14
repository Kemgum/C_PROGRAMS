
// Kullanicidan bir cinsiyet ve bir yas alican. bir uygulama yapicaz kisi askere gidermi gitmezmi. 20 yas dahil ustundeyse gidebilir 65 dahil buyukse gidemez. 65 yas ustune muhaf sayilicak
// kadin ciktiginda yukumlulugu yoktur cikicak
// cinsiyet erkek icin 'E' 'e'kadin icin 'K' kucuk harfleride olucak 
// 20 yastan kucukse yasiniz gelmedi diyicez
#include <stdio.h>

int main()
{
	int yas = 0;
	char cinsiyet;
	
	
		printf("ASKERLIK SORGULUMA UYGULAMASI\n");
		printf("Lutfen cinsiyetinizi giriniz\n");
		
		
		
	
	
	
		
		
		printf(">>> ");
	
	
		scanf("%c", &cinsiyet);
		
		
		
		if(cinsiyet == 'e' || cinsiyet == 'E')
		{
	
			printf("Lutfen yasinizi giriniz\n");
			scanf("%d", &yas);
			
			if(yas >= 20 && yas <= 64)
			{	
				printf("Askerlik zamaniniz gelmistir");	
			}
			else if(yas >= 65)
			{	
				printf("Askerlikten muafsiniz");		
			}
			else if(yas < 20)
			{		
				printf("Askerlik yasiniz gelmemistir");	
			}
		
		}	
		else if(cinsiyet == 'k' || cinsiyet == 'K')
		{
			printf("Yukumluluk bulunmamaktadir");
			
		}
	
		

	return 0;
}


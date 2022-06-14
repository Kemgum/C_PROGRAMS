


#include <stdio.h>

int main()
{
	unsigned int baslangic = 3;
	unsigned int bitis = 60;
	//~ char cikis = 1;
	//~ char deger = 0; 
	
	//~ do
	//~ {
		//~ printf("Bir menu islemi secin\n>");
		//~ scanf("%c", &deger);
		
		//~ if(deger == 'q')
		//~ {
			//~ cikis = 0;
			
		//~ }
		
	//~ }while(cikis == 1);
	
	do
	{
		printf("%d ", baslangic);
		baslangic = baslangic + 3;
		
		
	}while(baslangic <= bitis);
	
	
	
	return 0;
}


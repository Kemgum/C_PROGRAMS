
// 1+2+3+4+5+6+7+8+9+10 = 55
#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;
	int toplam = 0;
	printf("bir baslangic sayisi belirleyin\n> ");
	scanf("%d", &x);
	printf("bir bitis sayisi belirleyin\n>");
	scanf("%d", &y);
	
	while(x <= y)
	{
		if(x % 2 == 1)
		{
			printf("%d ", x);
			
		}
		toplam = toplam + x;
		//toplam += x; Buda baska bir kullanim seklidir ayni ifade genelde boyle kullaniriz
		x++;
		
		
	}
		
	printf("toplamlari = %d\n", toplam);
	
	
	
	
	return 0;
}


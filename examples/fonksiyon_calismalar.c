

#include <stdio.h>
#define DEBUG

void isEven();
int isEven2();

int main()
{
	char cevap;
	int is_even;
	
	do
	{
		
		//isEven();
		//is_even = isEven2();
		
		if(isEven2()==1)
		{
			printf("cifttir\n");
			
		}else
		{
			printf("tektir\n");
		}
		
		
		
		#ifdef DEBUG
			printf("-----%d-----", is_even);
		#endif	
		
		printf("Devam etmek istiyomusunuz? y/n: ");
		scanf(" %c", &cevap);
		
		#ifdef DEBUG
			printf("-----%c-----", cevap);
		#endif
		
		if(cevap!='y' && cevap!='Y')
		{
			break;
			
		}
		
		
		
	}while(1);
	
	
	
	
	
	
	return 0;
}

void isEven()
{
	int sayi = 0;
	
	printf("Bir sayi giriniz\n");
	scanf("%d", &sayi);
	
	if(sayi%2==0)
	{
		printf("sayi cift\n");
		
	}
	else
	{
		printf("sayi tektir");
		
	}
	
}

int isEven2()
{
	int sayi = 0;
	
	printf("Bir sayi giriniz\n");
	scanf("%d", &sayi);
	
	if(sayi%2==0)
	{
		return 1;
		
	}
	else
	{
		return 0;
		
	}
	
	
	
}


#include <stdio.h>
// 0 - 44 arasi basarisiz, 45 - 64 arasi orta, 65 - 74 arasi iyi, 75 - 84 arasi pek iyi, 85 - 100 arasi yildizli pek iyi

int main()
{
	
	int not =  0;
	
	
	
	printf("Lutfen notunuzu giriniz: ");
	
	scanf("%d", &not);
	
	if(not >= 0 && not <= 44)  
	{
		
		printf("Basarisiz");
		
		
		
		
	}
	else if(not >= 45 && not <= 64)
	{
		
		printf("orta");
		
	}
	else if(not >= 65 && not <= 74)
	{
		
		printf("Iyi");
		
	}
	else if(not >= 75 && not <= 84)
	{
		
		printf("Pek iyi");
		
	
	}
	else if(not >= 85 && not <= 100)
	{
		
		printf("Yildizli pek iyi");
		
	}
	else
	{
		
		printf("Lutfen 0 ile 100 arasi bir not giriniz"); 
		
	}
	
	
	
	
	return 0;
}


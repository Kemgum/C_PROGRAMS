

#include <stdio.h>
int myStrlen(char dizi[]);

int main()
{
	char dizi[] = "ertan dinler";
	int l_dizi = 0;
	
	l_dizi = myStrlen(dizi);
	
	
	printf("%s kelimesinde %d harf var", dizi, l_dizi);
	
	
	
	
	
	return 0;
}

int myStrlen(char dizi[])
{
	//int counter = 0;
	int a = 0;
	
	for(a=0; dizi[a]!='\0'; a++);
	
		
	return a;
	
}

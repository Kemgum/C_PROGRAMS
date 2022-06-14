

#include <stdio.h>

int main()
{
	char harf = 'a';
	int sayi = 5;
	
	char *p_harf;
	
	
	p_harf = &harf;
	
	printf("sayi  adli degiskenin degeri=%c adresi=%p\n", harf, &harf);
	
	printf("%p", p_harf);
	
	
	return 0;
}


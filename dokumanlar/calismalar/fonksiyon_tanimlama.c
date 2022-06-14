


#include <stdio.h>

void bilgiYaz(void)
{
	printf("===============================\n");
	printf("yasim 18\n");
	printf("kilom 50\n");
	printf("cikolata severim\n");
	printf("===============================\n");
}	
void boyYazdir(float boy)
{
	printf("%f", boy);	
} 

float x;



int main()
{
	
	bilgiYaz();
	bilgiYaz();
	
	printf("Boyunuzu giriniz\n");
	scanf("%f", &x);
	boyYazdir(x);
	
	
	return 0;
}


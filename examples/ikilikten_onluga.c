

#include <stdio.h>
#include <string.h>

int binToDec(char source[]);
void decToBin(int number);

int main()
{
	char strbin[9] = "00000101";
	
	//~ printf("%s = %d", strbin, binToDec(strbin));
	
	decToBin(2534);
	
	
	
	
	
	return 0;
}
int binToDec(char source[]) // 00000101
{
	int len = strlen(source);
	
	for(int i=0; i<len; i++)
	{
		
		
	}
	
	return 0;
}
void decToBin(int number)
{
	int kalan;
	int dizi[sizeof(number)*8];
	int i = 0;
	
	do{
		kalan = number % 2;
		number = number / 2;
		dizi[i] = kalan;
		i++;
		
		//~ printf("%d", kalan);
	
	}while(number>=1);
	
	while(--i>=0)
	{
		
		printf("%d", dizi[i]);
		
	
	}
	
	
	
}



#include <stdio.h>
int sesliler(char kullanici[]);

int main()
{
	char isim[26] = "ertan dinler";
	int sayi = 0;
	
	sayi = sesliler(isim);
	
	printf("%s icerisinde %d sesli harf var\n", isim, sayi);
	
	
	
	
	
	
	
	
	
	
	return 0;
}

int sesliler(char kullanici[]) //kemal
{
	//a,e,i,o,u
	
	char ses[] = "aeiou";
	int counter = 0;
	
	for(int i=0; kullanici[i]!='\0'; i++)
	{
		
		for(int j=0; ses[j]!='\0'; j++)
		{
			if(kullanici[i] == ses[j])
			{
				counter++;
			}
		}
		
		
	}
	
	return counter;
	
	
	
	
}

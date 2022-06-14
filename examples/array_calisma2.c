

#include <stdio.h>

int main()
{
	char isim[] = "kemalertan";
	int length = 0;
	
	for(int k=0;isim[k]!='\0';k++)
	{
		length++;
	}
	
	printf("isimdeki karakter sayisi = %d", length);
		
	
	return 0;
}




#include <stdio.h>

void printArray(char src[]);

int main()
{
	int len;
	
	printf("Kac adet karakter giriceksiniz?: ");
	scanf("%d", &len);
	
	char karakterler[len];
	scanf("%s", karakterler);
	
	//~ for(int i=0; i<len; i++)
	//~ {
		//~ printf("%d.Karakteri giriniz: \n", (i+1));
		//~ scanf(" %c", &karakterler[i]);
	
		
	//~ }
	
	//~ printf("%s", karakterler);
	printArray(karakterler);
	
	return 0;
}

void printArray(char src[])
{
	//~ printf("%s", src);
	for(int i=0; src[i]!='\0'; i++)
	{
		printf("%c", src[i]);
			
	}
	
	
}




#include <stdio.h>

void printName(char alinan[]);

int main()
{
	char verilen[20]; 
	
	 printf("Bir kelime yaziniz\n");
	 scanf("%s", verilen);//dizilerde & kullanmaya gerek yok
	 
	 printName(verilen);
	 
	 
	
	return 0;
}

void printName(char alinan[])
{
	int x;
	
	for(x=0; alinan[x]!='\0'; x++)
	{
		if(alinan[x]=='a' || alinan[x]=='e' || alinan[x]=='i' || alinan[x]=='o' || alinan[x]=='u')
		{
			putchar('*');
		
		}
		else
		{
			putchar(alinan[x]);
			
		}
		
	}
	
	
	
	
}

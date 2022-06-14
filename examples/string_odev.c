

#include <stdio.h>

int myStrlen(char src[]);
void myStrcpy(char src[]);

char cpyIsim[30];

int main()
{
	char isim[] = "Kemal";
	int sonuc = 0;
	
	
	
	sonuc = myStrlen(isim);
	
	printf("\n%d", sonuc);
	
	myStrcpy(isim);
	
	printf("%s", cpyIsim);
	
	return 0;
}

int myStrlen(char src[])//Kemal
{
	int i;
	
	for(i=0; src[i]!='\0'; i++){}

	
	
		return i;
	
}

void myStrcpy(char src[])//Kemal
{
	int i = 0;
	
	
	for(i=0; src[i]!='\0'; i++)
	{
		cpyIsim[i] = src[i];//	K e m a l -
		
	}
	
		cpyIsim[i] = '\0';
	
	
	
}

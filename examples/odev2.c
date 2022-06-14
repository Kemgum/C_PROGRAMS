


#include <stdio.h>

int main()
{
	
	int i = 0;
	int length = 0;
	
	printf("Kac not giriceksiniz?: ");
	scanf("%d", &length);
	
	int notlar[length];
	char notlarHarf[length];
	
	
	
	while(i<length)
	{
		
		printf("%d.Notunuzu giriniz: ", (i+1));
		scanf("%d", &notlar[i]);
		i++;
    }
	
	i = 0;
	
	while(i<length)
	{
		if(notlar[i]>=85 && notlar[i]<=100)
		{
			notlarHarf[i] = 'A';			
		}
		else if(notlar[i]>=75 && notlar[i]<=84)
		{
			notlarHarf[i] = 'B';
	    }
	    else if(notlar[i]>=65 && notlar[i]<=74)
	    {
			notlarHarf[i] = 'C';
		}
		else if(notlar[i]>=55 && notlar[i]<=64)
		{
			notlarHarf[i] = 'D';
		}
		else if(notlar[i]>=45 && notlar[i]<=54)
		{
			notlarHarf[i] = 'E';
		}
		else if(notlar[i]>=0 && notlar[i]<=44)
		{
			notlarHarf[i] = 'F';
		}
		else
		{
			printf("Gecersiz bir not girdiniz");
		}	
			
		printf("%d ", notlar[i]);
		i++;
		
	}
	i = 0;
		putchar('\n');
	while(i<length)
	{
		
		putchar(notlarHarf[i]);
		putchar(' ');
		i++;
	}
	
	
		
		

		
	
	
	return 0;
}


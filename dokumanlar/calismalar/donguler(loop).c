

#include <stdio.h>

int main()
{
	int x = 1;
	int y = 11;
	
	while(x < y)	// bunda kosul hep devam ediyor dogru oldugu sure boyunca durmadan basa donup tekrar calisiyor
	{
		
		if(x == 5)
		{
			x++;
			//break;
			continue;
	    }
		printf(" %d- donguler calismasi\n", x);
		x++;// dongu kontrol degiskeni (sonsuz dongu olmamasini sagliyor) 
	    
		
	}
	// tek farki once do isini yapar sonra while kontrolu yapar kosul dogru olmasa bile en az bir kere calisir her zaman
	do
	{
		printf(" %d bunu ekrana yaz\n", x);
		x--;
		
	} while(x > 0);
	
	for(ifade1; ifade2; ifade3;)
	{
		// ifade1 de sayac kurulur. 
		// ifade2 de kontrol kismidir. Bu kisim dogru olursa for calisir
		// ifade 3 de sayaci arttirdigimiz kisimdir.\
		
	}
	
	
	
	return 0;
}


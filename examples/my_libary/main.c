


#include <stdio.h>
#include "mylib.h"




int main()
{
	 //~ float alan;
	 //~ float yari;
	
	//~ printf("Yari cap giriniz\n");
	//~ scanf("%f", &yari);
	
	//~ alan = alanHesapla(yari);
	
	//~ printf("Yari capi %.2f olan dairenin alani %.2f dir\n", yari, alan);
	int counter = 1;
	
	for(int rov=1; rov<=5; rov++)
	{
		
		
		for(int col=1; col<=rov ; col++)
		{
			printf("%d ", counter);
			counter++;
			
		}
		printf("\n");
	}
		
	return 0;
}
 


#include <stdio.h>

void printArray(float src[], int length); // Bir fonksiyona bir diziyi aktarirken o dizinin eleman sayisinida gondermemiz gerekiyor. 
                                          // Dizinin elemanlarina girince nerede durucagini bildirmemiz gerekiyor
 
int main()
{
	
	int length;
	int i = 0;
	
	
	printf("Kac adet kilo giriceksiniz?: ");
	scanf("%d", &length);
	
	float kilo[length];
	float kiloCopy[length];
	
	while(i<length)
	{
		printf("%d.Kiloyu giriniz: \n", (i+1));
		scanf("%f", &kilo[i]);
		i++;
    }
    
    printArray(kilo, length);   //~ Burada fonksiyonun icine kilo yazdik. 
								//~ Asagida ise implement yaparken float src[] yazdik. 
								//~ Burada diyoruzki o fonksiyonun icine sadece o tipte birsey yazabilirmisin. 
								//~ O senin oradaki saklama alanin. 
								//~ Komsun sana seker getiriyor kabiyla sende ondan sekeri alirken kendi kabina koyuyorsun. 
	
    putchar('\n');
    i = 0;
    
    while(i<length)
    {
		
		kiloCopy[i] = kilo[i];
		i++;
    }
    
    printArray(kiloCopy, length);
    
    
	return 0;
}

void printArray(float src[], int length)
{
	for(int i=0; i<length; i++)
	{
		printf("%.2f\n", src[i]);
			
	}
	
	
}



#include <stdio.h>
#define PI 3.14
#define DEBUG 
#define max 200
#define min 5

int main()
{
	
	
	printf("%f = pi degeri\n", PI);
	#ifdef DEBUG 
		printf("HATA ALGILANDI\n");
	#endif 
	
	#ifndef DEBUG
		printf("HATA YOK\n");
	#undef min
	#endif
	
	#ifdef min
		printf("min tanimli\n");
	#endif
	
	
		
	#if max < 100
		printf("Sayi 100 den kucuk\n");
	#elif min > 20
		printf("Sayi 20 den buyuk\n");
	#else
		printf("Tanimsiz sayi\n");
	#endif
	
	return 0;
}

